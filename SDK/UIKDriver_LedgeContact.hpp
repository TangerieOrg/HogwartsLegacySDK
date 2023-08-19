#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FIKDriver_LedgeContactFootControl.hpp"
#include "FIKDriver_LedgeContactHandControl.hpp"
#include "FIKDriver_LedgeContactHipsControl.hpp"
#include "UIKDriver.hpp"
class UAnimSequence;
#pragma pack(push, 1)
class UIKDriver_LedgeContact : public UIKDriver {
public:
    UAnimSequence* LedgePoseAnimSequence; // 0x28
    float LedgePoseTime; // 0x30
    char pad_34[0xc];
    FIKDriver_LedgeContactHandControl LeftHand; // 0x40
    FIKDriver_LedgeContactHandControl RightHand; // 0x110
    FIKDriver_LedgeContactFootControl LeftFoot; // 0x1e0
    FIKDriver_LedgeContactFootControl RightFoot; // 0x310
    FIKDriver_LedgeContactHipsControl Hips; // 0x440
    ECollisionChannel TraceChannel; // 0x4f0
    char pad_4f1[0x9f];
    static UIKDriver_LedgeContact* StaticClass();
}; // Size: 0x590
#pragma pack(pop)
