#pragma once
#include <cstdint>
#include "FMapDungeonSaveData.hpp"
#pragma pack(push, 1)
struct FMapDungeonSaveDataBlob {
    TArray<FMapDungeonSaveData> DungeonFOWDataListData; // 0x0
}; // Size: 0x10
#pragma pack(pop)
