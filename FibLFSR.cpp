// Copyright 2024 Daniel Dsouza
#include "FibLFSR.hpp"

namespace PhotoMagic {
    FibLFSR::FibLFSR(std::string seed) : register_(seed) {}

    int FibLFSR::step() {
        // Calculate the new bit as the XOR of the bits at the tap positions
        int newBit = ((register_[0] ^ register_[2]) ^ register_[3]) ^ register_[5];
        register_ = register_.substr(1) + std::to_string(newBit);
        return newBit;
    }

    int FibLFSR::generate(int k) {
        int result = 0;
        for (int i = 0; i < k; ++i) {
            result = (result << 1) | step();  // shift the result and append the new bit
        }
        return result;
    }

    std::ostream& operator<<(std::ostream& os, const FibLFSR& lfsr) {
        os << lfsr.register_;
        return os;
    }
}  // namespace PhotoMagic
