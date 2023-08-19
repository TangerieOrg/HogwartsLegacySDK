#pragma once
#include <cstdint>
#include "EFeedbackAnim.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FDialogueConversationReference.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class USceneRigInputScreen : public UUserWidget {
public:
    static USceneRigInputScreen* StaticClass();
    void TriggerVoLine(FDialogueConversationReference SoundEvent);
    void TriggerSoundEvent(FString SoundEvent);
    void SetTextKey(FString TextKey);
    void SetPromptImage(FString PromptImageName, FLinearColor PromptImageColor);
    void SetPressAndHold(bool IsPressAndHold, float HoldDuration);
    void SetPositionAndPadding(EHorizontalAlignment HAlign, EVerticalAlignment VAlign, FMargin InPadding);
    void SetModifierButtonCallout(FString ModButtonLegend, bool DisplayModifierFirst);
    void SetFeedbackAnimation(EFeedbackAnim FeedbackAnim);
    void SetButtonCallout(FString ButtonLegend);
    void OnPrimaryInputStateChanged(bool IsDown);
    void OnPressAndHoldStateChanged(bool IsDown);
    void OnModifierStateChanged(bool IsDown);
    void OnEndInteraction(bool Success);
    void OnCorrectInput();
    void InitInputScreen(FMargin Margins, FString PromptImageName, FString ButtonLegend, FString ModifierButtonLegend, bool DisplayModifierFirst, FString TextKey, EFeedbackAnim FeedbackAnim, EHorizontalAlignment HAlign, EVerticalAlignment VAlign, FLinearColor PromptImageColor);
}; // Size: 0x268
#pragma pack(pop)
