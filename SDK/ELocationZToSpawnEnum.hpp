#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELocationZToSpawnEnum : uint8_t {
    ChaosNiagara_LocationZToSpawn_None = 0,
    ChaosNiagara_LocationZToSpawn_Min = 1,
    ChaosNiagara_LocationZToSpawn_Max = 2,
    ChaosNiagara_LocationZToSpawn_MinMax = 3,
    ChaosNiagara_Max = 4,
};
#pragma pack(pop)
