#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UButton;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_StoreScrollButton_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* OnPressed; // 0x270
    UWidgetAnimation* OnHover; // 0x278
    UButton* scrollButton; // 0x280
    char pad_288[0x10];
    static UUI_BP_StoreScrollButton_C* StaticClass();
    void BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_StoreScrollButton(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void OnScrollButtonClicked__DelegateSignature();
}; // Size: 0x298
#pragma pack(pop)
