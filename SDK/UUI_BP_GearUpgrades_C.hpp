#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UUI_BP_GearUpgradeMarker_C;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_GearUpgrades_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* showUpgradeApplied; // 0x330
    UImage* requirementDivider; // 0x338
    UUI_BP_GearUpgradeMarker_C* upgrade1; // 0x340
    UUI_BP_GearUpgradeMarker_C* upgrade2; // 0x348
    UUI_BP_GearUpgradeMarker_C* upgrade3; // 0x350
    UPhoenixTextBlock* UpgradesText; // 0x358
    int32_t BaseStatValue; // 0x360
    int32_t NextUpgradeStatValue; // 0x364
    TArray<UUI_BP_GearUpgradeMarker_C*> UpgradeArray; // 0x368
    FString UpgradesNumericValue; // 0x378
    static UUI_BP_GearUpgrades_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
    void ShowAppliedAnimation(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void InitUpgrades(int32_t CurrentUpgrade, bool K2Node_SwitchInteger_CmpSuccess);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_BP_GearUpgrades(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, TArray<UUI_BP_GearUpgradeMarker_C*>& K2Node_MakeArray_Array);
}; // Size: 0x388
#pragma pack(pop)
