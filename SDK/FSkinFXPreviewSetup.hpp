#pragma once
#include <cstdint>
#include "ESkinFXPreviewType.hpp"
#include "FSkinFXMaterialOverride.hpp"
#include "FSkinFXPreviewAnimationSetup.hpp"
#pragma pack(push, 1)
struct FSkinFXPreviewSetup {
    ESkinFXPreviewType Type; // 0x0
    char pad_1[0x57];
    FSkinFXPreviewAnimationSetup Animation; // 0x58
    FSkinFXMaterialOverride MaterialOverrides; // 0x90
}; // Size: 0xa8
#pragma pack(pop)
