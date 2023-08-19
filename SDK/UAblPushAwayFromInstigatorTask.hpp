#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblPushAwayFromInstigatorTask : public UAblAbilityTask {
public:
    float Distance; // 0x70
    float Speed; // 0x74
    bool bContinuousDistanceCheck; // 0x78
    bool bIncludeCapsuleSizeInDistanceCheck; // 0x79
    char pad_7a[0x6];
    static UAblPushAwayFromInstigatorTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
