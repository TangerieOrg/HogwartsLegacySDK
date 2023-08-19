#pragma once
#include <cstdint>
#include "FCameraCrossBlendBehaviorGroup.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStack;
#pragma pack(push, 1)
class UCameraStackBehaviorMultiCrossBlend : public UCameraStackBehaviorBlend {
public:
    float MaxCrossBlendSpeed; // 0x1b8
    char pad_1bc[0x4];
    TArray<FCameraCrossBlendBehaviorGroup> CrossBlendBehaviorGroups; // 0x1c0
    char pad_1d0[0x180];
    static UCameraStackBehaviorMultiCrossBlend* StaticClass();
    TArray<FCameraCrossBlendBehaviorGroup> GetCrossBlendBehaviorGroups();
    static UCameraStackBehaviorMultiCrossBlend* CreateMultiCrossBlendBehavior(UCameraStack* InCameraStack, float InMaxCrossBlendSpeed);
}; // Size: 0x350
#pragma pack(pop)
