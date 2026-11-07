# Embedded System Event Logger & Log Analyzer

Part 2 of the [Embedded Systems C Projects](../README.md) collection.

## What it does

- Record timestamped events with a type, severity, and description.
- View entries, filter by severity or event type, generate a summary, and clear the log.

## Build and run

From this directory, compile with GCC or Clang:

```sh
gcc -std=c11 -Wall -Wextra main.c -o event-logger
./event-logger
```

On Windows with GCC, build `main.exe` (or use `-o event-logger.exe`) and run it from PowerShell with `.\main.exe`.

## Notes

- The source is split from the supplied combined file and has not been rewritten.
- Any data files are created relative to the program's current working directory.
- This is a console program; hardware behavior is simulated where applicable.
