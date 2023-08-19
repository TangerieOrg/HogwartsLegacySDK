#pragma once
#include <cstdint>
#include "FMiniMapSanctuarySaveData.hpp"
#include "FMiniMapTentsData.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMiniMapSaveDataBlob {
    char pad_0[0x8];
    FMiniMapSanctuarySaveData Sanctuary; // 0x8
    char pad_20[0x4];
    FMiniMapTentsData Tents; // 0x24
    char pad_28[0x3];
    bool IsInTent; // 0x2b
    char pad_2c[0x4];
    FString LastTentName; // 0x30
    FVector LastOverlandLocation; // 0x40
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
