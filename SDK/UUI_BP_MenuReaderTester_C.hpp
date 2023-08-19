#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UMenuReaderTestScreen.hpp"
class UPhoenixTextBlock;
class UUI_BP_Legend_Horizontal_Screen_C;
class UPhoenixRichTextBlock;
#pragma pack(push, 1)
class UUI_BP_MenuReaderTester_C : public UMenuReaderTestScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x390
    UPhoenixTextBlock* DummyText; // 0x398
    UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x3a0
    UPhoenixTextBlock* NonRichText; // 0x3a8
    UPhoenixTextBlock* NumStrings; // 0x3b0
    UPhoenixTextBlock* PronunciationText; // 0x3b8
    UPhoenixRichTextBlock* RichText; // 0x3c0
    int32_t CurrentIndex; // 0x3c8
    bool HasDummyText; // 0x3cc
    char pad_3cd[0x3];
    FString DummyString; // 0x3d0
    static UUI_BP_MenuReaderTester_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void RefreshLegend(TArray<FLegendItemData> TempLegendItems, FLegendItemData K2Node_MakeStruct_LegendItemData, int32_t CallFunc_Array_Add_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, FLegendItemData K2Node_MakeStruct_LegendItemData_4, int32_t CallFunc_Array_Add_ReturnValue_3, int32_t CallFunc_Array_Add_ReturnValue_4);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6);
    void RefreshDisplay(FString TempButtonString, FString CallFunc_Concat_StrStr_ReturnValue, int32_t CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4);
    void ChangeCurrentString(int32_t Delta, int32_t TempNumStrings, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Percent_IntInt_ReturnValue);
    void Construct();
    void ExecuteUbergraph_UI_BP_MenuReaderTester(int32_t EntryPoint);
}; // Size: 0x3e0
#pragma pack(pop)
