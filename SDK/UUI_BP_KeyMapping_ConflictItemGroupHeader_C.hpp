#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_KeyMapping_ConflictItemGroupHeader_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixTextBlock* ItemText; // 0x330
    FName GroupName; // 0x338
    static UUI_BP_KeyMapping_ConflictItemGroupHeader_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_KeyMapping_ConflictItemGroupHeader(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
}; // Size: 0x340
#pragma pack(pop)
