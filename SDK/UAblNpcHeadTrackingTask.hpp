#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNpcHeadTrackingTask : public UAblAbilityTask {
public:
    bool bEnableHeadTracking; // 0x70
    char pad_71[0x7];
    static UAblNpcHeadTrackingTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
