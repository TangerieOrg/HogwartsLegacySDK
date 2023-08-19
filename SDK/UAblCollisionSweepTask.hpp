#pragma once
#include <cstdint>
#include "EAblAbilityTaskRealm.hpp"
#include "UAblAbilityTask.hpp"
class UAblCollisionSweepShape;
class UAblCollisionFilter;
#pragma pack(push, 1)
class UAblCollisionSweepTask : public UAblAbilityTask {
public:
    UAblCollisionSweepShape* m_SweepShape; // 0x70
    bool m_fireEvent; // 0x78
    char pad_79[0x3];
    FName m_name; // 0x7c
    char pad_84[0x4];
    TArray<UAblCollisionFilter*> m_Filters; // 0x88
    bool m_CopyResultsToContext; // 0x98
    bool m_AllowDuplicateEntries; // 0x99
    EAblAbilityTaskRealm m_TaskRealm; // 0x9a
    char pad_9b[0x5];
    static UAblCollisionSweepTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
