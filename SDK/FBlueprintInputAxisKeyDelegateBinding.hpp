#pragma once
#include <cstdint>
#include "FBlueprintInputDelegateBinding.hpp"
#include "FKey.hpp"
#pragma pack(push, 1)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding {
    char pad_4[0x4];
    FKey AxisKey; // 0x8
    FName FunctionNameToBind; // 0x20
}; // Size: 0x28
#pragma pack(pop)
