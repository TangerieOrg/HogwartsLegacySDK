#pragma once
#include <cstdint>
#include "EAblAbilityTaskRealm.hpp"
#include "ECollisionChannel.hpp"
#include "FAblAbilityTargetTypeLocation.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblRayCastQueryTask : public UAblAbilityTask {
public:
    float m_Length; // 0x70
    bool m_OnlyReturnBlockingHit; // 0x74
    char pad_75[0x3];
    FAblAbilityTargetTypeLocation m_QueryLocation; // 0x78
    ECollisionChannel m_CollisionChannel; // 0xa0
    bool m_fireEvent; // 0xa1
    char pad_a2[0x2];
    FName m_name; // 0xa4
    bool m_CopyResultsToContext; // 0xac
    bool m_AllowDuplicateEntries; // 0xad
    EAblAbilityTaskRealm m_TaskRealm; // 0xae
    bool m_UseAsyncQuery; // 0xaf
    static UAblRayCastQueryTask* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
