#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELocationXToSpawnEnum : uint8_t {
    ChaosNiagara_LocationXToSpawn_None = 0,
    ChaosNiagara_LocationXToSpawn_Min = 1,
    ChaosNiagara_LocationXToSpawn_Max = 2,
    ChaosNiagara_LocationXToSpawn_MinMax = 3,
    ChaosNiagara_Max = 4,
};
#pragma pack(pop)
