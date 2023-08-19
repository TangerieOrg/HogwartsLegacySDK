#pragma once
#include <cstdint>
#include "FBlueprintInputDelegateBinding.hpp"
#pragma pack(push, 1)
struct FBlueprintCustomInputAxisDelegateBinding : public FBlueprintInputDelegateBinding {
    FName InputAxisName; // 0x4
    FName FunctionNameToBind; // 0xc
}; // Size: 0x14
#pragma pack(pop)
