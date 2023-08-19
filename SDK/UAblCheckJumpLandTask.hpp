#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblCheckJumpLandTask : public UAblAbilityTask {
public:
    bool bIsPerformTask; // 0x70
    char pad_71[0x7];
    static UAblCheckJumpLandTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
