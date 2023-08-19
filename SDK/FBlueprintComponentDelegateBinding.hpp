#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBlueprintComponentDelegateBinding {
    FName ComponentPropertyName; // 0x0
    FName DelegatePropertyName; // 0x8
    FName FunctionNameToBind; // 0x10
}; // Size: 0x18
#pragma pack(pop)
