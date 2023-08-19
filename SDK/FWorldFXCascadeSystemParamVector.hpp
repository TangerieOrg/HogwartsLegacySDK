#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FWorldFXCascadeSystemParamBase.hpp"
#pragma pack(push, 1)
struct FWorldFXCascadeSystemParamVector : public FWorldFXCascadeSystemParamBase {
    char pad_1[0x7];
    FVector Vector; // 0x8
}; // Size: 0x14
#pragma pack(pop)
