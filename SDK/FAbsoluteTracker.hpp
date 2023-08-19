#pragma once
#include <cstdint>
#include "FLocatorTracker.hpp"
#pragma pack(push, 1)
struct FAbsoluteTracker : public FLocatorTracker {
    char pad_8[0x48];
}; // Size: 0x50
#pragma pack(pop)
