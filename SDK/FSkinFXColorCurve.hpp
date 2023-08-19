#pragma once
#include <cstdint>
#include "ESkinFXEnvelopeColorMod.hpp"
#include "FRuntimeCurveLinearColor.hpp"
#include "FSkinFXColorAdvanced.hpp"
#include "FSkinFXMaterialVectorProperty.hpp"
#pragma pack(push, 1)
struct FSkinFXColorCurve {
    FSkinFXMaterialVectorProperty MaterialParameter; // 0x0
    FRuntimeCurveLinearColor ColorCurve; // 0x8
    bool bStretchToEnvelope; // 0x210
    bool bLoop; // 0x211
    ESkinFXEnvelopeColorMod EnvelopeColorMod; // 0x212
    bool bMultiplyByASREnvelope; // 0x213
    FSkinFXColorAdvanced Advanced; // 0x214
    char pad_234[0x4];
}; // Size: 0x238
#pragma pack(pop)
