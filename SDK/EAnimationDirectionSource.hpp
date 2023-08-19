#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAnimationDirectionSource : uint8_t {
    Gameplay = 0,
    TargetTracker = 1,
    PickupObject = 2,
    CharacterOptions = 3,
    SceneRig = 4,
    SceneRigActive = 5,
    Highest = 6,
    SourceCount = 7,
    EAnimationDirectionSource_MAX = 8,
};
#pragma pack(pop)
