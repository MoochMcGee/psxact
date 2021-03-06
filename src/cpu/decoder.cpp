#include "cpu_core.hpp"
#include "../utility.hpp"

using namespace psxact::cpu;

uint32_t core::decode_iconst() {
  return utility::sclip<16>(code);
}

uint32_t core::decode_uconst() {
  return utility::uclip<16>(code);
}

uint32_t core::decode_sa() {
  return utility::uclip<5>(code >> 6);
}

uint32_t core::decode_rd() {
  return utility::uclip<5>(code >> 11);
}

uint32_t core::decode_rt() {
  return utility::uclip<5>(code >> 16);
}

uint32_t core::decode_rs() {
  return utility::uclip<5>(code >> 21);
}
