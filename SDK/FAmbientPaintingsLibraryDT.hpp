#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
class UFileMediaSource;
class UDataTable;
class UTexture2D;
#pragma pack(push, 1)
struct FAmbientPaintingsLibraryDT : public FTableRowBase {
    UFileMediaSource* AtlasMediaSource; // 0x8
    UDataTable* AtlasDataTable; // 0x10
    UTexture2D* Poster; // 0x18
    int32_t Width; // 0x20
    int32_t Count; // 0x24
}; // Size: 0x28
#pragma pack(pop)
