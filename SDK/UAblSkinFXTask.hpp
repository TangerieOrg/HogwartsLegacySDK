#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSkinFXTask : public UAblAbilityTask {
public:
    FName skinEffectName; // 0x70
    bool bEndEffectOnExit; // 0x78
    char pad_79[0x7];
    static UAblSkinFXTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
