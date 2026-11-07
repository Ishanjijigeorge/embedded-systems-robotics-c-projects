# Embedded Systems C Projects

Five menu-driven C console programs collected from the original `EVOLVE PROJECT.C` source. Each project is kept in its own directory with its own source file and guide.

## Projects

| # | Project | Source |
|---|---|---|
| 1 | [Smart Device Inventory & Configuration Manager](01-smart-device-inventory/README.md) | [`main.c`](01-smart-device-inventory/main.c) |
| 2 | [Embedded System Event Logger & Log Analyzer](02-event-logger/README.md) | [`main.c`](02-event-logger/main.c) |
| 3 | [Dynamic Device Registry](03-dynamic-device-registry/README.md) | [`main.c`](03-dynamic-device-registry/main.c) |
| 4 | [Mini Task Scheduler](04-mini-task-scheduler/README.md) | [`main.c`](04-mini-task-scheduler/main.c) |
| 5 | [Embedded System Diagnostic Console](05-diagnostic-console/README.md) | [`main.c`](05-diagnostic-console/main.c) |

## Requirements

- A C compiler such as GCC, Clang, or Microsoft C/C++ (MSVC)
- A terminal or command prompt

## Build and run one project

Choose a project directory and compile its `main.c` from that directory.

**GCC or Clang (macOS/Linux):**

```sh
cd 01-smart-device-inventory
gcc -std=c11 -Wall -Wextra main.c -o device-inventory
./device-inventory
```

**GCC on Windows (PowerShell):**

```powershell
Set-Location 01-smart-device-inventory
gcc -std=c11 -Wall -Wextra main.c -o device-inventory.exe
.\device-inventory.exe
```

Replace the directory and executable names with those listed in the relevant project README. With MSVC, run `cl /W4 main.c` from a Developer Command Prompt and launch `main.exe`.

## Source fidelity

The five C files are split from the supplied source. The program code is preserved as provided; only the project-title lines that were interleaved between programs in the combined file are omitted from the `.c` files. The READMEs document the original programs and do not imply that code has been corrected or hardware-tested.

Some projects write files in their current working directory. Project-specific behavior is documented in each guide.

## License

No license is included. All rights remain with the original author unless a license is added.
