# PRPR - C Exercises and File-Processing Project

A collection of C exercises and the first version of the semester project for
Procedural Programming (PRPR) at FIIT STU.

## Contents

```
exercises/
├── 133751_2026_1/   basics: input, arithmetic, conditions
├── 133751_2026_2/   loops, arrays, functions
├── 133751_2026_3/   pointers, strings
├── 133751_2026_4/   structures, files
├── 133751_2026_5/   dynamic memory, linked lists
└── 133751_2026_6/   mixed exercises
project/
├── 133751_projekt_v1.c   passenger-list reader + character histogram
├── zoznamCK.txt          sample passenger list
└── checkin1.txt          sample check-in data
```

## Project (v1)

The program reads commands from stdin:

- `v 1` - prints passengers from `zoznamCK.txt` with a simplified age
  (`2026 - year of birth`), records separated by a blank line.
- `h` - prints a histogram of `zoznamCK.txt`: uppercase letters by frequency,
  lowercase letters alphabetically, digits by frequency, format `char : count`.
- `k` - exits.

It also handles missing files (`V1: Neotvorene txt subory.`) and an unopened
histogram source (`H: Neotvoreny subor.`).

## Build and run

### Windows (PowerShell)

```powershell
gcc -std=c11 -Wall -Wextra -Wpedantic project/133751_projekt_v1.c -o projekt.exe

Set-Location project
"v","1","h","k" | ..\projekt.exe
Set-Location ..
```

### Linux / macOS

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic project/133751_projekt_v1.c -o projekt
cd project
printf 'v\n1\nh\nk\n' | ../projekt
```

The program expects `zoznamCK.txt` and `checkin1.txt` in the working directory, so
run it from `project/`.

The exercises are standalone `.c` files; compile any of them directly:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic exercises/133751_2026_4/133751_2026_4_7.c -o uloha
```

## What I learned

- C memory model, pointers, strings and manual buffers.
- File parsing with `fscanf` and careful format strings.
- Keeping output byte-exact against a specification.
- Building small programs without external libraries.

## Author

Ondrej Nebus — FIIT STU, 2025/26.
