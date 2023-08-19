#pragma once
#include <cstdint>
#include "EPerformTaskCombatMode.hpp"
#include "UAIPerformTaskBase.hpp"
#pragma pack(push, 1)
class UAIPerformTaskCombatMode : public UAIPerformTaskBase {
public:
    FName AudioSubtypeID; // 0xe0
    bool bStartCombatMode; // 0xe8
    char pad_e9[0x3];
    float Duration; // 0xec
    EPerformTaskCombatMode CombatMode; // 0xf0
    char pad_f1[0xf];
    static UAIPerformTaskCombatMode* StaticClass();
    void FinishAfterDuration();
}; // Size: 0x100
#pragma pack(pop)
