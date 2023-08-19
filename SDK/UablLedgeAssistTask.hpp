#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablLedgeAssistTask : public UAblAbilityTask {
public:
    float DesiredRootUpOffsetM; // 0x70
    float DesiredRootNormalOffsetM; // 0x74
    float DesiredRootUpOffsetF; // 0x78
    float DesiredRootNormalOffsetF; // 0x7c
    float DesiredRootUpOffsetC; // 0x80
    bool AlignRotation; // 0x84
    char pad_85[0x3];
    float RotationOffset; // 0x88
    bool AlignToMount; // 0x8c
    bool TurnOffCollisionDuringAlign; // 0x8d
    char pad_8e[0x2];
    static UablLedgeAssistTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
