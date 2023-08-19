#pragma once
#include <cstdint>
#include "FAnimationRequestLayerReference.hpp"
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FDialogLineRule_CameraAnimation {
    FGameplayTagContainer Tags; // 0x0
    FAnimationRequestLayerReference Layer; // 0x20
}; // Size: 0x28
#pragma pack(pop)
