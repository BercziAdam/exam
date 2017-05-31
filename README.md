# EXAM: HW Programming Foundation Phase - 1st

### Getting Started
 - Fork this repository under your own account
 - Clone the forked repository to your computer
 - Create a `.gitignore` file so generated files won't be committed
 - Commit your progress frequently and with descriptive commit messages
 - All your answers and solutions should go in this repository

### What can I use?
- You can use any resource online, but **please work individually**
- **Don't just copy-paste** your answers and solutions, use your own words instead.
- **Don't push your work** to GitHub until your mentor announces that the time is up

# Tasks
## 1-3. Complete the following tasks: (~90 mins)
- [Multiplication table](multiplication/multiply.c)
- [Pokemon](pokemon/pokemon.c)
- [ADC initialization](ADC/init.c)

### Acceptance criteria
The application is accepted if:
- The solution works according to specification
- The solution follows [styleguide](https://github.com/greenfox-academy/totoro-syllabus/blob/master/STYLEGUIDE.md)
- Has proper error handling where the specification says it
- Has the correct loops, methods, filters
- The code is clean, without unnecessary repetition, and with descriptive names
- You commit frequently with descriptive commit messages

## 4. Question time! (~15 mins) [4p]

An MCP4821 external DAC IC is connected to the ATmega168PB MCU via SPI.
The MCU clock speed is 16MHz. The SPI control and status registers are in the following state:
- `SPCR = 0b01010011;`
- `SPSR = 0b00xxxxx0;`

### What do you know about the SPI bus and about it's protocol? (max. 5 sentences) [2p]
#### Your answer:
[add your answer here]

### How much is the SPI clock frequency? [1p]
#### Your answer:
[add your answer here]

### What is the bit sequence on the MCU's MOSI pin when 0xAA byte is sent via SPI bus? [1p]
#### Your answer:
[add your answer here; if you write 100..., then we will interpret it as "1" comes first, then "0", then another "0", ...]
