#pragma once
#include <cstdint>
#include "ECameraStackAnimationSelection.hpp"
#include "FCameraStackAnimData.hpp"
#include "UAblAbilityTask.hpp"
class UAnimSequence;
#pragma pack(push, 1)
class UAblCameraStackAnimationTask : public UAblAbilityTask {
public:
    TArray<UAnimSequence*> AnimSequences; // 0x70
    ECameraStackAnimationSelection SelectionMethod; // 0x80
    char pad_81[0x3];
    float BlendInDuration; // 0x84
    float BlendOutDuration; // 0x88
    float CrossBlendTimeOverlap; // 0x8c
    bool bLazyBlendOut; // 0x90
    char pad_91[0x3];
    float RetargetingHeightOffset; // 0x94
    char pad_98[0x8];
    FCameraStackAnimData AnimData; // 0xa0
    static UAblCameraStackAnimationTask* StaticClass();
}; // Size: 0x1f0
#pragma pack(pop)
