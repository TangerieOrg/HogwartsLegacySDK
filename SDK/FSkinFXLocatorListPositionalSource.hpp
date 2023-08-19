#pragma once
#include <cstdint>
#include "ESkinFXLocatorListPositionalSourceType.hpp"
#include "FSkinFXBoneProperty.hpp"
#include "FSkinFXSocketProperty.hpp"
#include "FSkinFXUIParameters.hpp"
#pragma pack(push, 1)
struct FSkinFXLocatorListPositionalSource {
    FSkinFXBoneProperty Bone; // 0x0
    FSkinFXSocketProperty Socket; // 0x8
    ESkinFXLocatorListPositionalSourceType Source; // 0x10
    char pad_11[0x7];
    FSkinFXUIParameters ExtraParameters; // 0x18
}; // Size: 0x38
#pragma pack(pop)
