#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpawnActorCollisionHandlingMethod : uint8_t {
    Undefined = 0,
    AlwaysSpawn = 1,
    AdjustIfPossibleButAlwaysSpawn = 2,
    AdjustIfPossibleButDontSpawnIfColliding = 3,
    DontSpawnIfColliding = 4,
    ESpawnActorCollisionHandlingMethod_MAX = 5,
};
#pragma pack(pop)
