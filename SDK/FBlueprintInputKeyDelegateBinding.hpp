#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "FBlueprintInputDelegateBinding.hpp"
#include "FInputChord.hpp"
#pragma pack(push, 1)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding {
    char pad_4[0x4];
    FInputChord InputChord; // 0x8
    EInputEvent InputKeyEvent; // 0x28
    char pad_29[0x3];
    FName FunctionNameToBind; // 0x2c
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
