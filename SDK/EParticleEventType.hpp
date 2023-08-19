#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EParticleEventType : uint8_t {
    EPET_Any = 0,
    EPET_Spawn = 1,
    EPET_Death = 2,
    EPET_Collision = 3,
    EPET_Burst = 4,
    EPET_Blueprint = 5,
    EPET_MAX = 6,
};
#pragma pack(pop)
