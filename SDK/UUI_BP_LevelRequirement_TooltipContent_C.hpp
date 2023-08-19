#pragma once
#include <cstdint>
#include "FSlateColor.hpp"
#include "UUserWidget.hpp"
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_LevelRequirement_TooltipContent_C : public UUserWidget {
public:
    UPhoenixTextBlock* LevelLabel; // 0x268
    UPhoenixTextBlock* LevelText; // 0x270
    int32_t ItemLevel; // 0x278
    char pad_27c[0x4];
    static UUI_BP_LevelRequirement_TooltipContent_C* StaticClass();
    void SetLevel(int32_t Level, bool Usable, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_Select_Default);
}; // Size: 0x280
#pragma pack(pop)
