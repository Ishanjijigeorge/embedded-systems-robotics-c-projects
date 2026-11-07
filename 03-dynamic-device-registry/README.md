# Dynamic Device Registry

Part 3 of the [Embedded Systems C Projects](../README.md) collection.

## What it does

- Maintain a device registry with add, delete, search, and update operations.
- Display, count, sort, or clear registered devices.
- The original implementation uses a fixed-size array; the original project title is retained.

## Build and run

From this directory, compile with GCC or Clang:

```sh
gcc -std=c11 -Wall -Wextra main.c -o device-registry
./device-registry
```

On Windows with GCC, build `main.exe` (or use `-o device-registry.exe`) and run it from PowerShell with `.\main.exe`.

## Notes

- The source is split from the supplied combined file and has not been rewritten.
- Any data files are created relative to the program's current working directory.
- This is a console program; hardware behavior is simulated where applicable.
