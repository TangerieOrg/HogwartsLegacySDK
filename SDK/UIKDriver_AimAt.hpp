#pragma once
#include <cstdint>
#include "FIKDriver_AimAtControl.hpp"
#include "UIKDriver.hpp"
#pragma pack(push, 1)
class UIKDriver_AimAt : public UIKDriver {
public:
    TArray<FIKDriver_AimAtControl> AimControls; // 0x28
    static UIKDriver_AimAt* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
