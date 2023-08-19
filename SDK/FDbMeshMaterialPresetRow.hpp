#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FDbMeshMaterialPresetRow : public FTableRowBase {
    FName MeshName; // 0x8
    FName PresetName; // 0x10
    char pad_18[0x50];
    UTexture2D* Icon; // 0x68
}; // Size: 0x70
#pragma pack(pop)
