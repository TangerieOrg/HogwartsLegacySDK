#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablClothTask : public UAblAbilityTask {
public:
    bool bEnableClothSimulation; // 0x70
    char pad_71[0x7];
    static UablClothTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
