#include "ESlateVisibility.hpp"
#include "FDataTableRowHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "GearStatType.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_GearStat_C.hpp"
#include "UVerticalBox.hpp"
UUI_BP_GearStat_C* UUI_BP_GearStat_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearStat.UI_BP_GearStat_C");
    return (UUI_BP_GearStat_C*)res;
}
TArray<FString> UUI_BP_GearStat_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
void UUI_BP_GearStat_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearStat.UI_BP_GearStat_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_GearStat_C::ResetStatCompare(FDataTableRowHandle TempDefenseColorTag, FDataTableRowHandle TempAttackColorTag, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearStat.UI_BP_GearStat_C.ResetStatCompare"));
    struct Params_ResetStatCompare {
        FDataTableRowHandle TempDefenseColorTag; // 0x0
        FDataTableRowHandle TempAttackColorTag; // 0x10
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle; // 0x20
    }; // Size: 0x30
    Params_ResetStatCompare params{};
    params.TempDefenseColorTag = (FDataTableRowHandle)TempDefenseColorTag;
    params.TempAttackColorTag = (FDataTableRowHandle)TempAttackColorTag;
    params.K2Node_MakeStruct_DataTableRowHandle = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle;
    ProcessEvent(func, &params);
}
void UUI_BP_GearStat_C::ShowCannotUpgradeMessage() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearStat.UI_BP_GearStat_C.ShowCannotUpgradeMessage"));
    struct Params_ShowCannotUpgradeMessage {
    }; // Size: 0x0
    Params_ShowCannotUpgradeMessage params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GearStat_C::Compare_Stat(int32_t CompareValue, FDataTableRowHandle TempDefenseColorTag, FDataTableRowHandle TempAttackColorTag, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearStat.UI_BP_GearStat_C.Compare Stat"));
    struct Params_Compare_Stat {
        int32_t CompareValue; // 0x0
        char pad_4[0x4];
        FDataTableRowHandle TempDefenseColorTag; // 0x8
        FDataTableRowHandle TempAttackColorTag; // 0x18
        bool CallFunc_Less_IntInt_ReturnValue; // 0x28
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x29
        char pad_2a[0x6];
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle; // 0x30
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1; // 0x40
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_2; // 0x50
    }; // Size: 0x60
    Params_Compare_Stat params{};
    params.CompareValue = (int32_t)CompareValue;
    params.TempDefenseColorTag = (FDataTableRowHandle)TempDefenseColorTag;
    params.TempAttackColorTag = (FDataTableRowHandle)TempAttackColorTag;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.K2Node_MakeStruct_DataTableRowHandle = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle;
    params.K2Node_MakeStruct_DataTableRowHandle_1 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_1;
    params.K2Node_MakeStruct_DataTableRowHandle_2 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_2;
    ProcessEvent(func, &params);
}
void UUI_BP_GearStat_C::Set_Stat(GearStatType StatType, int32_t offenseValue, int32_t defenseValue, bool isUnidentified, bool isMainStat, FString TempStatMessage, FString TempStatTitle, FString statIconID, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess) {}
void UUI_BP_GearStat_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearStat.UI_BP_GearStat_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GearStat_C::ExecuteUbergraph_UI_BP_GearStat(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearStat.UI_BP_GearStat_C.ExecuteUbergraph_UI_BP_GearStat"));
    struct Params_ExecuteUbergraph_UI_BP_GearStat {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_UI_BP_GearStat params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
