#pragma once
#include <cstdint>
#include "UConversationPreset_InitialTransform.hpp"
#pragma pack(push, 1)
class UConversationPreset_InitialTransform_MoveRelative : public UConversationPreset_InitialTransform {
public:
    float PositionDirectionAngle; // 0x28
    float MinDistance; // 0x2c
    float StepDistance; // 0x30
    int32_t MaxSteps; // 0x34
    float RotationOffset; // 0x38
    char pad_3c[0x4];
    static UConversationPreset_InitialTransform_MoveRelative* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
