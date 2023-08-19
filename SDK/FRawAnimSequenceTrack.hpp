#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRawAnimSequenceTrack {
    TArray<FVector> PosKeys; // 0x0
    TArray<FQuat> RotKeys; // 0x10
    TArray<FVector> ScaleKeys; // 0x20
}; // Size: 0x30
#pragma pack(pop)
