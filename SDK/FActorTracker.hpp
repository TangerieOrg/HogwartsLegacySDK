#pragma once
#include <cstdint>
#include "FLocatorTracker.hpp"
#pragma pack(push, 1)
struct FActorTracker : public FLocatorTracker {
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
