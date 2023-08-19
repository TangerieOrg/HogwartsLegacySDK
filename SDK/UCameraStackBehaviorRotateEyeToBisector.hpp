#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSecondaryTargetGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorRotateEyeToBisector : public UCameraStackBehaviorBlend {
public:
    UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1b8
    float AngleRatio; // 0x1c0
    FVector2D BlendOutAngleRange; // 0x1c4
    FVector2D BlendOutDistanceRange; // 0x1cc
    bool bDebugDraw; // 0x1d4
    char pad_1d5[0x33];
    static UCameraStackBehaviorRotateEyeToBisector* StaticClass();
}; // Size: 0x208
#pragma pack(pop)
