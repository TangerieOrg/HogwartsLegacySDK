#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class USceneAction_ResetClothSim_ClothingTeleportMode : uint8_t {
    Teleport = 0,
    TeleportAndReset = 1,
    USceneAction_ResetClothSim_MAX = 2,
};
#pragma pack(pop)
