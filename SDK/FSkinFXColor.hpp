#pragma once
#include <cstdint>
#include "ESkinFXEnvelopeColorMod.hpp"
#include "FLinearColor.hpp"
#include "FSkinFXColorAdvanced.hpp"
#include "FSkinFXMaterialVectorProperty.hpp"
#pragma pack(push, 1)
struct FSkinFXColor {
    FSkinFXMaterialVectorProperty MaterialParameter; // 0x0
    FLinearColor Color; // 0x8
    ESkinFXEnvelopeColorMod EnvelopeColorMod; // 0x18
    bool bMultiplyByASREnvelope; // 0x19
    char pad_1a[0x2];
    FSkinFXColorAdvanced Advanced; // 0x1c
}; // Size: 0x3c
#pragma pack(pop)
