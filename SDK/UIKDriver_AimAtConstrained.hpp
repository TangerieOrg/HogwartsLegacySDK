#pragma once
#include <cstdint>
#include "FIKDriver_AimAtConstrainedControl.hpp"
#include "UIKDriver.hpp"
#pragma pack(push, 1)
class UIKDriver_AimAtConstrained : public UIKDriver {
public:
    TArray<FIKDriver_AimAtConstrainedControl> AimControls; // 0x28
    char pad_38[0x350];
    static UIKDriver_AimAtConstrained* StaticClass();
}; // Size: 0x388
#pragma pack(pop)
