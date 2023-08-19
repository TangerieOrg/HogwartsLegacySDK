#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_StopReason {
    None = 0,
    StopMove = 1,
    MovementStop = 2,
    OnPathFinished = 3,
    PathFollowingComp_OnPathFinished = 4,
    MovementComponent_StopActiveMovement = 5,
    CanAttackChoose_StopReqPriorToAttack = 6,
    CanAttackRequest_StopReqPriorToAttack = 7,
    ENPC_MAX = 8,
};
#pragma pack(pop)
