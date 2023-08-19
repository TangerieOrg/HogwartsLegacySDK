#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixTextBlock;
class UUI_BP_SavingIcon_C;
#pragma pack(push, 1)
class UUI_BP_AutosaveDisclaimer_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixTextBlock* Disclaimer1; // 0x330
    UPhoenixTextBlock* Disclaimer2; // 0x338
    UUI_BP_SavingIcon_C* UI_BP_SavingIcon; // 0x340
    float ScreenDuration; // 0x348
    char pad_34c[0x4];
    static UUI_BP_AutosaveDisclaimer_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_BP_AutosaveDisclaimer(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
}; // Size: 0x350
#pragma pack(pop)
