#pragma once
#include <cstdint>
#include "FSkinFXMaterialScalarProperty.hpp"
#include "FSkinFXScalarAdvanced.hpp"
#pragma pack(push, 1)
struct FSkinFXScalar {
    FSkinFXMaterialScalarProperty MaterialParameter; // 0x0
    float Scalar; // 0x8
    bool bMultiplyByASREnvelope; // 0xc
    char pad_d[0x3];
    FSkinFXScalarAdvanced Advanced; // 0x10
}; // Size: 0x30
#pragma pack(pop)
