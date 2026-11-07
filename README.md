# Embedded Systems & Robotics — C Projects

Five beginner-friendly, menu-driven C programs for practicing programming fundamentals through small embedded-systems and robotics scenarios.

> **Learning context:** I am undertaking a three-month internship in Embedded Systems and Robotics at **Evolve Robotics, Kadavanthara, Kochi**. This repository organizes the C projects from that learning experience so they are easy to build, explore, and revisit.

These are console-based learning exercises. They simulate device and system behavior; they do not connect to or control physical hardware.

## Projects

| # | Project | What you can practice |
|---|---|---|
| 1 | [Smart Device Inventory & Configuration Manager](01-smart-device-inventory/README.md) | Structures, arrays, searching, updating, and file output |
| 2 | [Embedded System Event Logger & Log Analyzer](02-event-logger/README.md) | Structures, timestamps, filtering, and summary reports |
| 3 | [Dynamic Device Registry](03-dynamic-device-registry/README.md) | Registry operations, counting, sorting, and menu-driven logic |
| 4 | [Mini Task Scheduler](04-mini-task-scheduler/README.md) | Task state, priorities, and a simple tick-based scheduling simulation |
| 5 | [Embedded System Diagnostic Console](05-diagnostic-console/README.md) | State changes, diagnostic checks, and simulated fault reporting |

Each project folder contains its own `main.c` source file and README with project-specific details.

## Getting started

### What you need

- A computer with a terminal or command prompt
- A C compiler: **GCC** or **Clang** is recommended for beginners; MSVC also works

Check whether GCC is installed:

```sh
gcc --version
```

If that command is not recognized, install a C compiler for your operating system before continuing.

### Build and run your first project

Open a terminal in this repository, then compile and run Project 1.

**Linux or macOS:**

```sh
cd 01-smart-device-inventory
gcc -std=c11 -Wall -Wextra main.c -o device-inventory
./device-inventory
```

**Windows PowerShell with GCC:**

```powershell
Set-Location 01-smart-device-inventory
gcc -std=c11 -Wall -Wextra main.c -o device-inventory.exe
.\device-inventory.exe
```

To try another project, return to the repository directory, enter its folder, and compile its `main.c`. The executable name is up to you. With MSVC, run `cl /W4 main.c` from a Developer Command Prompt and start the resulting `main.exe`.

## A beginner's way to explore

1. Read the matching project README before running the program.
2. Build and run it without changing the source first.
3. Follow the menu options and note how the displayed state changes.
4. Open `main.c` and trace the menu loop, `switch` cases, and structures.
5. Try ordinary and boundary inputs, such as an unknown ID or an empty list.
6. Make one small change at a time, then compile and test again.

## Concepts you'll encounter

- C structures and fixed-size arrays
- Variables, loops, conditionals, and `switch` statements
- Console input and output
- Searching, updating, sorting, and deleting records
- Basic timestamps and file handling
- Representing device states, tasks, events, and faults in software

## Important notes

- The source programs are preserved from the supplied combined C file; only the project-title lines between programs were omitted when splitting them into separate files.
- These are original learning examples, not production-ready or safety-critical software. Input validation, storage limits, and error handling may be incomplete.
- Programs that write data files create them in the current working directory. Check each project README for details.
- No license is included. All rights remain with the author unless a license is added.
