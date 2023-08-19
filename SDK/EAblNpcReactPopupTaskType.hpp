#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblNpcReactPopupTaskType : uint8_t {
    ReactionInitialVelocity = 0,
    ReactionInitialDirection = 1,
    DirectionToInstigator = 2,
    ImpactDirection = 3,
    DirectionToTargetActor = 4,
    EAblNpcReactPopupTaskType_MAX = 5,
};
#pragma pack(pop)
