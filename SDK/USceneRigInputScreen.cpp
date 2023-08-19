#include "EFeedbackAnim.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FDialogueConversationReference.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "UFunction.hpp"
#include "USceneRigInputScreen.hpp"
#include "UUserWidget.hpp"
void USceneRigInputScreen::OnPrimaryInputStateChanged(bool IsDown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.OnPrimaryInputStateChanged"));
    struct Params_OnPrimaryInputStateChanged {
        bool IsDown; // 0x0
    }; // Size: 0x1
    Params_OnPrimaryInputStateChanged params{};
    params.IsDown = (bool)IsDown;
    ProcessEvent(func, &params);
}
USceneRigInputScreen* USceneRigInputScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigInputScreen");
    return (USceneRigInputScreen*)res;
}
void USceneRigInputScreen::TriggerVoLine(FDialogueConversationReference SoundEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.TriggerVoLine"));
    struct Params_TriggerVoLine {
        FDialogueConversationReference SoundEvent; // 0x0
    }; // Size: 0x10
    Params_TriggerVoLine params{};
    params.SoundEvent = (FDialogueConversationReference)SoundEvent;
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::SetPositionAndPadding(EHorizontalAlignment HAlign, EVerticalAlignment VAlign, FMargin InPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.SetPositionAndPadding"));
    struct Params_SetPositionAndPadding {
        EHorizontalAlignment HAlign; // 0x0
        EVerticalAlignment VAlign; // 0x1
        char pad_2[0x2];
        FMargin InPadding; // 0x4
    }; // Size: 0x14
    Params_SetPositionAndPadding params{};
    params.HAlign = (EHorizontalAlignment)HAlign;
    params.VAlign = (EVerticalAlignment)VAlign;
    params.InPadding = (FMargin)InPadding;
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::TriggerSoundEvent(FString SoundEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.TriggerSoundEvent"));
    struct Params_TriggerSoundEvent {
        FString SoundEvent; // 0x0
    }; // Size: 0x10
    Params_TriggerSoundEvent params{};
    params.SoundEvent = (FString)SoundEvent;
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::SetTextKey(FString TextKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.SetTextKey"));
    struct Params_SetTextKey {
        FString TextKey; // 0x0
    }; // Size: 0x10
    Params_SetTextKey params{};
    params.TextKey = (FString)TextKey;
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::SetPromptImage(FString PromptImageName, FLinearColor PromptImageColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.SetPromptImage"));
    struct Params_SetPromptImage {
        FString PromptImageName; // 0x0
        FLinearColor PromptImageColor; // 0x10
    }; // Size: 0x20
    Params_SetPromptImage params{};
    params.PromptImageName = (FString)PromptImageName;
    params.PromptImageColor = (FLinearColor)PromptImageColor;
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::SetPressAndHold(bool IsPressAndHold, float HoldDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.SetPressAndHold"));
    struct Params_SetPressAndHold {
        bool IsPressAndHold; // 0x0
        char pad_1[0x3];
        float HoldDuration; // 0x4
    }; // Size: 0x8
    Params_SetPressAndHold params{};
    params.IsPressAndHold = (bool)IsPressAndHold;
    params.HoldDuration = (float)HoldDuration;
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::SetModifierButtonCallout(FString ModButtonLegend, bool DisplayModifierFirst) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.SetModifierButtonCallout"));
    struct Params_SetModifierButtonCallout {
        FString ModButtonLegend; // 0x0
        bool DisplayModifierFirst; // 0x10
    }; // Size: 0x11
    Params_SetModifierButtonCallout params{};
    params.ModButtonLegend = (FString)ModButtonLegend;
    params.DisplayModifierFirst = (bool)DisplayModifierFirst;
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::SetFeedbackAnimation(EFeedbackAnim FeedbackAnim) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.SetFeedbackAnimation"));
    struct Params_SetFeedbackAnimation {
        EFeedbackAnim FeedbackAnim; // 0x0
    }; // Size: 0x1
    Params_SetFeedbackAnimation params{};
    params.FeedbackAnim = (EFeedbackAnim)FeedbackAnim;
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::SetButtonCallout(FString ButtonLegend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.SetButtonCallout"));
    struct Params_SetButtonCallout {
        FString ButtonLegend; // 0x0
    }; // Size: 0x10
    Params_SetButtonCallout params{};
    params.ButtonLegend = (FString)ButtonLegend;
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::OnPressAndHoldStateChanged(bool IsDown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.OnPressAndHoldStateChanged"));
    struct Params_OnPressAndHoldStateChanged {
        bool IsDown; // 0x0
    }; // Size: 0x1
    Params_OnPressAndHoldStateChanged params{};
    params.IsDown = (bool)IsDown;
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::OnModifierStateChanged(bool IsDown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.OnModifierStateChanged"));
    struct Params_OnModifierStateChanged {
        bool IsDown; // 0x0
    }; // Size: 0x1
    Params_OnModifierStateChanged params{};
    params.IsDown = (bool)IsDown;
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::OnEndInteraction(bool Success) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.OnEndInteraction"));
    struct Params_OnEndInteraction {
        bool Success; // 0x0
    }; // Size: 0x1
    Params_OnEndInteraction params{};
    params.Success = (bool)Success;
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::OnCorrectInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.OnCorrectInput"));
    struct Params_OnCorrectInput {
    }; // Size: 0x0
    Params_OnCorrectInput params{};
    ProcessEvent(func, &params);
}
void USceneRigInputScreen::InitInputScreen(FMargin Margins, FString PromptImageName, FString ButtonLegend, FString ModifierButtonLegend, bool DisplayModifierFirst, FString TextKey, EFeedbackAnim FeedbackAnim, EHorizontalAlignment HAlign, EVerticalAlignment VAlign, FLinearColor PromptImageColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigInputScreen.InitInputScreen"));
    struct Params_InitInputScreen {
        FMargin Margins; // 0x0
        FString PromptImageName; // 0x10
        FString ButtonLegend; // 0x20
        FString ModifierButtonLegend; // 0x30
        bool DisplayModifierFirst; // 0x40
        char pad_41[0x7];
        FString TextKey; // 0x48
        EFeedbackAnim FeedbackAnim; // 0x58
        EHorizontalAlignment HAlign; // 0x59
        EVerticalAlignment VAlign; // 0x5a
        char pad_5b[0x1];
        FLinearColor PromptImageColor; // 0x5c
    }; // Size: 0x6c
    Params_InitInputScreen params{};
    params.Margins = (FMargin)Margins;
    params.PromptImageName = (FString)PromptImageName;
    params.ButtonLegend = (FString)ButtonLegend;
    params.ModifierButtonLegend = (FString)ModifierButtonLegend;
    params.DisplayModifierFirst = (bool)DisplayModifierFirst;
    params.TextKey = (FString)TextKey;
    params.FeedbackAnim = (EFeedbackAnim)FeedbackAnim;
    params.HAlign = (EHorizontalAlignment)HAlign;
    params.VAlign = (EVerticalAlignment)VAlign;
    params.PromptImageColor = (FLinearColor)PromptImageColor;
    ProcessEvent(func, &params);
}
