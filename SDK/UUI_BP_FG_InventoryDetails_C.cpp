#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "UCreatureManager.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "ULegendItem.hpp"
#include "UOverlay.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_FG_IDP_ItemHeader_C.hpp"
#include "UUI_BP_FG_InventoryDetails_C.hpp"
#include "UUI_BP_InventoryIconButton_C.hpp"
#include "UUI_BP_Legend_Horizontal_Tooltip_C.hpp"
#include "UUI_BP_MoneyBar_C.hpp"
#include "UVerticalBox.hpp"
UUI_BP_FG_InventoryDetails_C* UUI_BP_FG_InventoryDetails_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C");
    return (UUI_BP_FG_InventoryDetails_C*)res;
}
void UUI_BP_FG_InventoryDetails_C::ResetTooltip() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.ResetTooltip"));
    struct Params_ResetTooltip {
    }; // Size: 0x0
    Params_ResetTooltip params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryDetails_C::Inventory_Hold_Event_Complete(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.Inventory Hold Event Complete"));
    struct Params_Inventory_Hold_Event_Complete {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_Inventory_Hold_Event_Complete params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryDetails_C::BuildEmptyTooltip(TArray<FName> tempTraitArray, FString Description, FName Rarity, bool TranslateTitle, FString Title, FString QualityString, bool IsCreatureAlbino, bool IsCreatureMale, FString InventoryItemName, bool IsCapturedCreature, FInventoryResult InvResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.BuildEmptyTooltip"));
    struct Params_BuildEmptyTooltip {
        TArray<FName> tempTraitArray; // 0x0
        FString Description; // 0x10
        FName Rarity; // 0x20
        bool TranslateTitle; // 0x28
        char pad_29[0x7];
        FString Title; // 0x30
        FString QualityString; // 0x40
        bool IsCreatureAlbino; // 0x50
        bool IsCreatureMale; // 0x51
        char pad_52[0x6];
        FString InventoryItemName; // 0x58
        bool IsCapturedCreature; // 0x68
        char pad_69[0x7];
        FInventoryResult InvResult; // 0x70
    }; // Size: 0xf8
    Params_BuildEmptyTooltip params{};
    params.tempTraitArray = (TArray<FName>)tempTraitArray;
    params.Description = (FString)Description;
    params.Rarity = (FName)Rarity;
    params.TranslateTitle = (bool)TranslateTitle;
    params.Title = (FString)Title;
    params.QualityString = (FString)QualityString;
    params.IsCreatureAlbino = (bool)IsCreatureAlbino;
    params.IsCreatureMale = (bool)IsCreatureMale;
    params.InventoryItemName = (FString)InventoryItemName;
    params.IsCapturedCreature = (bool)IsCapturedCreature;
    params.InvResult = (FInventoryResult)InvResult;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryDetails_C::SetCapturedCreatureInfo(FName GearID, FName Variation, FString TempTitle, FName CallFunc_GetLockName_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue, FName CallFunc_GetLockName_ReturnValue_1, bool CallFunc_IsUnlockedPure_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FString CallFunc_GetCreatureDisplayNameFromUIDName_OutName, bool CallFunc_GetCreatureDisplayNameFromUIDName_OutIsLocalizationKey, FString CallFunc_GetCreatureInventoryInfoString_OutInfoString, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, FName CallFunc_GetTypeID_ReturnValue, bool CallFunc_IsAlbino_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.SetCapturedCreatureInfo"));
    struct Params_SetCapturedCreatureInfo {
        FName GearID; // 0x0
        FName Variation; // 0x8
        FString TempTitle; // 0x10
        FName CallFunc_GetLockName_ReturnValue; // 0x20
        bool CallFunc_IsUnlockedPure_ReturnValue; // 0x28
        char pad_29[0x3];
        FName CallFunc_GetLockName_ReturnValue_1; // 0x2c
        bool CallFunc_IsUnlockedPure_ReturnValue_1; // 0x34
        bool CallFunc_BooleanAND_ReturnValue; // 0x35
        char pad_36[0x2];
        FString CallFunc_GetCreatureDisplayNameFromUIDName_OutName; // 0x38
        bool CallFunc_GetCreatureDisplayNameFromUIDName_OutIsLocalizationKey; // 0x48
        char pad_49[0x7];
        FString CallFunc_GetCreatureInventoryInfoString_OutInfoString; // 0x50
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x60
        UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue; // 0x68
        bool CallFunc_GetIsMale_ReturnValue; // 0x70
        char pad_71[0x3];
        FName CallFunc_GetTypeID_ReturnValue; // 0x74
        bool CallFunc_IsAlbino_ReturnValue; // 0x7c
        char pad_7d[0x3];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x80
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x90
    }; // Size: 0xa0
    Params_SetCapturedCreatureInfo params{};
    params.GearID = (FName)GearID;
    params.Variation = (FName)Variation;
    params.TempTitle = (FString)TempTitle;
    params.CallFunc_GetLockName_ReturnValue = (FName)CallFunc_GetLockName_ReturnValue;
    params.CallFunc_IsUnlockedPure_ReturnValue = (bool)CallFunc_IsUnlockedPure_ReturnValue;
    params.CallFunc_GetLockName_ReturnValue_1 = (FName)CallFunc_GetLockName_ReturnValue_1;
    params.CallFunc_IsUnlockedPure_ReturnValue_1 = (bool)CallFunc_IsUnlockedPure_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_GetCreatureDisplayNameFromUIDName_OutName = (FString)CallFunc_GetCreatureDisplayNameFromUIDName_OutName;
    params.CallFunc_GetCreatureDisplayNameFromUIDName_OutIsLocalizationKey = (bool)CallFunc_GetCreatureDisplayNameFromUIDName_OutIsLocalizationKey;
    params.CallFunc_GetCreatureInventoryInfoString_OutInfoString = (FString)CallFunc_GetCreatureInventoryInfoString_OutInfoString;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_BP_GetCreatureStateByFName_ReturnValue = (UCreatureState*)CallFunc_BP_GetCreatureStateByFName_ReturnValue;
    params.CallFunc_GetIsMale_ReturnValue = (bool)CallFunc_GetIsMale_ReturnValue;
    params.CallFunc_GetTypeID_ReturnValue = (FName)CallFunc_GetTypeID_ReturnValue;
    params.CallFunc_IsAlbino_ReturnValue = (bool)CallFunc_IsAlbino_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryDetails_C::SetLegendItemData(TArray<FLegendItemData>& LegendItemArray, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue) {}
void UUI_BP_FG_InventoryDetails_C::Build_Inventory_Tooltip(UUI_BP_InventoryIconButton_C* Button, TArray<FLegendItemData>& ToolTip, TArray<FName> tempTraitArray, FString Description, FName Rarity, bool TranslateTitle, FString Title, FString QualityString, bool IsCreatureAlbino, bool IsCreatureMale, FString InventoryItemName, bool IsCapturedCreature, FInventoryResult InvResult, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_GetCanReturnToWild_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.Build Inventory Tooltip"));
    struct Params_Build_Inventory_Tooltip {
        UUI_BP_InventoryIconButton_C* Button; // 0x0
        TArray<FLegendItemData> ToolTip; // 0x8
        TArray<FName> tempTraitArray; // 0x18
        FString Description; // 0x28
        FName Rarity; // 0x38
        bool TranslateTitle; // 0x40
        char pad_41[0x7];
        FString Title; // 0x48
        FString QualityString; // 0x58
        bool IsCreatureAlbino; // 0x68
        bool IsCreatureMale; // 0x69
        char pad_6a[0x6];
        FString InventoryItemName; // 0x70
        bool IsCapturedCreature; // 0x80
        char pad_81[0x7];
        FInventoryResult InvResult; // 0x88
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x110
        UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue; // 0x118
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x120
        bool CallFunc_GetCanReturnToWild_ReturnValue; // 0x130
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x131
        bool CallFunc_BooleanAND_ReturnValue; // 0x132
    }; // Size: 0x133
    Params_Build_Inventory_Tooltip params{};
    params.Button = (UUI_BP_InventoryIconButton_C*)Button;
    params.ToolTip = (TArray<FLegendItemData>)ToolTip;
    params.tempTraitArray = (TArray<FName>)tempTraitArray;
    params.Description = (FString)Description;
    params.Rarity = (FName)Rarity;
    params.TranslateTitle = (bool)TranslateTitle;
    params.Title = (FString)Title;
    params.QualityString = (FString)QualityString;
    params.IsCreatureAlbino = (bool)IsCreatureAlbino;
    params.IsCreatureMale = (bool)IsCreatureMale;
    params.InventoryItemName = (FString)InventoryItemName;
    params.IsCapturedCreature = (bool)IsCapturedCreature;
    params.InvResult = (FInventoryResult)InvResult;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_BP_GetCreatureStateByFName_ReturnValue = (UCreatureState*)CallFunc_BP_GetCreatureStateByFName_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetCanReturnToWild_ReturnValue = (bool)CallFunc_GetCanReturnToWild_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    ToolTip = params.ToolTip;
}
TArray<FString> UUI_BP_FG_InventoryDetails_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {}
void UUI_BP_FG_InventoryDetails_C::SetStandardTooltip(FName GearID, FName GearVariation, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.SetStandardTooltip"));
    struct Params_SetStandardTooltip {
        FName GearID; // 0x0
        FName GearVariation; // 0x8
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x10
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x20
    }; // Size: 0x30
    Params_SetStandardTooltip params{};
    params.GearID = (FName)GearID;
    params.GearVariation = (FName)GearVariation;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryDetails_C::SetSellValue(bool Sellable, int32_t SellPrice) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.SetSellValue"));
    struct Params_SetSellValue {
        bool Sellable; // 0x0
        char pad_1[0x3];
        int32_t SellPrice; // 0x4
    }; // Size: 0x8
    Params_SetSellValue params{};
    params.Sellable = (bool)Sellable;
    params.SellPrice = (int32_t)SellPrice;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryDetails_C::LegendHoldItemReleased__DelegateSignature(ULegendItem* InventoryLegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryDetails.UI_BP_FG_InventoryDetails_C.LegendHoldItemReleased__DelegateSignature"));
    struct Params_LegendHoldItemReleased__DelegateSignature {
        ULegendItem* InventoryLegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_LegendHoldItemReleased__DelegateSignature params{};
    params.InventoryLegendItem = (ULegendItem*)InventoryLegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
