#pragma once
#include <cstdint>
#include "FIKDriver_AimAtConeOnlyControl.hpp"
#include "UIKDriver.hpp"
#pragma pack(push, 1)
class UIKDriver_AimAtConeOnly : public UIKDriver {
public:
    TArray<FIKDriver_AimAtConeOnlyControl> AimControls; // 0x28
    char pad_38[0x50];
    static UIKDriver_AimAtConeOnly* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
