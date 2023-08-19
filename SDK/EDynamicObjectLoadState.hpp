#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDynamicObjectLoadState {
    None = 0,
    Loading = 1,
    Loaded = 2,
    Unloaded = 3,
    NotInRegistry = 4,
    NotInAssetMap = 5,
    EDynamicObjectLoadState_MAX = 6,
};
#pragma pack(pop)
