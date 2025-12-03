

```
██▀▀█ █ █▀▀ █▀▀█ █▀▀ █▀▀
██▀▀▄ █ █ █ █▀▀▄ █▀▀ █▀▀
██▄▄█_█_▀▀▀_██▄█_█▄▄_█▄▄
▄▄ EVOLVING THE LEGACY ▄▄
```

BIGBEE: The New Standard for Retrofit Intercoms

Zero-Drain. No-Cloud. Evolving The Legacy.

This repository is currently public for Technical Disclosure and Prior Art purposes only.
The codebase is under activ development.

1. PITCH (SUMMARY OF INNOVATION)

BIGBEE is a complete replacement device for analog intercoms (4+n standard) that introduces a new paradigm: it combines contextual home automation, melodic audio, extended autonomy (>7 months), and total privacy (No-Cloud), powered by a proprietary "Zero-Drain" architecture with physical power bypass.

2. FIELD OF APPLICATION

This specification describes a method for the non-invasive modernization of existing intercom systems. The system replaces the original appliance by introducing a "low-cost invisible brain" (based on standard ESP32 microcontroller) that democratizes access to advanced home automation without requiring expensive condominium infrastructure upgrades.

3. TECHNICAL PROBLEM SOLVED

Current systems suffer from planned battery obsolescence, dependence on complex pairing procedures via App, and inoperability without network. BIGBEE solves these problems through an "Offline-First" logic, energy management with physical cell exclusion, and a universal file-system-based configuration.

4. DETAILED ARCHITECTURE DESCRIPTION

A. "True UPS" Energy Management with Physical Bypass

The architecture provides dual source management:

1.  Battery Mode (Zero-Drain): Monitoring activated only once every 24h.
2.  Mains/Powerbank Mode (Battery Saver): connecting an external source (USB-C), the system switches a power relay that physically excludes the batteries from the load circuit. The device runs exclusively on external power, preserving cell chemistry (no micro-cycles) and ensuring a battery life comparable to their shelf-life (years).

B. "Melodic High-Fidelity" Audio

1.  WAV on SD: Customizable melodic ringtones on local memory.
2.  PTT Speakerphone: "Push-To-Talk" interface without handset, with digital I2S amplification.

C. Contextual Automation Logic

1.  Anti-Paranoia: Software filter that ignores compulsive ringing.
2.  Smart Access: Silent automatic opening on long press.
3.  Security Light: Automatic stair light activation on floor bell call (CP).
4.  Maintenance Mode: Keeps stair lights active for extended operations.

D. "Magic OTG" Configuration (Air-Gapped & App-Free)

The device eliminates the need for temporary Access Points or proprietary Apps through a bidirectional procedure on USB-A Host port:

1.  Automatic Export: Upon insertion of an empty USB stick, BIGBEE creates a folder structure containing current audio files (.wav) and a self-contained management page (setup.html).
2.  Offline Configuration: The user modifies parameters (WiFi, Volumes, Timer) via browser by opening the setup.html file.
3.  Import & Flash: Upon reinsertion, BIGBEE validates the JSON integrity and applies the configuration.

E. "Out-of-the-Box" Operability (Total Offline-First)

The system guarantees full operability of all core functions immediately upon first power-up, without any Wi-Fi configuration. Network connectivity is treated as a purely accessory layer needed only for NTP (Time Healing) and remote functions (VoIP/MQTT).

F. HMI "Single-Point" Interface

Complex feedback managed through a single RGB LED (Color Code) and synthesized Audio Tones, for a minimalist, low-power design.

5. INNOVATION CLAIMS (TECHNICAL CLAIMS)

Authorship and temporal priority (Prior Art) are claimed for the following implementations:

1.  "Battery Preservation Bypass" Method: Circuit architecture using a changeover relay to power the load directly from the external USB source, galvanically isolating batteries to zero micro-cycle wear.
2.  "Magic OTG" Configuration System: Setup method utilizing dynamic generation of a static web interface (.html) on removable USB mass storage.
3.  Contextual Automation: Simultaneous Door+Light activation and Light activation on Floor Bell.
4.  Hybrid "Headless" Interface: Combination of physical buttons for quick adjustments and USB configuration for deep settings.
5.  "Over-Spec" Construction: Systematic component oversizing for thermal stability and decennial durability.
6.  Hybrid Multi-Protocol Architecture (Future Embodiment): Extension to include IEEE 802.15.4 (Zigbee, Thread, Matter) connectivity.

6. LICENSE AND TIMESTAMPS

This hardware project is released under license CERN OHL-S v2.
The associated firmware is released under license GNU GPL v3.

Architecture Definition Date: November 30, 2025
Contact: project.bigbee@gmail.com

### LEGAL DEPOSIT & SECURE TIMESTAMP
The Master Technical Disclosure (PDF) containing full schematics and source code structure has been timestamped via **PEC (Certified Email)** to establish incontestable Prior Art.

**SHA-256 HASH OF THE DEPOSITED FILE:**
`9396d5be6598b9766cd52411cb79d3a85c1cc8e3e17776618e5469ff288f179d`

*(This hash creates a mathematical link between this public repository and the certified legal document).*

