#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_StopReasonAUS {
    AUSStartMove_PathFinished = 0,
    AUSStartMove_MoveData_bStopMove = 1,
    AUSStartMove_RequestTimeout = 2,
    AUSUpdateMove_PathFinished = 3,
    AUSUpdateMove_MoveData_bStopMove = 4,
    AUSUpdateMove_RequestTimeout = 5,
    AUSUpdateMove_CanMoveUpdateStopOrAttack = 6,
    AUSMoving_SidekickUpdateStateUpdate = 7,
    AUSMoving_PathFininshed = 8,
    AUSMoving_bStopMove = 9,
    AUSMoving_NotMoving = 10,
    AUSMoving_AtPathDest = 11,
    AUSMoving_AUSAbortPending = 12,
    AUSMoving_MoveAbortPending = 13,
    AUSMoving_AbruptDirectionChange = 14,
    AUSMoving_AbortAttackDistance = 15,
    AUSMoving_AtPendingDest = 16,
    AUSMoving_CanMoveUpdateStopOrAttack = 17,
    AUSMoving_CantAttackFromDest = 18,
    AUSPaused = 19,
    ENPC_MAX = 20,
};
#pragma pack(pop)
