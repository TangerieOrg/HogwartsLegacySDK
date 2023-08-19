#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblNPCTurnToTaskDestination : uint8_t {
    Self = 0,
    Owner = 1,
    Instigator = 2,
    TargetActor = 3,
    Camera = 4,
    NpcReactionImpactDirection = 5,
    AlignToParent = 6,
    NpcReactionTargetActor = 7,
    NpcReactionTargetLocation = 8,
    ImpactDirectionFwdBwd = 9,
    ImpactDirectionFwdBwdLftRgt = 10,
    ImpactDirectionFwdBwdInv = 11,
    NpcReactVelDir = 12,
    NpcReactVelDirInv = 13,
    JumpLanding = 14,
    EnemyTarget = 15,
    EAblNPCTurnToTaskDestination_MAX = 16,
};
#pragma pack(pop)
