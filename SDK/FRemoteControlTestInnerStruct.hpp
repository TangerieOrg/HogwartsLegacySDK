#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRemoteControlTestInnerStruct {
    FColor Color; // 0x0
    char pad_4[0x4];
    TArray<float> FloatArray; // 0x8
    TArray<FVector> ArrayOfVectors; // 0x18
}; // Size: 0x28
#pragma pack(pop)
