#pragma once
#include <cstdint>
#include "EAblAbilityTargetType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblPossessionTask : public UAblAbilityTask {
public:
    EAblAbilityTargetType m_Possessor; // 0x70
    EAblAbilityTargetType m_PossessionTarget; // 0x71
    bool m_UnPossessOnEnd; // 0x72
    char pad_73[0x5];
    static UAblPossessionTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
