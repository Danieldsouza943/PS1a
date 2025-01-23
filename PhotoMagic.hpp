// Copyright 2024 Daniel Dsouza
#ifndef PHOTOMAGIC_HPP
#define PHOTOMAGIC_HPP
#include <algorithm>
#include "FibLFSR.hpp"
#include <SFML/Graphics.hpp>

namespace PhotoMagic {
  // Transforming imagage using FibLFSR.
  void transform(sf::Image&, FibLFSR*);
  // Displaying an encrypted copy of the picture, using the LFSR to do the encryption.
}
#endif
