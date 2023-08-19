#pragma once
#include <cstdint>
#include "ERoundingMode.hpp"
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFieldGuideButton_Actions.hpp"
class UWidgetAnimation;
class UImage;
class UPhoenixTextBlock;
class UBorder;
class UUI_BP_NewIndicator_C;
class UUIManager;
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UUI_BP_FG_ActionsButton_C : public UFieldGuideButton_Actions {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4c0
    UWidgetAnimation* HippogriffLoop; // 0x4c8
    UWidgetAnimation* NewAnimation; // 0x4d0
    UWidgetAnimation* TutorialBounce; // 0x4d8
    UWidgetAnimation* OnHoverAnimation; // 0x4e0
    UImage* actionMeter; // 0x4e8
    UPhoenixTextBlock* ActionsLabel; // 0x4f0
    UBorder* iconBorder; // 0x4f8
    UUI_BP_NewIndicator_C* newIndicator; // 0x500
    UPhoenixTextBlock* PercentText; // 0x508
    UImage* StartImage; // 0x510
    UBorder* TutorialHighlight; // 0x518
    FString HouseFillID; // 0x520
    float currentHippogriffFrame; // 0x530
    char pad_534[0x4];
    static UUI_BP_FG_ActionsButton_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetHouseAssets(UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
    void SetMeterPercent(float Percentage, bool Temp_bool_Variable, bool CallFunc_InRange_FloatFloat_ReturnValue, ERoundingMode Temp_byte_Variable, ERoundingMode Temp_byte_Variable_1, float CallFunc_Divide_FloatFloat_ReturnValue, ERoundingMode K2Node_Select_Default);
    void Construct();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void OnHouseMeterFillLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void OnSetItemIndicatorVisibility(ESlateVisibility InVisibility);
    void SetLockedState(bool IsLocked);
    void SetIsTutorialHighlighted(bool bIsTutorialHighlighted);
    void ExecuteUbergraph_UI_BP_FG_ActionsButton(int32_t EntryPoint, bool K2Node_Event_bIsTutorialHighlighted);
}; // Size: 0x538
#pragma pack(pop)
