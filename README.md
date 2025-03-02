# Random Password Generator in C

This is a simple **random password generator** written in C. The program allows users to choose which types of characters to include and generates a secure password based on their preferences.

## Features
- Users can select whether to include:
    - Lowercase letters (a-z)
    - Uppercase letters (A-Z)
    - Numbers (0-9)
    - Symbols (!@#$%^&*())
- Password length is user-defined.
- The program runs in a loop until the user decides to exit.
- Cross-platform compatibility (Windows, Linux, macOS).

## Compilation & Execution
### Linux/macOS
```sh
gcc main.c -o password_generator
./password_generator
```

### Windows (MinGW)
```sh
gcc main.c -o password_generator.exe
password_generator.exe
```

## Usage
1. Run the program.
2. Enter the desired password length.
3. Select which character sets to include.
4. The program will generate a password and display it.
5. Choose whether to generate another password or exit.

## Example Output
```
Enter password length: 12
Include lowercase letters? (y/n): y
Include uppercase letters? (y/n): y
Include numbers? (y/n): y
Include symbols? (y/n): n
Generated Password: Ab3dE1FgHjKl

Generate another password? (y/n): n
Goodbye!
```


---

Made by AngelMancila

