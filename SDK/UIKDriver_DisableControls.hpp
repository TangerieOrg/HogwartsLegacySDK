#pragma once
#include <cstdint>
#include "UIKDriver.hpp"
#pragma pack(push, 1)
class UIKDriver_DisableControls : public UIKDriver {
public:
    TArray<FName> AlphaControlsToDisable; // 0x28
    char pad_38[0x10];
    static UIKDriver_DisableControls* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
