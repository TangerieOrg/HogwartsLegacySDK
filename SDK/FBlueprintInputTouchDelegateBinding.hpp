#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "FBlueprintInputDelegateBinding.hpp"
#pragma pack(push, 1)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding {
    EInputEvent InputKeyEvent; // 0x4
    char pad_5[0x3];
    FName FunctionNameToBind; // 0x8
}; // Size: 0x10
#pragma pack(pop)
