# Crazy Elevator

A small terminal-based puzzle game written in C. You're stuck in an elevator that can only move a fixed number of floors up or down — and you need to reach a randomly chosen target floor.

---


## About

Crazy Elevator is a minimalist command-line game written in C that challenges you to navigate an elevator to a secret floor. The catch: you can only go **up 7 floors** or **down 3 floors** at a time, and the building has 30 floors. The target floor is picked randomly each run.

It's a good beginner-friendly C project that demonstrates:

- Basic input/output with `stdio.h`
- Random number generation with `srand`/`rand`
- Game loop logic with boundary checking

---

## Gameplay

```
Du befinder dig i en hiss i ett hus med 30 vaningar.
Hissen har tva knappar upp 7 (u) och ned 3 (n).
Hissen ar pa vaning 1 och ditt mal ar vaning 18.
Vaning 1: u
Vaning 8: u
Vaning 15: u
Vaning 22: n
Vaning 19: n
Vaning 16: u
Vaning 23: n
Vaning 20: n
Vaning 17: u
Vaning 24: n
Vaning 21: n
Vaning 18:
Grattis du har natt malet!
```

**Controls**

| Key | Action          |
|-----|-----------------|
| `u` | Go up 7 floors  |
| `n` | Go down 3 floors |

If a move would take you outside the building (below floor 1 or above floor 30), it's blocked and you try again.

---

## Getting Started

### Prerequisites

- A C compiler — [GCC](https://gcc.gnu.org/) or [Clang](https://clang.llvm.org/) work fine
- `make` (optional, for convenience)

### Building

Clone the repository and compile the single source file:

```bash
git clone https://github.com/Tjc-98/crazy-elevator.git
cd crazy-elevator
gcc src/crazy-elevator.c -o crazy-elevator
```

Or with Clang:

```bash
clang src/crazy-elevator.c -o crazy-elevator
```

### Running

```bash
./crazy-elevator
```

On Windows:

```cmd
crazy-elevator.exe
```

---

## Configuration

All game constants are defined at the top of `src/crazy-elevator.c` and can be adjusted to change the difficulty or building size.

| Constant           | Default | Description                        |
|--------------------|---------|------------------------------------|
| `LOWER_BOUND_LEVEL`| `1`     | Lowest floor in the building       |
| `UPPER_BOUND_LEVEL`| `30`    | Highest floor in the building      |
| `GO_UP_LEVELS`     | `7`     | Floors moved when pressing **u**   |
| `GO_DOWN_LEVELS`   | `3`     | Floors moved when pressing **n**   |
| `START_LEVEL`      | `1`     | Floor the elevator starts on       |

---

## License

Distributed under the MIT License. See [LICENSE](LICENSE) for details.
