<div align="center">
<pre>
██▀▀█ █ █▀▀ █▀▀█ █▀▀ █▀▀
██▀▀▄ █ █ █ █▀▀▄ █▀▀ █▀▀
██▄▄█_█_▀▀▀_██▄█_█▄▄_█▄▄
▄▄ EVOLVING THE LEGACY ▄▄
</pre>
</div>

# BIGBEE INTERCOM | SYSTEM SPECIFICATION

**Current Status:** ACTIVE DEVELOPMENT
**Architecture Revision:** 97.0 (Apollo Release)
**License:** CERN-OHL-S v2 (Hardware) / GNU GPL v3 (Firmware)

---

## 1. EXECUTIVE SUMMARY

BIGBEE is a retrofit engineered device designed to modernize analog intercom systems (4+n standard) without reliance on cloud infrastructure or subscription services. It replaces the traditional handset with a high-performance, privacy-focused smart node based on the ESP32-S3 architecture.

The project introduces a paradigm shift in retrofitting by solving the three historical constraints of the sector: energy autonomy, installation complexity, and data privacy.

## 2. CORE TECHNOLOGY: APOLLO INTERLOCK

**NOTICE OF TECHNICAL DISCLOSURE (PRIOR ART)**
This repository documents a proprietary power management topology designated as "Apollo Interlock".

### The Problem: The Power Loop Paradox
In self-powered OTG (On-The-Go) devices, a single USB-C port cannot typically serve as both a Power Input (Charging) and Power Output (Data transfer) without complex microcontroller intervention or risk of electrical back-feeding.

### The Solution: Hardware Priority Arbitration
BIGBEE implements a deterministic, hardware-layer gatekeeping logic using a **Q_GUARD / Q_KILL topology**.
This circuit physically prioritizes battery protection over USB enumeration. It creates an immediate, physics-based interlock that prevents the relay coil from activating if the device is self-generating the rail voltage. This ensures failsafe operation of a **Single-Port Interface** for both high-current charging and mass-storage configuration, eliminating the need for secondary service ports or mechanical jumpers.

## 3. SYSTEM ARCHITECTURE

### A. Zero-Drain Power Management
The device operates on a "True UPS" logic.
* **Idle State:** The system runs on Li-Ion cells with a quiescent current below 10µA.
* **Active State:** Upon external power connection (USB-C), a mechanical relay physically bypasses the battery, powering the load directly from the mains. This preserves cell chemistry by eliminating micro-cycles.

### B. High-Definition Audio Pipeline
* **Input:** MEMS I2S Microphone (INMP441) for digital acquisition.
* **Output:** Class-D I2S Amplifier (MAX98357A) with 12dB hardware gain.
* **Processing:** Fully digital signal chain, immune to analog line noise and GSM interference.

### C. Magic OTG Configuration (Air-Gapped)
BIGBEE eliminates the need for temporary WiFi Access Points or Bluetooth pairing.
* **Method:** The device emulates a Mass Storage Class (MSC) drive when connected to a PC via the Apollo Port.
* **Interface:** Configuration is performed via a self-contained HTML file generated on the fly.
* **Security:** This offline-first approach ensures 100% air-gapped setup capability.

### D. Context-Aware Automation
The firmware implements logic to distinguish between legitimate calls and disturbances:
* **Anti-Paranoia Filter:** Suppresses repetitive ringing.
* **Smart Access:** Silent door opening via long-press pattern.
* **Security Light:** Automatic stair light activation upon floor bell trigger.

## 4. ECOSYSTEM ROADMAP

BIGBEE Intercom is the foundational node of a decentralized, local-first home automation grid.

| PROJECT NODE | ROLE | STATUS |
| :--- | :--- | :--- |
| **BIGBEE INTERCOM** | Entry Point & Security | ACTIVE DEVELOPMENT |
| **BIGBEE HIVE** | Local Core & MQTT Bridge | R&D / CONCEPT |
| **BIGBEE CLIMA** | HVAC & Climate Control | CLASSIFIED |
| **BIGBEE SENSE** | Presence & Multi-Sensor | CLASSIFIED |

## 5. TECHNICAL CLAIMS

Authorship and temporal priority are claimed for the following implementations:

1.  **Apollo Interlock Topology:** A discrete component circuit for automatic, bi-directional power arbitration on a single connector without MCU supervision.
2.  **Battery Preservation Bypass:** The use of electromechanical switching to physically isolate electrochemical cells during external power operation.
3.  **Magic OTG Deployment:** The method of using a locally generated file system for headless device configuration.

## 6. LEGAL DEPOSIT & TIMESTAMP

The Master Technical Disclosure (PDF) containing the complete schematics, PCB layout, and source code structure has been timestamped via **PEC (Certified Email)** to establish incontestable Prior Art in accordance with international intellectual property standards.

**SHA-256 HASH OF THE MASTER DEPOSIT:**
`9396d5be6598b9766cd52411cb79d3a85c1cc8e3e17776618e5469ff288f179d`

*(This hash creates a mathematical immutable link between this public repository and the certified legal document).*

---

**CONTACT & RESOURCES**
* **Official Website:** bigbee-project.org
* **Maintainer:** Project BIGBEE Lead
* **Repository:** github.com/bigbee-project
