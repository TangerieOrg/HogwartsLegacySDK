#pragma once
#include <cstdint>
#include "ERightArmPriority\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetRightArmStateTask : public UAblAbilityTask {
public:
    ERightArmState::Type RightArmState; // 0x70
    bool bUseEndState; // 0x71
    ERightArmState::Type EndRightArmState; // 0x72
    ERightArmPriority::Type RightArmPriority; // 0x73
    bool bBroadcastChange; // 0x74
    char pad_75[0x3];
    static UAblSetRightArmStateTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
