#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAnimSequence;
#pragma pack(push, 1)
class UAblCameraStackAnimationTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    UAnimSequence* ChosenAnimSequence; // 0x28
    static UAblCameraStackAnimationTaskScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
