#pragma once
#include <cstdint>
#include "EMountFlyingGait.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblMountFlightAnimStateTask : public UAblAbilityTask {
public:
    EMountFlyingGait MountFlyingGait; // 0x70
    char pad_71[0x7];
    static UAblMountFlightAnimStateTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
