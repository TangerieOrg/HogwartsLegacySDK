#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpawnCameraActorType : uint8_t {
    StackCamera = 0,
    DefaultCamera = 1,
    ESpawnCameraActorType_MAX = 2,
};
#pragma pack(pop)
