<div align="center">
  <img src="https://github.com/user-attachments/assets/aacd99bf-ce18-481e-ba5c-6373f1bff0d6" alt="Onixyz Multiloader Logo" width="200" height="200">
  
  # Onixyz Multiloader
  
  **A modern ImGui-based game cheat loader with sleek design and smooth animations**
  
  ![Build Status](https://img.shields.io/badge/build-passing-brightgreen)
  ![Platform](https://img.shields.io/badge/platform-Windows-blue)
  ![Language](https://img.shields.io/badge/language-C%2B%2B-orange)
  ![License](https://img.shields.io/badge/license-Educational-yellow)
  
  *This project will be continuously updated over the coming weeks with detailed documentation of all changes*
</div>

---

## Preview

<div align="center">
  <img src="https://github.com/user-attachments/assets/4f9c0c83-50a2-4b65-9eca-7a42456d68ba" alt="Login Interface" width="45%">
  <img src="https://github.com/user-attachments/assets/4286c0d4-90e7-4800-993d-5696745df72e" alt="Main Interface" width="45%">
</div>

> **Note**: The application includes additional pages beyond what's shown here. Build the project to explore the complete interface. This is a pre-release source version for documentation and development tracking purposes.

---

## Features

- **Modern UI Design**: Clean, minimalist interface with purple-black color scheme
- **Smooth Animations**: Fluid transitions and hover effects throughout the application
- **Draggable Windows**: Both login and main windows can be moved around the screen
- **Game Library**: Supports multiple games including Counter-Strike 2, CS:GO, Valorant, Apex Legends, Rust, and GTA V
- **User Authentication**: Simple login system with username/password validation
- **Settings Panel**: Configurable options for auto-injection and notifications
- **Custom UI Elements**: Hand-crafted buttons, toggles, and input fields

---

## Technical Details

| Component | Technology |
|-----------|------------|
| **Framework** | Dear ImGui with DirectX 9 backend |
| **Language** | C++ |
| **Platform** | Windows |
| **Rendering** | Direct3D 9 |
| **Window Management** | Win32 API |

---

## Building

### Prerequisites
- **Visual Studio 2019** or later
- **Windows SDK**
- **DirectX 9 SDK**

### Build Instructions
```bash
1. Clone the repository
   git clone [repository-url]

2. Open the solution file
   Onixyz Multiloader.sln

3. Build in Release configuration for optimal performance

4. Find the executable in the built/ directory
```

---

## Project Structure

```
Onixyz-Multiloader
├── ui/                     # User interface components
│   ├── ui.cc              # Main UI rendering logic
│   ├── ui.hh              # UI header definitions
│   ├── custom_elements.cc # Custom UI elements implementation
│   ├── custom_elements.hh # Custom UI elements headers
│   └── logo_data.h        # Embedded logo data
├── imgui/                 # Dear ImGui library files
├── Assets/                # Application assets
│   └── logo.png           # Application logo
├── Main.cpp               # Application entry point
├── Main.h                 # Main header file
├── globals.hh             # Global state management
└── README.md              # This file
```

---

## Usage

**This is a source-only release** - no pre-built binaries or releases are provided. 

The project is intended for:
- Educational purposes
- Learning ImGui development
- Understanding modern UI design patterns
- Source code reference

---

## Customization

The application uses a modular design that makes it easy to:

- **Add new games** to the library
- **Modify the color scheme** in `custom_elements.cc`
- **Adjust animations** and UI behavior
- **Extend functionality** with new features

---

## Credits

- **notaila** - For the ImGui login page/loader base foundation

---

## License

This project is for **educational purposes only**. Please ensure you comply with all applicable laws and game terms of service when using this software.

---

## Disclaimer

This software is provided **as-is** for educational and research purposes only. The authors are not responsible for any misuse of this software or any consequences resulting from its use.

---

<div align="center">
  <p><strong>Made with love for the development community</strong></p>
  
  ![Visitors](https://visitor-badge.laobi.icu/badge?page_id=onixyz.multiloader)
</div> 
