# Embedded System Diagnostic Console

Part 5 of the [Embedded Systems C Projects](../README.md) collection.

## What it does

- Inspect and change simulated motor, sensor, battery, communication, and fault states.
- Inject representative faults, run diagnostics, and view the fault log.
- Save the simulated configuration to `config.txt`; no physical hardware is controlled.

## Build and run

From this directory, compile with GCC or Clang:

```sh
gcc -std=c11 -Wall -Wextra main.c -o diagnostic-console
./diagnostic-console
```

On Windows with GCC, build `main.exe` (or use `-o diagnostic-console.exe`) and run it from PowerShell with `.\main.exe`.

## Notes

- The source is split from the supplied combined file and has not been rewritten.
- Any data files are created relative to the program's current working directory.
- This is a console program; hardware behavior is simulated where applicable.
