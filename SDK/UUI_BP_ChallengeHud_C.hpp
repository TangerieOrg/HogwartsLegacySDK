#pragma once
#include <cstdint>
#include "FFormatArgumentData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UBorder;
class UImage;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_ChallengeHud_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* ReadyWaveNumberOn; // 0x2f0
    UWidgetAnimation* TimerWarningPulse; // 0x2f8
    UWidgetAnimation* CounterUpdate; // 0x300
    UWidgetAnimation* ChallengeHUDOn; // 0x308
    UBorder* Border_1; // 0x310
    UBorder* Border_2; // 0x318
    UImage* ChallengeTrim; // 0x320
    UImage* CounterBG; // 0x328
    UImage* EnemyIcon; // 0x330
    UPhoenixTextBlock* PhoenixTextBlock_0; // 0x338
    UPhoenixTextBlock* PhoenixTextBlock_1; // 0x340
    UPhoenixTextBlock* PhoenixTextBlock_2; // 0x348
    UPhoenixTextBlock* WaveLabel; // 0x350
    static UUI_BP_ChallengeHud_C* StaticClass();
    void SetWaveText(int32_t WaveNumber, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData);
    void Construct();
    void ExecuteUbergraph_UI_BP_ChallengeHud(int32_t EntryPoint);
}; // Size: 0x358
#pragma pack(pop)
