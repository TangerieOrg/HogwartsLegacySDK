#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FWorldFXCascadeSystemParamBase.hpp"
#pragma pack(push, 1)
struct FWorldFXCascadeSystemParamColor : public FWorldFXCascadeSystemParamBase {
    char pad_1[0x7];
    FColor Color; // 0x8
}; // Size: 0xc
#pragma pack(pop)
