#pragma once
#include <cstdint>
#include "ESkinFXSocketOutput.hpp"
#include "ESkinFXSocketOutputAlphaPack.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FSkinFXBoneProperty.hpp"
#include "FSkinFXMaterialParamProperty.hpp"
#include "FSkinFXSocketLerpAdvanced.hpp"
#include "FSkinFXSocketProperty.hpp"
#pragma pack(push, 1)
struct FSkinFXSocketLerp {
    FSkinFXMaterialParamProperty MaterialParameter; // 0x0
    FSkinFXSocketProperty SocketOne; // 0x8
    FSkinFXBoneProperty BoneOne; // 0x10
    FSkinFXSocketProperty SocketTwo; // 0x18
    FSkinFXBoneProperty BoneTwo; // 0x20
    bool bUseBoneOne; // 0x28
    bool bUseBoneTwo; // 0x29
    ESkinFXSocketOutput SocketOutput; // 0x2a
    ESkinFXSocketOutputAlphaPack SocketOutputAlpha; // 0x2b
    char pad_2c[0x4];
    FRuntimeFloatCurve LerpCurve; // 0x30
    bool bStretchToEnvelope; // 0xb8
    bool bLoop; // 0xb9
    bool bMultiplyByASREnvelope; // 0xba
    char pad_bb[0x1];
    FSkinFXSocketLerpAdvanced Advanced; // 0xbc
}; // Size: 0xc8
#pragma pack(pop)
