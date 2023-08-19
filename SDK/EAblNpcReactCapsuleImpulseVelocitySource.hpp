#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblNpcReactCapsuleImpulseVelocitySource : uint8_t {
    ReactionDataVelocity = 0,
    ReactorBackwards = 1,
    ReactorFowards = 2,
    ReactorLeft = 3,
    ReactorRight = 4,
    InstigatorTowards = 5,
    InstigatorAway = 6,
    InstigatorLeft = 7,
    InstigatorRight = 8,
    ImpactDirectionTowards = 9,
    ImpactDirectionAway = 10,
    ImpactDirectionLeft = 11,
    ImpactDirectionRight = 12,
    TargetActorTowards = 13,
    TargetActorAway = 14,
    TargetActorLeft = 15,
    TargetActorRight = 16,
    ReactionDataDirection = 17,
    EAblNpcReactCapsuleImpulseVelocitySource_MAX = 18,
};
#pragma pack(pop)
