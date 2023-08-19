#pragma once
#include <cstdint>
#include "FAvatarPresetIconInfo.hpp"
#include "FAvatarPresetPieceInfo.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FAvatarPresetInfo : public FTableRowBase {
    TArray<FAvatarPresetPieceInfo> Meshes; // 0x8
    bool bIsColor; // 0x18
    char pad_19[0x7];
    FAvatarPresetIconInfo MaleIconInfo; // 0x20
    FAvatarPresetIconInfo FemaleIconInfo; // 0x70
}; // Size: 0xc0
#pragma pack(pop)
