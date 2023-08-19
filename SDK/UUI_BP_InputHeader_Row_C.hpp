#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateFontInfo.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_InputHeader_Row_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixTextBlock* HeaderText; // 0x330
    FString Header; // 0x338
    bool Large; // 0x348
    char pad_349[0x7];
    static UUI_BP_InputHeader_Row_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_InputHeader_Row(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
}; // Size: 0x350
#pragma pack(pop)
