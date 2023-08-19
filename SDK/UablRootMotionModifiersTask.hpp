#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class URootMotionModifierProperties;
class UAblTaskCondition;
#pragma pack(push, 1)
class UablRootMotionModifiersTask : public UAblAbilityTask {
public:
    TArray<URootMotionModifierProperties*> m_RootMotionModifierPropertiesArray; // 0x70
    TArray<UAblTaskCondition*> TaskConditions; // 0x80
    bool bMustPassAllConditions; // 0x90
    char pad_91[0x7];
    static UablRootMotionModifiersTask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
