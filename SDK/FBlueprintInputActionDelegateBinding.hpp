#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "FBlueprintInputDelegateBinding.hpp"
#pragma pack(push, 1)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding {
    FName InputActionName; // 0x4
    EInputEvent InputKeyEvent; // 0xc
    char pad_d[0x3];
    FName FunctionNameToBind; // 0x10
}; // Size: 0x18
#pragma pack(pop)
