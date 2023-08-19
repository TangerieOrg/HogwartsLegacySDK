#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMirrorSaveMode : uint8_t {
    UpdateAssets = 0,
    CreateNewAssets = 1,
    EMirrorSaveMode_MAX = 2,
};
#pragma pack(pop)
