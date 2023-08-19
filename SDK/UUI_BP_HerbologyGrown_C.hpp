#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixRichTextBlock;
class UPhoenixTextBlock;
class UUI_BP_NurtureProgressDiamond_C;
class UHerbPlotState;
class AHerbPlot;
#pragma pack(push, 1)
class UUI_BP_HerbologyGrown_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* Main_OUT; // 0x330
    UPhoenixRichTextBlock* ButtonText; // 0x338
    UPhoenixTextBlock* FactSheetText; // 0x340
    UPhoenixTextBlock* PlantNameText; // 0x348
    UUI_BP_NurtureProgressDiamond_C* progressMeter; // 0x350
    UPhoenixTextBlock* YieldAmount; // 0x358
    UPhoenixTextBlock* YieldText_1; // 0x360
    FName PreviewPlantID; // 0x368
    UHerbPlotState* HerbPlotState; // 0x370
    static UUI_BP_HerbologyGrown_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetPlantDetails(FName PlantID, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32_t CallFunc_GetYield_ReturnValue);
    void RefreshWidget(AHerbPlot* Plot, UHerbPlotState* CallFunc_GetPlotState_ReturnValue, FName CallFunc_GetPlantID_ReturnValue);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_HerbologyGrown(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
}; // Size: 0x378
#pragma pack(pop)
