#pragma once
#include <cstdint>
#include "EFadeType.hpp"
#include "ETimeRigFadeEventType.hpp"
#include "USceneRigActionBase.hpp"
class UFadeProvider;
class UFloatProvider;
class UBoolProvider;
#pragma pack(push, 1)
class USceneAction_ScreenFade : public USceneRigActionBase {
public:
    UFadeProvider* Fader; // 0x88
    EFadeType Type; // 0x90
    char pad_91[0x7];
    UFloatProvider* ManualFadeValue; // 0x98
    UBoolProvider* KeepStateOnCompletion; // 0xa0
    UBoolProvider* KeepFadeAfterSceneRigCompletion; // 0xa8
    ETimeRigFadeEventType FadeEventType; // 0xb0
    char pad_b1[0x7];
    UBoolProvider* EnableFading; // 0xb8
    static USceneAction_ScreenFade* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
