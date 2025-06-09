# Drone

---

## Board Information

- MCU: STM32H723ZGt6 (on Nucleo-H723ZG board)
---


## Prerequisites

- [STM32CubeProgrammer](https://www.st.com/en/development-tools/stm32cubeprog.html)
- [GNU Arm Embedded Toolchain (arm-none-eabi-gcc)](https://developer.arm.com/downloads/-/gnu-rm)
- ST-LINK USB debugger (built into Nucleo boards)
- `make` (preinstalled on Linux/macOS; install [Make for Windows](http://gnuwin32.sourceforge.net/packages/make.htm) if needed)

---

## 1. Clone the Repository

```bash
git clone https://github.com/jasdipsekhon/Drone.git
cd Drone
```

---

## 2. Build the Project

```bash
make
```

---

## 3. Flash Firmware

**a. macOS:**
```bash
/Applications/STMicroelectronics/STM32Cube/STM32CubeProgrammer/STM32CubeProgrammer.app/Contents/MacOs/bin/STM32_Programmer_CLI -c port=SWD -d build/Drone.elf -rst
```

**b. Windows:**
```powershell
"C:\Program Files\STMicroelectronics\STM32Cube\STM32CubeProgrammer\bin\STM32_Programmer_CLI.exe" -c port=SWD -d build\Drone.elf -rst
```

**c. Linux:**
```bash
STM32_Programmer_CLI -c port=SWD -d build/Drone.elf -rst
```
