#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class Enemy_CanAttackReqStatus {
    NoTarget = 0,
    TargetReacting = 1,
    BreakActive = 2,
    InvalidAUSForTurnScore = 3,
    InvalidTAS = 4,
    InsideAttackCorridor = 5,
    InAttackExecuteRetreatDist = 6,
    InvalidAttackState = 7,
    LOSPathToTargetNotClear = 8,
    TeammateToTargetNotClear = 9,
    TeammatePathToTargetNotClear = 10,
    NotInterruptible = 11,
    NotFacing = 12,
    NoAttackData = 13,
    TargetNotNavReachable = 14,
    InAttackExecuteCooldown = 15,
    InTicketCooldown = 16,
    WaitingOnTicket = 17,
    NotInRange = 18,
    EnergyDrained = 19,
    ProtegoStartWait = 20,
    RetaliateActive = 21,
    InWater = 22,
    TargetInWater = 23,
    HeightDifference = 24,
    ParryTargetCurrentWindow = 25,
    LimitAttackOnTarget = 26,
    Suspended = 27,
    ForceMove = 28,
    AlreadyHoldsTicket = 29,
    NoTicketAvailable = 30,
    TargetHasParryWindowAlready = 31,
    Enemy_MAX = 32,
};
#pragma pack(pop)