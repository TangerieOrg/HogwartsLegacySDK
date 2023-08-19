#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablIKLedgeContactTask : public UAblAbilityTask {
public:
    float BlendInDuration; // 0x70
    float BlendOutDuration; // 0x74
    bool bLockHandsToLedge; // 0x78
    char pad_79[0x7];
    static UablIKLedgeContactTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
