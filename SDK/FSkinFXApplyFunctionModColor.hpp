#pragma once
#include <cstdint>
#include "ESkinFXEnvelopeColorMod.hpp"
#include "ESkinFXFunctionModOp.hpp"
#include "FSkinFXFunctionProperty.hpp"
#pragma pack(push, 1)
struct FSkinFXApplyFunctionModColor {
    FSkinFXFunctionProperty Function; // 0x0
    float Scale; // 0x8
    ESkinFXFunctionModOp Op; // 0xc
    char pad_d[0x3];
    float ClampMin; // 0x10
    float ClampMax; // 0x14
    bool bClampMin; // 0x18
    bool bClampMax; // 0x19
    ESkinFXEnvelopeColorMod ColorMod; // 0x1a
    char pad_1b[0x1];
}; // Size: 0x1c
#pragma pack(pop)
