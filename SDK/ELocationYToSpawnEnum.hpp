#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELocationYToSpawnEnum : uint8_t {
    ChaosNiagara_LocationYToSpawn_None = 0,
    ChaosNiagara_LocationYToSpawn_Min = 1,
    ChaosNiagara_LocationYToSpawn_Max = 2,
    ChaosNiagara_LocationYToSpawn_MinMax = 3,
    ChaosNiagara_Max = 4,
};
#pragma pack(pop)
