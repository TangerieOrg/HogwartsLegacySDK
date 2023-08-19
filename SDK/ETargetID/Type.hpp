#pragma once
#include <cstdint>
namespace ETargetID {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    LowestPriority = 1,
    AimModeFace = 2,
    LockOnTarget = 3,
    FocusTriggerOpenWorld = 4,
    FocusTriggerOtherNPC = 5,
    FocusTriggerPlayer = 6,
    FocusTriggerWorldEvent = 7,
    LookAtDesiredDirection = 8,
    LookAtInteractTargetsBlip = 9,
    LookAtAutoTargets = 10,
    LookAtInteractTargets = 11,
    LookAtTargetsOfInterest = 12,
    LookAtDanger = 13,
    TargetOfInterest = 14,
    TemporaryTarget = 15,
    ImpactTarget = 16,
    LootTarget = 17,
    AimMode = 18,
    ChannelSpell = 19,
    ConjureSpell = 20,
    ProtegoTarget = 21,
    HighPriority = 22,
    HighestPriority = 23,
    ETargetID_MAX = 24,
};
#pragma pack(pop)
}
