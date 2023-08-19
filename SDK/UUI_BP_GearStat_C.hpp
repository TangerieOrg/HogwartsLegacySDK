#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FDataTableRowHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "GearStatType.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixTextBlock;
class UPhoenixImage;
class UVerticalBox;
class UImage;
#pragma pack(push, 1)
class UUI_BP_GearStat_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixTextBlock* stat_Value; // 0x330
    UPhoenixImage* statArrow; // 0x338
    UVerticalBox* statBox; // 0x340
    UImage* statIcon; // 0x348
    UPhoenixTextBlock* statTitle; // 0x350
    UPhoenixTextBlock* upgradeMessage; // 0x358
    int32_t DefenseStat; // 0x360
    int32_t StatValue; // 0x364
    bool CanCompareStat; // 0x368
    char pad_369[0x7];
    static UUI_BP_GearStat_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void ResetStatCompare(FDataTableRowHandle TempDefenseColorTag, FDataTableRowHandle TempAttackColorTag, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle);
    void ShowCannotUpgradeMessage();
    void Set_Stat(GearStatType StatType, int32_t offenseValue, int32_t defenseValue, bool isUnidentified, bool isMainStat, FString TempStatMessage, FString TempStatTitle, FString statIconID, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess);
    void Compare_Stat(int32_t CompareValue, FDataTableRowHandle TempDefenseColorTag, FDataTableRowHandle TempAttackColorTag, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_2);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_BP_GearStat(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
}; // Size: 0x370
#pragma pack(pop)
