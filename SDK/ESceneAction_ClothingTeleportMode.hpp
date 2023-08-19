#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneAction_ClothingTeleportMode : uint8_t {
    None = 0,
    Teleport = 1,
    TeleportAndReset = 2,
    ESceneAction_MAX = 3,
};
#pragma pack(pop)
