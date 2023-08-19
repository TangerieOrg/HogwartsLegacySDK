#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "FSkinFXMaterialScalarProperty.hpp"
#include "FSkinFXScalarAdvanced.hpp"
#pragma pack(push, 1)
struct FSkinFXScalarCurve {
    FSkinFXMaterialScalarProperty MaterialParameter; // 0x0
    FRuntimeFloatCurve ScalarCurve; // 0x8
    float OutputScale; // 0x90
    bool bStretchToEnvelope; // 0x94
    bool bLoop; // 0x95
    bool bMultiplyByASREnvelope; // 0x96
    char pad_97[0x1];
    FSkinFXScalarAdvanced Advanced; // 0x98
}; // Size: 0xb8
#pragma pack(pop)
