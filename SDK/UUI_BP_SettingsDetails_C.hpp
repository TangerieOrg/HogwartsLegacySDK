#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUI_BP_FG_DetailsPanelBack_C;
class UUMGSequencePlayer;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_SettingsDetails_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* Appear; // 0x330
    UPhoenixTextBlock* Description; // 0x338
    UUI_BP_FG_DetailsPanelBack_C* detailsBack; // 0x340
    char pad_348[0x10];
    float appearTime; // 0x358
    char pad_35c[0x4];
    static UUI_BP_SettingsDetails_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetupTooltipDescription(FString NewDescription);
    void PlaySettingsDetailsCollapseAnim();
    void PlaySettingsDetailsAppearAnim();
    void ExecuteUbergraph_UI_BP_SettingsDetails(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void SettingsDetailCollapseDispatch__DelegateSignature();
}; // Size: 0x360
#pragma pack(pop)
