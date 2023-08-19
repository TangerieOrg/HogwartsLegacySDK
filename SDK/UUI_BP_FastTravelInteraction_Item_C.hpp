#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UAvaUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UButton;
class UHorizontalBox;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_FastTravelInteraction_Item_C : public UAvaUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* toInactive; // 0x330
    UWidgetAnimation* toActive; // 0x338
    UImage* buttonIcon; // 0x340
    UImage* Fresnel; // 0x348
    UImage* highlight; // 0x350
    UImage* highlightBack; // 0x358
    UImage* iconBack; // 0x360
    UImage* iconBack_1; // 0x368
    UButton* ItemButton; // 0x370
    UHorizontalBox* leftCallout; // 0x378
    UPhoenixTextBlock* leftText; // 0x380
    UHorizontalBox* rightCallout; // 0x388
    UPhoenixTextBlock* rightText; // 0x390
    UPhoenixTextBlock* CurrentTextField; // 0x398
    UWidgetAnimation* CurrentAnimation; // 0x3a0
    FString ItemName; // 0x3a8
    int32_t ItemIndex; // 0x3b8
    char pad_3bc[0x14];
    UWidgetAnimation* CurrentInactiveAnimation; // 0x3d0
    bool Enabled; // 0x3d8
    char pad_3d9[0x17];
    static UUI_BP_FastTravelInteraction_Item_C* StaticClass();
    void IsEnabled(bool& Enabled);
    void SetEnable(bool Enable, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2, FSlateColor K2Node_MakeStruct_SlateColor_3, FSlateColor K2Node_MakeStruct_SlateColor_4, FSlateColor K2Node_MakeStruct_SlateColor_5);
    void SetItemState(bool IsActive, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
    void SetItemData(int32_t ItemIndex, FString ItemId, bool K2Node_SwitchInteger_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void Construct();
    void OnSynchronizeProperties();
    void BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_BP_FastTravelInteraction_Item_itemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_FastTravelInteraction_Item(int32_t EntryPoint);
    void OnFastTravelButtonHovered__DelegateSignature(UUI_BP_FastTravelInteraction_Item_C* Button);
    void OnFastTravelButtonSelected__DelegateSignature(UUI_BP_FastTravelInteraction_Item_C* Button);
}; // Size: 0x3f0
#pragma pack(pop)
