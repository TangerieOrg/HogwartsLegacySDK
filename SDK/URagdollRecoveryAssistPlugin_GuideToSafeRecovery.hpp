#pragma once
#include <cstdint>
#include "URagdollRecoveryAssistPlugin.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class URagdollRecoveryAssistPlugin_GuideToSafeRecovery : public URagdollRecoveryAssistPlugin {
public:
    UCurveFloat* PushStrengthToTime; // 0x28
    float PushCutoffDistance; // 0x30
    char pad_34[0x4];
    static URagdollRecoveryAssistPlugin_GuideToSafeRecovery* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
