#pragma once
#include <cstdint>
#include "EBTCustomActionType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblBTCustomActionTask : public UAblAbilityTask {
public:
    FBTCustomAction BTCustomAction; // 0x70
    EBTCustomActionType::Type BTCustomActionType; // 0x7c
    char pad_7d[0x233];
    FBTCustomAction EndBTCustomAction; // 0x2b0
    EBTCustomActionType::Type EndBTCustomActionType; // 0x2bc
    char pad_2bd[0x3];
    static UAblBTCustomActionTask* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
