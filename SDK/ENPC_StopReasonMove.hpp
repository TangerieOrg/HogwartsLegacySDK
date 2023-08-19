#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_StopReasonMove {
    MoveData_RequestStop = 0,
    MoveData_ResetRequestStop = 1,
    MoveData_PathFinished = 2,
    UpdateInfo_MoveCorridor = 3,
    UpdateInfo_MoveCollision = 4,
    UpdateMove_AwayFromWaypoint = 5,
    UpdateMove_NotProgressingWaypoint = 6,
    UpdateMove_NotProgressingDestination = 7,
    UpdateMove_UpdateBlocked = 8,
    UpdateMove_WillEnterCorridor = 9,
    SetMoveWaypoint_StartBlocked = 10,
    SetMoveWaypoint_ConstrainLocFailed = 11,
    SetMoveWaypoint_AbruptHeadingChange = 12,
    SetMoveWaypoint_HeadingOffscreen = 13,
    SetMoveWaypoint_NoGroundFound = 14,
    MoveWaypointCheck_NotProgressingDestination = 15,
    MoveWaypointCheck_NotProgressingWaypoint = 16,
    MoveWaypointCheck_AwayFromWaypoint = 17,
    MoveCheck_LOSNotClear = 18,
    MoveCheck_WillEnterCorridor = 19,
    MoveCheck_TooCloseToTarget = 20,
    MoveCheck_TooCloseToTeammates = 21,
    MoveCheck_TooFarHeadingDistance = 22,
    MoveCheck_EnergyDrained = 23,
    ENPC_MAX = 24,
};
#pragma pack(pop)
