# Project Changelog & History

All notable changes to the **BIGBEE** project will be documented in this file.
The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/).

## [Unreleased] - Work In Progress
### Added
- **Firmware:** Basic skeleton implementation for ESP32-S3 (PlatformIO).
- **FSM:** Defined finite state machine states (Sleep, Call, Audio, Config).
- **Pinout:** Frozen pin mapping for Hardware Rev 94.0.

### Pending
- Implementation of I2S audio driver (RX/TX).
- "Magic OTG" file system logic implementation.
- Zigbee coordinator stack integration.

---

## [v94.0] - 2025-11-30
### Security & Legal
- **Prior Art:** Official Technical Disclosure released via PEC (Certified Email).
- **License:** Project dual-licensed under CERN-OHL-S v2 (HW) and GPLv3 (SW).
- **Identity:** Brand change from internal codename "BIGBEN" to "BIGBEE".
- **Web:** Launch of official landing page on `bigbee-project.org`.

### Hardware Architecture
- **Finalized:** "Zero-Drain" Dual-Rail power architecture approved.
- **Interface:** Defined Universal 10-Pin Header with Jumper JP1 for compatibility.
- **Protection:** Added MOV (Varistors) on all input lines for ESD protection.
- **Mechanical:** Introduced "Docking Socket" concept with Pogo-Pins.

---

## [v80.0 - v93.0] - 2025-11-29
### Changed
- **Power:** Shifted from standard LDO to Switched Dual-Rail logic to minimize deep sleep current (<50uA).
- **Audio:** Abandoned analog OpAmp for digital I2S chain (MAX98357A + INMP441) to improve quality and modularity.
- **UX:** Introduced "Rhythmic Analysis" algorithm to distinguish VIP codes from spam ringing.
- **Config:** Deprecated Bluetooth pairing in favor of "Magic OTG" (USB Mass Storage) configuration for security/privacy reasons.

### Fixed
- Resolved potential issue with USB Inrush Current by designing an Active Soft-Start (Miller Integrator).
- Fixed RTC drift issue by specifying external DS3231 module without backup battery (Time Healing logic).

---

## [v0.1] - Project Inception
### Added
- Initial concept for a "No-Cloud, Long-Life Retrofit Intercom".
- Feasibility study on ESP32 Deep Sleep capabilities.
