#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreaturePerceptionVolumeType : int32_t {
    AlwaysPerceiveInside = 0,
    KeepPerceptionInside = 1,
    ECreaturePerceptionVolumeType_MAX = 2,
};
#pragma pack(pop)
