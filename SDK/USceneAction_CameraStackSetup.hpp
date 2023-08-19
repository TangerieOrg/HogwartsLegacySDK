#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UTransformProvider;
class UCameraStackSettings;
#pragma pack(push, 1)
class USceneAction_CameraStackSetup : public USceneRigObjectActionBase {
public:
    UTransformProvider* CameraTargetTransform; // 0xa0
    UCameraStackSettings* CameraStack; // 0xa8
    char pad_b0[0x50];
    float BlendInDuration; // 0x100
    float BlendOutDuration; // 0x104
    int32_t InputPriorityOverride; // 0x108
    char pad_10c[0x4];
    static USceneAction_CameraStackSetup* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
