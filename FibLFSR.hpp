// Copyright 2024 Daniel Dsouza
#ifndef FIBLFSR_HPP
#define FIBLFSR_HPP

#include <iostream>
#include <string>

namespace PhotoMagic {
class FibLFSR {
 public:
        // constructor to create LFSR with the given initial seed and taps
        explicit FibLFSR(std::string seed);

        // simulate one step and return the new bit as 0 or 1
        int step();

        // simulate k steps and return k-bit integer
        int generate(int k);

        // Overload the << stream insertion operator
        friend std::ostream& operator<<(std::ostream& os, const FibLFSR& lfsr);

 private:
        std::string register_;
        // Add any other fields you need for the taps and internal state
};

}  // namespace PhotoMagic

#endif
