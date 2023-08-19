#pragma once
#include <cstdint>
#include "EAblNPCTurnToTaskDestination.hpp"
#include "FAlphaBlend.hpp"
#include "FRotator.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNPCTurnToTask : public UAblAbilityTask {
public:
    EAblNPCTurnToTaskDestination RotationTarget; // 0x70
    bool bTrackTarget; // 0x71
    char pad_72[0x2];
    FRotator RotationOffset; // 0x74
    bool SetYaw; // 0x80
    bool SetPitch; // 0x81
    char pad_82[0x6];
    FAlphaBlend Blend; // 0x88
    char pad_b8[0x8];
    static UAblNPCTurnToTask* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
