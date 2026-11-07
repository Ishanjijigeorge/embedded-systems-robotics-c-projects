# Smart Device Inventory & Configuration Manager

Part 1 of the [Embedded Systems C Projects](../README.md) collection.

## What it does

- Register, search, update, and delete devices from a menu-driven inventory.
- Display stored device records and save the configuration to `devices.txt`.

## Build and run

From this directory, compile with GCC or Clang:

```sh
gcc -std=c11 -Wall -Wextra main.c -o device-inventory
./device-inventory
```

On Windows with GCC, build `main.exe` (or use `-o device-inventory.exe`) and run it from PowerShell with `.\main.exe`.

## Notes

- The source is split from the supplied combined file and has not been rewritten.
- Any data files are created relative to the program's current working directory.
- This is a console program; hardware behavior is simulated where applicable.
