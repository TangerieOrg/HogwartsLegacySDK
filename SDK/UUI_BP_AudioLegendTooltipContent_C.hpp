#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UImage;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_AudioLegendTooltipContent_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UImage* Icon_1; // 0x330
    UPhoenixTextBlock* ItemtypeText; // 0x338
    FString IconName; // 0x340
    static UUI_BP_AudioLegendTooltipContent_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetIconInfo(FString IconName, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_BP_AudioLegendTooltipContent(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
}; // Size: 0x350
#pragma pack(pop)
