#pragma once
#include <cstdint>
#include "FActorTracker.hpp"
#pragma pack(push, 1)
struct FSocketTracker : public FActorTracker {
    char pad_10[0x8];
    FName SocketName; // 0x18
}; // Size: 0x20
#pragma pack(pop)
