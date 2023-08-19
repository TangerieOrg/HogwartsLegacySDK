#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UImage;
class UPhoenixTextBlock;
class UObject;
#pragma pack(push, 1)
class UUI_BP_AvailableMissionNote_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* MissionIconLeft; // 0x330
    UWidgetAnimation* MissionIconRight; // 0x338
    UImage* mapMissionIcon; // 0x340
    UImage* mapMissionIcon_1; // 0x348
    UPhoenixTextBlock* MissionTitle; // 0x350
    static UUI_BP_AvailableMissionNote_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetColor(FLinearColor Color, FSlateColor K2Node_MakeStruct_SlateColor);
    void Set_Mission_Data(FString MissionIcon, FString MissionName, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1);
    void Construct();
    void AvailableMissionRight(UObject* Caller);
    void AvailableMissionLeft(UObject* Caller);
    void ExecuteUbergraph_UI_BP_AvailableMissionNote(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller);
}; // Size: 0x358
#pragma pack(pop)
