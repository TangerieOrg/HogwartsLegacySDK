#pragma once
#include <cstdint>
#include "FWorldFXCascadeSystemParamBase.hpp"
#pragma pack(push, 1)
struct FWorldFXCascadeSystemParamScalar : public FWorldFXCascadeSystemParamBase {
    char pad_1[0x7];
    float Scalar; // 0x8
}; // Size: 0xc
#pragma pack(pop)
