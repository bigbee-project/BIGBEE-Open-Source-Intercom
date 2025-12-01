#ifndef BIGBEE_PINS_H
#define BIGBEE_PINS_H

// ==========================================
// BIGBEE HARDWARE REV 94.0 PIN DEFINITIONS
// ==========================================

// --- POWER MANAGEMENT & SENSORS ---
#define PIN_VBATT_ADC       4   // Battery Voltage Divider
#define PIN_VBATT_EN        5   // High-Side Switch for ADC (Zero-Drain)
#define PIN_VBUS_SENSE      18  // Detects USB Insertion
#define PIN_RAIL_B_EN       21  // Activates 5V Rail (Relays/Amp)

// --- AUDIO SUBSYSTEM (I2S) ---
#define PIN_I2S_BCLK        40
#define PIN_I2S_LRC         41  // WS / Word Select
#define PIN_I2S_DOUT        42  // To MAX98357A (Speaker)
#define PIN_I2S_DIN         43  // From INMP441 (Mic)
#define PIN_MIC_PWR         17  // Power Gating for Microphone

// --- INTERCOM INTERFACE (10-PIN HEADER) ---
#define PIN_CA_SENSE        10  // Call Signal Detection (Opto)
#define PIN_CP_SENSE        9   // Floor Bell Detection (Opto)
#define PIN_RELAY_AP        11  // Door Lock Release (K2)
#define PIN_RELAY_LS        12  // Stair Lights (K3)

// --- HUMAN MACHINE INTERFACE ---
#define PIN_BTN_PTT         6   // Push-To-Talk Button
#define PIN_BTN_AP          7   // Open Door Button
#define PIN_BTN_LS          8   // Lights Button
// RGB LED (Common Cathode)
#define PIN_LED_R           35
#define PIN_LED_G           36
#define PIN_LED_B           37

// --- EXPANSION ---
#define PIN_I2C_SDA         45  // RTC DS3231 Data
#define PIN_I2C_SCL         46  // RTC DS3231 Clock

#endif
