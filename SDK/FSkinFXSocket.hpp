#pragma once
#include <cstdint>
#include "ESkinFXEnvelopeColorMod.hpp"
#include "ESkinFXSocketOutput.hpp"
#include "ESkinFXSocketOutputAlphaPack.hpp"
#include "FSkinFXBoneProperty.hpp"
#include "FSkinFXMaterialParamProperty.hpp"
#include "FSkinFXSocketAdvanced.hpp"
#include "FSkinFXSocketProperty.hpp"
#pragma pack(push, 1)
struct FSkinFXSocket {
    FSkinFXMaterialParamProperty MaterialParameter; // 0x0
    FSkinFXSocketProperty Socket; // 0x8
    FSkinFXBoneProperty Bone; // 0x10
    ESkinFXSocketOutput SocketOutput; // 0x18
    ESkinFXSocketOutputAlphaPack SocketOutputAlpha; // 0x19
    bool bMultiplyColorByEnvelope; // 0x1a
    ESkinFXEnvelopeColorMod EnvelopeColorMod; // 0x1b
    bool bMultiplyScalarByEnvelope; // 0x1c
    char pad_1d[0x3];
    FSkinFXSocketAdvanced Advanced; // 0x20
    bool bUseBone; // 0x2c
    bool bUseReferencePose; // 0x2d
    char pad_2e[0x2];
}; // Size: 0x30
#pragma pack(pop)
