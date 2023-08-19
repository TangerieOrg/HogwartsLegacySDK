#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_MKBInput_ConflictItem_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixTextBlock* ItemText; // 0x330
    FString TextKey; // 0x338
    static UUI_BP_MKBInput_ConflictItem_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void Construct();
    void ExecuteUbergraph_UI_BP_MKBInput_ConflictItem(int32_t EntryPoint);
}; // Size: 0x348
#pragma pack(pop)
