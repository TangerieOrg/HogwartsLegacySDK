#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAmbientCreatureSpawnVolumeType : int32_t {
    Spawn = 0,
    Exclude = 1,
    SuppressAndExclude = 2,
    EAmbientCreatureSpawnVolumeType_MAX = 3,
};
#pragma pack(pop)
