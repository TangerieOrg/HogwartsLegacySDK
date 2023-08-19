#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "ETask_TargetTrackerType.hpp"
#include "ETask_TargetType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblTargetTrackerTask : public UAblAbilityTask {
public:
    ETask_TargetTrackerType TargetTrackerType; // 0x70
    ETask_TargetType TargetType; // 0x71
    ETargetID::Type TargetPriority; // 0x72
    char pad_73[0x5];
    static UAblTargetTrackerTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
