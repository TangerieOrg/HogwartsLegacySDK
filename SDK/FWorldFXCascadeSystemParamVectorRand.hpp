#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FWorldFXCascadeSystemParamBase.hpp"
#pragma pack(push, 1)
struct FWorldFXCascadeSystemParamVectorRand : public FWorldFXCascadeSystemParamBase {
    char pad_1[0x7];
    FVector Vector; // 0x8
    FVector Vector_Low; // 0x14
}; // Size: 0x20
#pragma pack(pop)
