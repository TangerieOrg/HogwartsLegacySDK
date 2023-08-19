#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNpcHitPauseTask : public UAblAbilityTask {
public:
    float Time; // 0x70
    char pad_74[0x4];
    static UAblNpcHitPauseTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
