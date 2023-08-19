#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class Enemy_CanMoveStatus {
    Stationary = 0,
    NotValidTASForAttacking = 1,
    NonInterruptible = 2,
    WaitInNotInRange = 3,
    CannotApproachNotInRangeOrWaiting = 4,
    CannotApproach = 5,
    InvalidSelectionRange = 6,
    ImmediateOnlyNotInRange = 7,
    ImmediateOnly = 8,
    CannotAttackFromGoalLoc = 9,
    ThresholdNotMet = 10,
    RadiusNotMet = 11,
    CannotMoveInRange = 12,
    CannotRetreat = 13,
    AttackCorridor = 14,
    FailedDestination = 15,
    ForceFace = 16,
    MoveReqNotMet = 17,
    AlreadyAtGoal = 18,
    EnergyDrained = 19,
    StayPut = 20,
    NavMeshNotFound = 21,
    NavPathFailed = 22,
    Enemy_MAX = 23,
};
#pragma pack(pop)
