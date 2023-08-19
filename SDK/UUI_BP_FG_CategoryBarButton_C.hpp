#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UTabIconButtonWidget.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UUMGSequencePlayer;
class UImage;
class UPhoenixTextBlock;
class UBorder;
class UWidget;
#pragma pack(push, 1)
class UUI_BP_FG_CategoryBarButton_C : public UTabIconButtonWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
    UWidgetAnimation* ShowHighlight; // 0x4b0
    UWidgetAnimation* NewPulse; // 0x4b8
    UWidgetAnimation* hideSelected; // 0x4c0
    UWidgetAnimation* ShowSelected; // 0x4c8
    UImage* BackGlitter; // 0x4d0
    UImage* Background; // 0x4d8
    UPhoenixTextBlock* categoryCount; // 0x4e0
    UPhoenixTextBlock* categoryTitle; // 0x4e8
    UCanvasPanel* contentHolder; // 0x4f0
    UImage* highlight; // 0x4f8
    UCanvasPanel* ItemCount; // 0x500
    UBorder* newItemBorder; // 0x508
    UBorder* textBorder; // 0x510
    bool currentlyActive; // 0x518
    char pad_519[0x3];
    FVector LocalPosition; // 0x51c
    FGeometry WidgetGeometry; // 0x528
    FLinearColor HouseColor; // 0x560
    bool ShowCategoryTitle; // 0x570
    bool ShowCategoryCount; // 0x571
    char pad_572[0x6];
    FString CategoryID; // 0x578
    int32_t CountValue; // 0x588
    char pad_58c[0x4];
    static UUI_BP_FG_CategoryBarButton_C* StaticClass();
    void I_GetIconName(FString& IconName);
    void ToggleNewIndicator(bool Show, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void ToggleCategoryCount(bool ShowCategoryCount, int32_t NewCount, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FString CallFunc_Conv_IntToString_ReturnValue, ESlateVisibility K2Node_Select_Default, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1);
    void ToggleCategoryText(bool ShowCategoryTitle, FString NewTitle, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetButtonColor(FLinearColor NewColor);
    void SetButtonCount(int32_t NewCount, bool CallFunc_Greater_IntInt_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
    void SetButtonFontSize(int32_t NewFontSize);
    void SetButtonText(FString NewString);
    bool SetState(bool IsActive, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_SetState_ReturnValue);
    bool IsInteractable();
    void I_SetImage(FString ImageName);
    void I_AddExtraContent(UWidget* NewContent);
    void I_SetIconSize(FVector2D Size);
    void I_SetIconName(FString IconName);
    void Construct();
    void OnSelectionChanged(bool selected);
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_FG_CategoryBarButton(int32_t EntryPoint, FString K2Node_Event_ImageName, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UWidget* K2Node_Event_NewContent, FVector2D K2Node_Event_Size, FString K2Node_Event_IconName, bool K2Node_Event_selected, bool CallFunc_SetState_ReturnValue);
}; // Size: 0x590
#pragma pack(pop)
