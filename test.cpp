// Copyright 2022
// By Dr. Rykalova
// Edited by Dr. Daly
// test.cpp for PS1a
// updated 1/8/2024

#include <iostream>
#include <string>
#include <sstream>

#include "FibLFSR.hpp"

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Main
#include <boost/test/unit_test.hpp>

using PhotoMagic::FibLFSR;

BOOST_AUTO_TEST_CASE(testStepInstr) {
  FibLFSR l("1011011000110110");
  BOOST_REQUIRE_EQUAL(l.step(), 0);
  BOOST_REQUIRE_EQUAL(l.step(), 0);
  BOOST_REQUIRE_EQUAL(l.step(), 0);
  BOOST_REQUIRE_EQUAL(l.step(), 1);
  BOOST_REQUIRE_EQUAL(l.step(), 1);
  BOOST_REQUIRE_EQUAL(l.step(), 0);
  BOOST_REQUIRE_EQUAL(l.step(), 0);
  BOOST_REQUIRE_EQUAL(l.step(), 1);
}

BOOST_AUTO_TEST_CASE(testGenerateInstr) {
  FibLFSR l("1011011000110110");
  BOOST_REQUIRE_EQUAL(l.generate(9), 51);
}

BOOST_AUTO_TEST_CASE(testPrintToScreen) {
  // Redirect cout to a stringstream
  std::ostringstream redirected_output;
  std::streambuf* original_cout = std::cout.rdbuf(redirected_output.rdbuf());

  // Perform the action that should print to the screen
  FibLFSR l("1011011000110110");
  std::cout << l;  // Assuming you have overloaded the << operator

  // Restore the original cout
  std::cout.rdbuf(original_cout);

  // Check if the printed output matches the expected output
  BOOST_CHECK_EQUAL(redirected_output.str(), "1011011000110110");
}

BOOST_AUTO_TEST_CASE(testInitialState) {
  FibLFSR l("1011011000110110");
  std::stringstream ss;
  ss << l;
  BOOST_REQUIRE_EQUAL(ss.str(), "1011011000110110");
}
