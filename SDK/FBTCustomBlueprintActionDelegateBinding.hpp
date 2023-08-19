#pragma once
#include <cstdint>
#include "EBTCustomActionType\Type.hpp"
#pragma pack(push, 1)
struct FBTCustomBlueprintActionDelegateBinding {
    FName ActionName; // 0x0
    EBTCustomActionType::Type ActionType; // 0x8
    char pad_9[0x3];
    FName FunctionNameToBind; // 0xc
}; // Size: 0x14
#pragma pack(pop)
