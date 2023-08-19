#pragma once
#include <cstdint>
#include "EAblAbilityTaskRealm.hpp"
#include "UAblAbilityTask.hpp"
class UAblCollisionShape;
class UAblCollisionFilter;
#pragma pack(push, 1)
class UAblCollisionQueryTask : public UAblAbilityTask {
public:
    bool m_fireEvent; // 0x70
    char pad_71[0x3];
    FName m_name; // 0x74
    char pad_7c[0x4];
    UAblCollisionShape* m_QueryShape; // 0x80
    TArray<UAblCollisionFilter*> m_Filters; // 0x88
    bool m_CopyResultsToContext; // 0x98
    bool m_AllowDuplicateEntries; // 0x99
    EAblAbilityTaskRealm m_TaskRealm; // 0x9a
    char pad_9b[0x5];
    static UAblCollisionQueryTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
