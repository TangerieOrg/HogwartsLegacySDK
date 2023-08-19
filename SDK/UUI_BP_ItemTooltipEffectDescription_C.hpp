#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UUserWidget.hpp"
class UImage;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_ItemTooltipEffectDescription_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UImage* bodyDivider; // 0x270
    UPhoenixTextBlock* EffectDescription; // 0x278
    UPhoenixTextBlock* EffectText; // 0x280
    static UUI_BP_ItemTooltipEffectDescription_C* StaticClass();
    void SetItemInfo(FString EffectTextKey, FString EffectPotionReplacementTextKey, bool PositiveEffect, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, bool Temp_bool_Variable, FSlateColor K2Node_Select_Default);
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void ExecuteUbergraph_UI_BP_ItemTooltipEffectDescription(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
}; // Size: 0x288
#pragma pack(pop)
