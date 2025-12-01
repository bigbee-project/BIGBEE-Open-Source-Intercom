/*
 * BIGBEE - Main Firmware Entry Point
 * Copyright (C) 2025 BigBee Project
 * Released under GNU GPL v3
 */

#include <Arduino.h>
#include "bigbee_pins.h"

// System States
enum SystemState {
    STATE_DEEP_SLEEP,
    STATE_CALL_INCOMING,
    STATE_AUDIO_ACTIVE,
    STATE_DOOR_OPEN,
    STATE_MAGIC_CONFIG
};

SystemState currentState = STATE_DEEP_SLEEP;

void setup() {
    // 1. Hardware Init
    // Keep 5V Rail OFF to ensure Zero-Drain start
    pinMode(PIN_RAIL_B_EN, OUTPUT);
    digitalWrite(PIN_RAIL_B_EN, LOW);

    // 2. Wake-up Reason Check
    esp_sleep_wakeup_cause_t wakeup_reason = esp_sleep_get_wakeup_cause();
    
    if (wakeup_reason == ESP_SLEEP_WAKEUP_EXT0) {
        // Woken up by Intercom Call (CA)
        currentState = STATE_CALL_INCOMING;
    } else if (wakeup_reason == ESP_SLEEP_WAKEUP_EXT1) {
        // Woken up by User Buttons (PTT/AP)
        currentState = STATE_AUDIO_ACTIVE;
    } else {
        // Cold Boot or Timer
        currentState = STATE_DEEP_SLEEP;
    }
    
    // 3. RTC Sync Check (Time Healing)
    // checkRTCHealth();
}

void loop() {
    switch (currentState) {
        case STATE_CALL_INCOMING:
            // Analyze Rhythm (Standard vs VIP)
            // Play Ringtone from SD
            break;

        case STATE_AUDIO_ACTIVE:
            // Enable Rail B (5V)
            digitalWrite(PIN_RAIL_B_EN, HIGH);
            // Handle PTT Logic
            break;

        case STATE_MAGIC_CONFIG:
            // Mount USB MSC
            // Serve HTML Interface
            break;
            
        case STATE_DEEP_SLEEP:
        default:
            // Prepare for hibernation
            digitalWrite(PIN_RAIL_B_EN, LOW); // Kill Power to Peripherals
            esp_deep_sleep_start();
            break;
    }
}
