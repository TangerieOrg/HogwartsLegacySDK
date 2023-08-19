#pragma once
#include <cstdint>
#include "EAblAbilityTaskResult.hpp"
#include "UBTTaskNode.hpp"
class UClass;
#pragma pack(push, 1)
class UBTTask_StopAbility : public UBTTaskNode {
public:
    bool CancelActive; // 0x70
    char pad_71[0x7];
    UClass* Ability; // 0x78
    EAblAbilityTaskResult ResultToUse; // 0x80
    char pad_81[0x7];
    static UBTTask_StopAbility* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
