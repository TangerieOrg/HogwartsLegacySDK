#pragma once
#include <cstdint>
#include "ESanctuaryMiniMapType\Type.hpp"
#pragma pack(push, 1)
struct FMiniMapSanctuarySaveData {
    char pad_0[0x10];
    ESanctuaryMiniMapType::Type CurrentMapType; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
