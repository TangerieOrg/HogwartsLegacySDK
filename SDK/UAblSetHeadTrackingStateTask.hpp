#pragma once
#include <cstdint>
#include "EHeadTrackingPriority\Type.hpp"
#include "EHeadTrackingState\Type.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetHeadTrackingStateTask : public UAblAbilityTask {
public:
    EHeadTrackingState::Type HeadTrackingState; // 0x70
    bool bUseEndState; // 0x71
    EHeadTrackingState::Type EndHeadTrackingState; // 0x72
    EHeadTrackingPriority::Type HeadTrackingPriority; // 0x73
    bool bBroadcastChange; // 0x74
    char pad_75[0x3];
    static UAblSetHeadTrackingStateTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
