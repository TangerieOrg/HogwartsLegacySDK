#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UPhoenixUserWidget.hpp"
class USizeBox;
class UImage;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_MoneyBar_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    USizeBox* GalleonsBox; // 0x330
    UImage* GalleonsImage; // 0x338
    UPhoenixTextBlock* GalleonsText; // 0x340
    UImage* Image_ItemValueBox; // 0x348
    bool isOnPaper; // 0x350
    char pad_351[0x3];
    int32_t CurrentAmount; // 0x354
    int32_t CurrentGalleons; // 0x358
    int32_t CurrentSickles; // 0x35c
    int32_t CurrentKnuts; // 0x360
    int32_t NextAmount; // 0x364
    int32_t NextGalleons; // 0x368
    int32_t NextSickles; // 0x36c
    int32_t NextKnuts; // 0x370
    float AnimationTotalDuration; // 0x374
    float AnimationCurrentTime; // 0x378
    bool ShowEmptyVals; // 0x37c
    char pad_37d[0x3];
    static UUI_BP_MoneyBar_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, FString Temp_string_Variable, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
    void GetContainerVisibility(int32_t CoinAmount, ESlateVisibility& Visibility, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void ResetFields(FSlateColor K2Node_MakeStruct_SlateColor);
    void DisplayTotalWorth(FName Character, int32_t CallFunc_GetInventorySellPriceBP_ReturnValue);
    void DisplayCostColor(bool canAffordItem, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1);
    void DisplayCost(int32_t newCost);
    void DisplayMoney(FName Character, int32_t CallFunc_GetMoney_Money);
    void AnimateToNewAmount(int32_t Amount, bool CallFunc_Less_FloatFloat_ReturnValue);
    void SetCurrentAmount(int32_t Amount);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_UI_BP_MoneyBar(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue, int32_t CallFunc_FFloor_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
}; // Size: 0x380
#pragma pack(pop)
