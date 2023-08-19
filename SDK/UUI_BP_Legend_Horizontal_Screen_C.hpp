#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "ULegend.hpp"
class UWidgetAnimation;
class UOverlay;
class UObject;
class UHorizontalBox;
class ULegendItem;
class UOverlaySlot;
#pragma pack(push, 1)
class UUI_BP_Legend_Horizontal_Screen_C : public ULegend {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x388
    UWidgetAnimation* FadeLegend; // 0x390
    UOverlay* Main; // 0x398
    UHorizontalBox* ParentLegendPanel; // 0x3a0
    TArray<ULegendItem*> CachedLegendItems; // 0x3a8
    bool useViewportAdjustment; // 0x3b8
    char pad_3b9[0x7];
    static UUI_BP_Legend_Horizontal_Screen_C* StaticClass();
    void AdjustForViewportWidth(float IdealWidth, float CurrentRatio, float CurrentWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float CallFunc_Subtract_FloatFloat_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, float K2Node_MathExpression_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, ULegendItem* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void AddLegendItem(ULegendItem* NewLegendItem);
    void RemoveAllLegendItems(int32_t StartFromIndex);
    void FadeLegendOut(UObject* Caller);
    void FadeLegendIn(UObject* Caller);
    void ResolutionSettingsApplied(UObject* Caller);
    void ExecuteUbergraph_UI_BP_Legend_Horizontal_Screen(int32_t EntryPoint);
}; // Size: 0x3c0
#pragma pack(pop)
