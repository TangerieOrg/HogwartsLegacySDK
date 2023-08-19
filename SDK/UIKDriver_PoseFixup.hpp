#pragma once
#include <cstdint>
#include "UIKDriver.hpp"
#pragma pack(push, 1)
class UIKDriver_PoseFixup : public UIKDriver {
public:
    char pad_28[0x10];
    static UIKDriver_PoseFixup* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
