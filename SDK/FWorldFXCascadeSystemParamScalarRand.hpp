#pragma once
#include <cstdint>
#include "FWorldFXCascadeSystemParamBase.hpp"
#pragma pack(push, 1)
struct FWorldFXCascadeSystemParamScalarRand : public FWorldFXCascadeSystemParamBase {
    char pad_1[0x7];
    float Scalar; // 0x8
    float Scalar_Low; // 0xc
}; // Size: 0x10
#pragma pack(pop)
