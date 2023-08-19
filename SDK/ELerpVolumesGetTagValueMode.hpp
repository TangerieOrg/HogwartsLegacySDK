#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELerpVolumesGetTagValueMode : uint8_t {
    Default = 0,
    FinalValue = 1,
    FullList = 2,
    ELerpVolumesGetTagValueMode_MAX = 3,
};
#pragma pack(pop)
