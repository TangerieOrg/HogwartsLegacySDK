#pragma once
#include <cstdint>
#include "EStandardManagedPriority.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablToggleIKDriversTask : public UAblAbilityTask {
public:
    EStandardManagedPriority IKPriority; // 0x70
    bool bEnableIK; // 0x71
    bool bEnableFloorContact; // 0x72
    bool bEnableLookat; // 0x73
    bool bEnablePoseFixup; // 0x74
    char pad_75[0x3];
    float BlendInDuration; // 0x78
    float BlendOutDuration; // 0x7c
    static UablToggleIKDriversTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
