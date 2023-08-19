#pragma once
#include <cstdint>
#include "FInterpCurvePointTwoVectors.hpp"
#pragma pack(push, 1)
struct FInterpCurveTwoVectors {
    TArray<FInterpCurvePointTwoVectors> Points; // 0x0
    bool bIsLooped; // 0x10
    char pad_11[0x3];
    float LoopKeyOffset; // 0x14
}; // Size: 0x18
#pragma pack(pop)
