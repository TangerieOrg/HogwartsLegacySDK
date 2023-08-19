#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECombineTargetType : int32_t {
    NewAsset = 0,
    FirstInputAsset = 1,
    LastInputAsset = 2,
    ECombineTargetType_MAX = 3,
};
#pragma pack(pop)
