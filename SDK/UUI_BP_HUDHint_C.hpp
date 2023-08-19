#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixRichTextBlock;
class UOverlay;
#pragma pack(push, 1)
class UUI_BP_HUDHint_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* Hint_Intro; // 0x2f0
    UWidgetAnimation* Hint_Outro; // 0x2f8
    UPhoenixRichTextBlock* HintText; // 0x300
    UOverlay* TopOverlay; // 0x308
    bool HintShown; // 0x310
    char pad_311[0x7];
    static UUI_BP_HUDHint_C* StaticClass();
    void ClearHint(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void SetAndShowHint(FString HintKey, float MaxDuration, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void WidgetAnimationEvt_Hint_Outro_K2Node_WidgetAnimationEvent_0();
    void ResetAutoHideTimer(float MaxDuration);
    void ExecuteUbergraph_UI_BP_HUDHint(int32_t EntryPoint, float K2Node_CustomEvent_MaxDuration);
}; // Size: 0x318
#pragma pack(pop)
