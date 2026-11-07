# Mini Task Scheduler

Part 4 of the [Embedded Systems C Projects](../README.md) collection.

## What it does

- Create periodic tasks with priorities and display the task table.
- Run a simple tick-based scheduler simulation from the console.
- This is a software simulation; it does not schedule operating-system or hardware tasks.

## Build and run

From this directory, compile with GCC or Clang:

```sh
gcc -std=c11 -Wall -Wextra main.c -o task-scheduler
./task-scheduler
```

On Windows with GCC, build `main.exe` (or use `-o task-scheduler.exe`) and run it from PowerShell with `.\main.exe`.

## Notes

- The source is split from the supplied combined file and has not been rewritten.
- Any data files are created relative to the program's current working directory.
- This is a console program; hardware behavior is simulated where applicable.
