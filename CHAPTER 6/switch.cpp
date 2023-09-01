// Evaluates given input

int command = menu(); // The function menu() reads a command.

switch (command) {
    case 'a':
    case 'A':
            action1();  // Carry out 1st action
            break;
    case 'b':
    case 'B':
            action2();  // Carry out 2nd action
            break;
    default:
            cout << '\a' << flush; // Beep on invalid input
}