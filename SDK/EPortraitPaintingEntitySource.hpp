#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPortraitPaintingEntitySource : uint8_t {
    Unresolved = 0,
    FleshCacheCallback = 1,
    CustomizableCharacterCallBack = 2,
    CustomizableCharacterScan = 3,
    PopulationManager = 4,
    EPortraitPaintingEntitySource_MAX = 5,
};
#pragma pack(pop)
