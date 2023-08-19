#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UScreen.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UUI_BP_Legend_Horizontal_Screen_C;
#pragma pack(push, 1)
class UUI_BP_SimpleLegend_Screen_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* Intro; // 0x378
    UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x380
    static UUI_BP_SimpleLegend_Screen_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnOutroEnded(int32_t OutroType);
    void ExecuteUbergraph_UI_BP_SimpleLegend_Screen(int32_t EntryPoint, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, int32_t K2Node_Event_OutroType);
}; // Size: 0x388
#pragma pack(pop)
