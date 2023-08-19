#pragma once
#include <cstdint>
#include "EFeedbackAnim.hpp"
#include "EHorizontalAlignment.hpp"
#include "EPIMTypes.hpp"
#include "EVerticalAlignment.hpp"
#include "FDampedSpringScalar.hpp"
#include "FDialogueConversationReference.hpp"
#include "FMargin.hpp"
#include "FSceneRigStage_FloatReference.hpp"
#include "USceneRigObjectActionBase.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class USceneAction_PIM : public USceneRigObjectActionBase {
public:
    FSceneRigStage_FloatReference Reference; // 0xa0
    EPIMTypes PIMType; // 0xb0
    bool bHasFailureTimeout; // 0xb1
    char pad_b2[0x2];
    float FailureTimeout; // 0xb4
    float JoystickSuccessTime; // 0xb8
    float AnimationRotationRate; // 0xbc
    float SuccessDecayRate; // 0xc0
    bool bPlayVOHint; // 0xc4
    char pad_c5[0x3];
    FDialogueConversationReference VOHintID; // 0xc8
    float HintDelay; // 0xd8
    float DelayAfterCompletion; // 0xdc
    bool bMapPIMProgressToParameter; // 0xe0
    char pad_e1[0x3];
    FDampedSpringScalar ProgressSmoothingSpring; // 0xe4
    FName GameActionWildcard; // 0xf4
    FName WildcardGamepadModifier; // 0xfc
    char pad_104[0x4];
    FString ButtonLegend; // 0x108
    FString ModifierButtonLegend; // 0x118
    bool DisplayModifierFirst; // 0x128
    char pad_129[0x7];
    FString TextKey; // 0x130
    FString BackgroundImage; // 0x140
    EFeedbackAnim FeedBackAnimType; // 0x150
    EHorizontalAlignment HorizontalAlignment; // 0x151
    EVerticalAlignment VerticalAlignment; // 0x152
    char pad_153[0x1];
    FMargin Padding; // 0x154
    float TelescopeInFocusDistance; // 0x164
    float TelescopeBlurryDistance; // 0x168
    float TelescopeInFocusWindow; // 0x16c
    float TelescopeFullTravelTime; // 0x170
    char pad_174[0x4];
    UAkAudioEvent* PIMFX; // 0x178
    UAkAudioEvent* EndPIMFX; // 0x180
    static USceneAction_PIM* StaticClass();
}; // Size: 0x188
#pragma pack(pop)
