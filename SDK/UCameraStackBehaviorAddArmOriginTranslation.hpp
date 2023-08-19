#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorAddArmOriginTranslation : public UCameraStackBehaviorBlend {
public:
    FVector ArmOriginTranslation; // 0x1b8
    bool bRelativeToTargetUpright; // 0x1c4
    char pad_1c5[0x3];
    static UCameraStackBehaviorAddArmOriginTranslation* StaticClass();
}; // Size: 0x1c8
#pragma pack(pop)
