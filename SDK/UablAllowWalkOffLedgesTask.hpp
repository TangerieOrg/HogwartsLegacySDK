#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablAllowWalkOffLedgesTask : public UAblAbilityTask {
public:
    bool bAllowWalkOffLedges; // 0x70
    char pad_71[0x7];
    static UablAllowWalkOffLedgesTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
