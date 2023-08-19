#pragma once
#include <cstdint>
#include "FIKDriver_LadderContactControl.hpp"
#include "UIKDriver.hpp"
#pragma pack(push, 1)
class UIKDriver_LadderContact : public UIKDriver {
public:
    FIKDriver_LadderContactControl LeftHand; // 0x28
    FIKDriver_LadderContactControl RightHand; // 0x88
    FIKDriver_LadderContactControl LeftFoot; // 0xe8
    FIKDriver_LadderContactControl RightFoot; // 0x148
    char pad_1a8[0x28];
    static UIKDriver_LadderContact* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)
