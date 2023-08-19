#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class Enemy_CanAttackAbortStatus {
    NullAttackData = 0,
    AttackEventAlreadyStarted = 1,
    AttackEventReset = 2,
    VerifyAttack = 3,
    CorridorCheck = 4,
    VerifyAttackTicket = 5,
    LimitAttackOnTargetLocked = 6,
    Enemy_MAX = 7,
};
#pragma pack(pop)
