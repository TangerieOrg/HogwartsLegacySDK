#pragma once
#include <cstdint>
#include "ETimeRigFadeEventType.hpp"
#include "FColor.hpp"
#include "UDialogueLineRule.hpp"
class UFloatProvider;
class UBoolProvider;
#pragma pack(push, 1)
class UDialogueLineRule_ScreenFade : public UDialogueLineRule {
public:
    float OffsetFromDialogueLine; // 0x38
    char pad_3c[0x4];
    UFloatProvider* InitialScreenFade; // 0x40
    UFloatProvider* FinalScreenFade; // 0x48
    UFloatProvider* BlendTime; // 0x50
    ETimeRigFadeEventType FadeEventType; // 0x58
    char pad_59[0x7];
    UBoolProvider* KeepStateOnCompletion; // 0x60
    UBoolProvider* KeepFadeAfterSceneRigCompletion; // 0x68
    UBoolProvider* EnableFading; // 0x70
    FColor FadeColor; // 0x78
    char pad_7c[0x4];
    static UDialogueLineRule_ScreenFade* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
