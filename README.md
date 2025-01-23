# PS1a: Image Encryption/Decryption through LFSR
Name: Daniel Dsouza
Section: 201
Time to Complete: 4 hours

## Description
This project implements a 16-bit FibLFSR to simulate pseudo-random bit generation. The register is initialized with a seed, and bits are shifted and manipulated using XOR operations at specific tap positions.

### Features
In this project, the LFSR is represented using a std::string to store the bits. This choice simplifies accessing and modifying individual bits, while also making it easy to convert the register into a printable form using the overloaded << operator. The taps are located at positions 13, 12, and 10, and the register’s operations are driven by these fixed tap positions during the XOR process in step().
Implemented the FibLFSR class with methods for stepping the register and generating multiple bits.
Overloaded the << operator to display the register’s current state.

#### Part a

### Issues
I have not ran into any issues.

### Tests
I have implemented a test that checks if the overloaded operator correctly outputs the number to the screen, and a second test that checks that the constructor initializes the member data correctly. I have also implemented two tests for generate() basically to validate the generated bit sequence matches the expected result after k steps. In addition I made some changes. I added necessary includes in both Photomagic.cpp as well as the Photomagic.hpp files, fixed linting issues and an error in the Makefile that was caused because of a missing main.cpp file. Also fixed test cases in test.cpp.

### Extra Credit
Anything special you did. This is required to earn bonus points.

## Acknowledgements
List all sources of help including the instructor or TAs, classmates, and web pages.

### Credits
Stackoverflow.com

