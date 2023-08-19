#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAvaUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UButton;
class UVerticalBox;
class UPhoenixTextBlock;
class UImage;
#pragma pack(push, 1)
class UUI_BP_CompanionSelectionButton_C : public UAvaUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* ShowHighlight; // 0x330
    UButton* compButton; // 0x338
    UPhoenixTextBlock* CompName; // 0x340
    UImage* houseIcon; // 0x348
    UVerticalBox* InfoVerticalBox; // 0x350
    UImage* UnavailableIcon; // 0x358
    FName Companion; // 0x360
    bool IsLocked; // 0x368
    char pad_369[0x37];
    bool isClickable; // 0x3a0
    char pad_3a1[0x7];
    static UUI_BP_CompanionSelectionButton_C* StaticClass();
    void SetIsSelected(bool IsSelected);
    void SetCompanionData(FName CompName, bool companionLocked, bool companionDisabled, FString compIconName, FString House, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, FName CallFunc_GetHouseIDFromSubjectName_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__compButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__compButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__compButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_CompanionSelectionButton(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
    void OnCompanionSelected__DelegateSignature(UUI_BP_CompanionSelectionButton_C* Companion);
    void OnCompanionUnhovered__DelegateSignature(UUI_BP_CompanionSelectionButton_C* Companion);
    void OnCompanionHovered__DelegateSignature(UUI_BP_CompanionSelectionButton_C* Companion);
}; // Size: 0x3a8
#pragma pack(pop)
