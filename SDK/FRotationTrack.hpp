#pragma once
#include <cstdint>
#include "FQuat.hpp"
#pragma pack(push, 1)
struct FRotationTrack {
    TArray<FQuat> RotKeys; // 0x0
    TArray<float> Times; // 0x10
}; // Size: 0x20
#pragma pack(pop)
