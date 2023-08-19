#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UUMGSequencePlayer;
class UButton;
class UPhoenixImage;
class UImage;
#pragma pack(push, 1)
class UUI_BP_CreatureSpeciesButton_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* TutorialBounce; // 0x270
    UWidgetAnimation* SpeciesSelected; // 0x278
    UWidgetAnimation* OnSpeciesButtonHover; // 0x280
    UCanvasPanel* buttonContent; // 0x288
    UButton* ClickButton; // 0x290
    UImage* CreatureImage; // 0x298
    UPhoenixImage* emptyIcon; // 0x2a0
    UPhoenixImage* selectedBorder; // 0x2a8
    UPhoenixImage* selectedGlow; // 0x2b0
    UImage* TutorialHighlight; // 0x2b8
    char pad_2c0[0x30];
    FName TypeID; // 0x2f0
    bool Highlighted; // 0x2f8
    bool Enabled; // 0x2f9
    bool IsEmpty; // 0x2fa
    bool IsSelected; // 0x2fb
    char pad_2fc[0x4];
    static UUI_BP_CreatureSpeciesButton_C* StaticClass();
    void SetEmptyButton(bool IsEmpty);
    void SetIsSelected(bool buttonSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void SetEnabled(bool Enabled);
    void SetHighlighted(bool NewHighlighted, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void GetSpeciesID(FName& TypeID);
    void InitSpeciesButton(FName TypeID, int32_t Count, bool CallFunc_NotEqual_NameName_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void CustomEvent(bool bIsTutorialHighlighted);
    void ExecuteUbergraph_UI_BP_CreatureSpeciesButton(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_bIsTutorialHighlighted, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void OnClicked__DelegateSignature(UUI_BP_CreatureSpeciesButton_C* Button);
    void OnUnhovered__DelegateSignature(UUI_BP_CreatureSpeciesButton_C* Button);
    void OnHovered__DelegateSignature(UUI_BP_CreatureSpeciesButton_C* Button);
}; // Size: 0x300
#pragma pack(pop)
