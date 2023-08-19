#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FTranslationTrack {
    TArray<FVector> PosKeys; // 0x0
    TArray<float> Times; // 0x10
}; // Size: 0x20
#pragma pack(pop)
