#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBaseCreateFromSelectedTargetType : int32_t {
    NewAsset = 0,
    FirstInputAsset = 1,
    LastInputAsset = 2,
    EBaseCreateFromSelectedTargetType_MAX = 3,
};
#pragma pack(pop)
