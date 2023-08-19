#pragma once
#include <cstdint>
#include "FActorTracker.hpp"
#pragma pack(push, 1)
struct FComponentTracker : public FActorTracker {
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
