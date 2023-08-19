#pragma once
#include <cstdint>
#include "FIKDriver_AnimationDrivenData.hpp"
#include "UIKDriver.hpp"
#pragma pack(push, 1)
class UIKDriver_AnimationDriven : public UIKDriver {
public:
    TArray<FIKDriver_AnimationDrivenData> EffectorDefinitions; // 0x28
    static UIKDriver_AnimationDriven* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
