#include "AActor.hpp"
#include "EGearSlotIDEnum.hpp"
#include "ESlateVisibility.hpp"
#include "FDataTableRowHandle.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FItemProperties.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "GearStatType.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UGearManager.hpp"
#include "UHorizontalBox.hpp"
#include "UIconButtonWidget.hpp"
#include "ULegendItem.hpp"
#include "UOverlay.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_AppearanceIcon_C.hpp"
#include "UUI_BP_FG_DetailsPanelBack_C.hpp"
#include "UUI_BP_FG_GearInvTooltip_C.hpp"
#include "UUI_BP_FG_IDP_TraitStat_C.hpp"
#include "UUI_BP_GearButton_C.hpp"
#include "UUI_BP_GearStat_C.hpp"
#include "UUI_BP_GearUpgrades_C.hpp"
#include "UUI_BP_InventoryIconButton_C.hpp"
#include "UUI_BP_Legend_Horizontal_Tooltip_C.hpp"
#include "UUI_BP_MoneyBar_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_FG_GearInvTooltip_C::SetEquippedItemData(EGearSlotIDEnum GearSlot, FGearItemID CallFunc_GetEquippedGearItemID_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.SetEquippedItemData"));
    struct Params_SetEquippedItemData {
        EGearSlotIDEnum GearSlot; // 0x0
        char pad_1[0x3];
        FGearItemID CallFunc_GetEquippedGearItemID_ReturnValue; // 0x4
    }; // Size: 0x18
    Params_SetEquippedItemData params{};
    params.GearSlot = (EGearSlotIDEnum)GearSlot;
    params.CallFunc_GetEquippedGearItemID_ReturnValue = (FGearItemID)CallFunc_GetEquippedGearItemID_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::Update_Appearance_Tooltip(UUI_BP_AppearanceIcon_C* Button, bool IsEquipped, EGearSlotIDEnum tempGearSlot, TArray<FName> tempTraitArray, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, FName CallFunc_UpdateGearSharedInfo_GearID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Update Appearance Tooltip"));
    struct Params_Update_Appearance_Tooltip {
        UUI_BP_AppearanceIcon_C* Button; // 0x0
        bool IsEquipped; // 0x8
        EGearSlotIDEnum tempGearSlot; // 0x9
        char pad_a[0x6];
        TArray<FName> tempTraitArray; // 0x10
        bool Temp_bool_Variable; // 0x20
        ESlateVisibility Temp_byte_Variable; // 0x21
        ESlateVisibility Temp_byte_Variable_1; // 0x22
        ESlateVisibility K2Node_Select_Default; // 0x23
        FName CallFunc_UpdateGearSharedInfo_GearID; // 0x24
    }; // Size: 0x2c
    Params_Update_Appearance_Tooltip params{};
    params.Button = (UUI_BP_AppearanceIcon_C*)Button;
    params.IsEquipped = (bool)IsEquipped;
    params.tempGearSlot = (EGearSlotIDEnum)tempGearSlot;
    params.tempTraitArray = (TArray<FName>)tempTraitArray;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_UpdateGearSharedInfo_GearID = (FName)CallFunc_UpdateGearSharedInfo_GearID;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::ExecuteUbergraph_UI_BP_FG_GearInvTooltip(int32_t EntryPoint, ULegendItem* K2Node_CustomEvent_LegendItem, bool K2Node_CustomEvent_HoldWasCompleted, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.ExecuteUbergraph_UI_BP_FG_GearInvTooltip"));
    struct Params_ExecuteUbergraph_UI_BP_FG_GearInvTooltip {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        ULegendItem* K2Node_CustomEvent_LegendItem; // 0x8
        bool K2Node_CustomEvent_HoldWasCompleted; // 0x10
        char pad_11[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_ExecuteUbergraph_UI_BP_FG_GearInvTooltip params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_CustomEvent_LegendItem = (ULegendItem*)K2Node_CustomEvent_LegendItem;
    params.K2Node_CustomEvent_HoldWasCompleted = (bool)K2Node_CustomEvent_HoldWasCompleted;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_FG_GearInvTooltip_C* UUI_BP_FG_GearInvTooltip_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C");
    return (UUI_BP_FG_GearInvTooltip_C*)res;
}
void UUI_BP_FG_GearInvTooltip_C::UpdateWandTooltip(FName ToolType, UIconButtonWidget* Button, bool Temp_bool_Variable, UUI_BP_GearButton_C* K2Node_DynamicCast_AsUI_BP_Gear_Button, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, FString CallFunc_Conv_NameToString_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateWandTooltip"));
    struct Params_UpdateWandTooltip {
        FName ToolType; // 0x0
        UIconButtonWidget* Button; // 0x8
        bool Temp_bool_Variable; // 0x10
        char pad_11[0x7];
        UUI_BP_GearButton_C* K2Node_DynamicCast_AsUI_BP_Gear_Button; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        ESlateVisibility Temp_byte_Variable; // 0x21
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x22
        char pad_23[0x5];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x28
        ESlateVisibility Temp_byte_Variable_1; // 0x38
        ESlateVisibility K2Node_Select_Default; // 0x39
        char pad_3a[0x6];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x40
    }; // Size: 0x50
    Params_UpdateWandTooltip params{};
    params.ToolType = (FName)ToolType;
    params.Button = (UIconButtonWidget*)Button;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_DynamicCast_AsUI_BP_Gear_Button = (UUI_BP_GearButton_C*)K2Node_DynamicCast_AsUI_BP_Gear_Button;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::ResetAppearanceFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.ResetAppearanceFX"));
    struct Params_ResetAppearanceFX {
    }; // Size: 0x0
    Params_ResetAppearanceFX params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::Set_Appearance_FXVisibility(ESlateVisibility ShowFX, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Set Appearance FXVisibility"));
    struct Params_Set_Appearance_FXVisibility {
        ESlateVisibility ShowFX; // 0x0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x1
        char pad_2[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Set_Appearance_FXVisibility params{};
    params.ShowFX = (ESlateVisibility)ShowFX;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::UpdateAppearanceInfo(bool CallFunc_SetRarity_ShowRarityGraphics) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateAppearanceInfo"));
    struct Params_UpdateAppearanceInfo {
        bool CallFunc_SetRarity_ShowRarityGraphics; // 0x0
    }; // Size: 0x1
    Params_UpdateAppearanceInfo params{};
    params.CallFunc_SetRarity_ShowRarityGraphics = (bool)CallFunc_SetRarity_ShowRarityGraphics;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_FG_GearInvTooltip_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
void UUI_BP_FG_GearInvTooltip_C::SetLegendItemData(TArray<FLegendItemData>& LegendItemData, ESlateVisibility Temp_byte_Variable, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable) {}
void UUI_BP_FG_GearInvTooltip_C::Update_Gear_Tooltip(UUI_BP_GearButton_C* Button, bool IsAppearanceInventory, bool IsEquipped, EGearSlotIDEnum tempGearSlot, TArray<FName> tempTraitArray, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_SetRarity_ShowRarityGraphics, FItemProperties CallFunc_GetItemProperties_ItemProperties, bool CallFunc_GetItemProperties_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem_1, bool CallFunc_GetGearItem_ReturnValue_1, FName CallFunc_UpdateGearSharedInfo_GearID, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Update Gear Tooltip"));
    struct Params_Update_Gear_Tooltip {
        UUI_BP_GearButton_C* Button; // 0x0
        bool IsAppearanceInventory; // 0x8
        bool IsEquipped; // 0x9
        EGearSlotIDEnum tempGearSlot; // 0xa
        char pad_b[0x5];
        TArray<FName> tempTraitArray; // 0x10
        ESlateVisibility Temp_byte_Variable; // 0x20
        ESlateVisibility Temp_byte_Variable_1; // 0x21
        bool Temp_bool_Variable; // 0x22
        char pad_23[0x5];
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x28
        bool CallFunc_GetGearItem_ReturnValue; // 0x80
        ESlateVisibility K2Node_Select_Default; // 0x81
        bool CallFunc_SetRarity_ShowRarityGraphics; // 0x82
        char pad_83[0x1];
        FItemProperties CallFunc_GetItemProperties_ItemProperties; // 0x84
        bool CallFunc_GetItemProperties_ReturnValue; // 0xf0
        char pad_f1[0x7];
        FGearItem CallFunc_GetGearItem_OutGearItem_1; // 0xf8
        bool CallFunc_GetGearItem_ReturnValue_1; // 0x150
        char pad_151[0x3];
        FName CallFunc_UpdateGearSharedInfo_GearID; // 0x154
        char pad_15c[0x4];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x160
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x170
        bool CallFunc_BooleanOR_ReturnValue; // 0x171
    }; // Size: 0x172
    Params_Update_Gear_Tooltip params{};
    params.Button = (UUI_BP_GearButton_C*)Button;
    params.IsAppearanceInventory = (bool)IsAppearanceInventory;
    params.IsEquipped = (bool)IsEquipped;
    params.tempGearSlot = (EGearSlotIDEnum)tempGearSlot;
    params.tempTraitArray = (TArray<FName>)tempTraitArray;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_SetRarity_ShowRarityGraphics = (bool)CallFunc_SetRarity_ShowRarityGraphics;
    params.CallFunc_GetItemProperties_ItemProperties = (FItemProperties)CallFunc_GetItemProperties_ItemProperties;
    params.CallFunc_GetItemProperties_ReturnValue = (bool)CallFunc_GetItemProperties_ReturnValue;
    params.CallFunc_GetGearItem_OutGearItem_1 = (FGearItem)CallFunc_GetGearItem_OutGearItem_1;
    params.CallFunc_GetGearItem_ReturnValue_1 = (bool)CallFunc_GetGearItem_ReturnValue_1;
    params.CallFunc_UpdateGearSharedInfo_GearID = (FName)CallFunc_UpdateGearSharedInfo_GearID;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::Update_Unidentified_Info(EGearSlotIDEnum GearSlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Update Unidentified Info"));
    struct Params_Update_Unidentified_Info {
        EGearSlotIDEnum GearSlotID; // 0x0
    }; // Size: 0x1
    Params_Update_Unidentified_Info params{};
    params.GearSlotID = (EGearSlotIDEnum)GearSlotID;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::LegendHoldItemReleased__DelegateSignature(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.LegendHoldItemReleased__DelegateSignature"));
    struct Params_LegendHoldItemReleased__DelegateSignature {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_LegendHoldItemReleased__DelegateSignature params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::Compare_Stats_to_Equipped(EGearSlotIDEnum hoveredGearSlot, int32_t TempSecondaryValue, int32_t TempMainValue, GearStatType TempSecondarySlot, GearStatType TempMainSlot, GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue, GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Compare Stats to Equipped"));
    struct Params_Compare_Stats_to_Equipped {
        EGearSlotIDEnum hoveredGearSlot; // 0x0
        char pad_1[0x3];
        int32_t TempSecondaryValue; // 0x4
        int32_t TempMainValue; // 0x8
        GearStatType TempSecondarySlot; // 0xc
        GearStatType TempMainSlot; // 0xd
        GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue; // 0xe
        GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue; // 0xf
        bool K2Node_SwitchEnum_CmpSuccess; // 0x10
        char pad_11[0x7];
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x18
        bool CallFunc_GetGearItem_ReturnValue; // 0x70
        bool K2Node_SwitchEnum_CmpSuccess_1; // 0x71
    }; // Size: 0x72
    Params_Compare_Stats_to_Equipped params{};
    params.hoveredGearSlot = (EGearSlotIDEnum)hoveredGearSlot;
    params.TempSecondaryValue = (int32_t)TempSecondaryValue;
    params.TempMainValue = (int32_t)TempMainValue;
    params.TempSecondarySlot = (GearStatType)TempSecondarySlot;
    params.TempMainSlot = (GearStatType)TempMainSlot;
    params.CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue = (GearStatType)CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue;
    params.CallFunc_DefineGearStatTypeFromSlot_ReturnValue = (GearStatType)CallFunc_DefineGearStatTypeFromSlot_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess_1 = (bool)K2Node_SwitchEnum_CmpSuccess_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::UpdateGearSharedInfo(FGearItemID GearItemID, bool IsAppearance, FName& GearID, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_GetGearTooltipInfo_Title, FString CallFunc_GetGearTooltipInfo_Description, FString CallFunc_GetGearTooltipInfo_Quality, FName CallFunc_GetGearTooltipInfo_Rarity, int32_t CallFunc_GetGearTooltipInfo_SellPrice, bool CallFunc_GetGearTooltipInfo_Sellable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateGearSharedInfo"));
    struct Params_UpdateGearSharedInfo {
        FGearItemID GearItemID; // 0x0
        bool IsAppearance; // 0x14
        char pad_15[0x3];
        FName GearID; // 0x18
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x20
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x30
        FString CallFunc_GetGearTooltipInfo_Title; // 0x40
        FString CallFunc_GetGearTooltipInfo_Description; // 0x50
        FString CallFunc_GetGearTooltipInfo_Quality; // 0x60
        FName CallFunc_GetGearTooltipInfo_Rarity; // 0x70
        int32_t CallFunc_GetGearTooltipInfo_SellPrice; // 0x78
        bool CallFunc_GetGearTooltipInfo_Sellable; // 0x7c
    }; // Size: 0x7d
    Params_UpdateGearSharedInfo params{};
    params.GearItemID = (FGearItemID)GearItemID;
    params.IsAppearance = (bool)IsAppearance;
    params.GearID = (FName)GearID;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_GetGearTooltipInfo_Title = (FString)CallFunc_GetGearTooltipInfo_Title;
    params.CallFunc_GetGearTooltipInfo_Description = (FString)CallFunc_GetGearTooltipInfo_Description;
    params.CallFunc_GetGearTooltipInfo_Quality = (FString)CallFunc_GetGearTooltipInfo_Quality;
    params.CallFunc_GetGearTooltipInfo_Rarity = (FName)CallFunc_GetGearTooltipInfo_Rarity;
    params.CallFunc_GetGearTooltipInfo_SellPrice = (int32_t)CallFunc_GetGearTooltipInfo_SellPrice;
    params.CallFunc_GetGearTooltipInfo_Sellable = (bool)CallFunc_GetGearTooltipInfo_Sellable;
    ProcessEvent(func, &params);
    GearID = params.GearID;
}
void UUI_BP_FG_GearInvTooltip_C::UpdateGearUpgrades(FGearItemID CurrentGearItem, FName ItemRarity, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, int32_t CallFunc_GetNumOfStatUpgradeForGearItem_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateGearUpgrades"));
    struct Params_UpdateGearUpgrades {
        FGearItemID CurrentGearItem; // 0x0
        FName ItemRarity; // 0x14
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x1c
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0x1d
        bool CallFunc_EqualEqual_NameName_ReturnValue_2; // 0x1e
        bool CallFunc_EqualEqual_NameName_ReturnValue_3; // 0x1f
        int32_t CallFunc_GetNumOfStatUpgradeForGearItem_ReturnValue; // 0x20
        bool CallFunc_BooleanOR_ReturnValue; // 0x24
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x25
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x26
    }; // Size: 0x27
    Params_UpdateGearUpgrades params{};
    params.CurrentGearItem = (FGearItemID)CurrentGearItem;
    params.ItemRarity = (FName)ItemRarity;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    params.CallFunc_EqualEqual_NameName_ReturnValue_2 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_2;
    params.CallFunc_EqualEqual_NameName_ReturnValue_3 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_3;
    params.CallFunc_GetNumOfStatUpgradeForGearItem_ReturnValue = (int32_t)CallFunc_GetNumOfStatUpgradeForGearItem_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::UpdateStatTooltip(FString statTitle, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateStatTooltip"));
    struct Params_UpdateStatTooltip {
        FString statTitle; // 0x0
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x10
    }; // Size: 0x20
    Params_UpdateStatTooltip params{};
    params.statTitle = (FString)statTitle;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::UpdateEmptyTooltip(FString EmptyMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateEmptyTooltip"));
    struct Params_UpdateEmptyTooltip {
        FString EmptyMessage; // 0x0
    }; // Size: 0x10
    Params_UpdateEmptyTooltip params{};
    params.EmptyMessage = (FString)EmptyMessage;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::UpdateMainToolTooltip(FName ToolType, UIconButtonWidget* Button, ESlateVisibility Temp_byte_Variable, UUI_BP_GearButton_C* K2Node_DynamicCast_AsUI_BP_Gear_Button, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_NameName_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateMainToolTooltip"));
    struct Params_UpdateMainToolTooltip {
        FName ToolType; // 0x0
        UIconButtonWidget* Button; // 0x8
        ESlateVisibility Temp_byte_Variable; // 0x10
        char pad_11[0x7];
        UUI_BP_GearButton_C* K2Node_DynamicCast_AsUI_BP_Gear_Button; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x28
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x38
        ESlateVisibility Temp_byte_Variable_1; // 0x39
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x3a
        bool CallFunc_BooleanAND_ReturnValue; // 0x3b
        char pad_3c[0x4];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x40
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0x50
        bool Temp_bool_Variable; // 0x51
        ESlateVisibility K2Node_Select_Default; // 0x52
        bool CallFunc_EqualEqual_NameName_ReturnValue_2; // 0x53
    }; // Size: 0x54
    Params_UpdateMainToolTooltip params{};
    params.ToolType = (FName)ToolType;
    params.Button = (UIconButtonWidget*)Button;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.K2Node_DynamicCast_AsUI_BP_Gear_Button = (UUI_BP_GearButton_C*)K2Node_DynamicCast_AsUI_BP_Gear_Button;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_EqualEqual_NameName_ReturnValue_2 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_2;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::SetSellValue(bool Sellable, int32_t SellPrice) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.SetSellValue"));
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
void UUI_BP_FG_GearInvTooltip_C::UpdateEquippedTooltip(EGearSlotIDEnum EquippedSlot, bool TempSellable, int32_t TempSellPrice, FString TempDescription, TArray<FName> tempTraitArray, FName TempRarity, FString TempTitle, FGearItemID CallFunc_GetEquippedGearItemID_ReturnValue, FString CallFunc_GetGearTooltipInfo_Title, FString CallFunc_GetGearTooltipInfo_Description, FString CallFunc_GetGearTooltipInfo_Quality, FName CallFunc_GetGearTooltipInfo_Rarity, int32_t CallFunc_GetGearTooltipInfo_SellPrice, bool CallFunc_GetGearTooltipInfo_Sellable, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem_1, bool CallFunc_GetGearItem_ReturnValue_1, bool CallFunc_SetRarity_ShowRarityGraphics) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateEquippedTooltip"));
    struct Params_UpdateEquippedTooltip {
        EGearSlotIDEnum EquippedSlot; // 0x0
        bool TempSellable; // 0x1
        char pad_2[0x2];
        int32_t TempSellPrice; // 0x4
        FString TempDescription; // 0x8
        TArray<FName> tempTraitArray; // 0x18
        FName TempRarity; // 0x28
        FString TempTitle; // 0x30
        FGearItemID CallFunc_GetEquippedGearItemID_ReturnValue; // 0x40
        char pad_54[0x4];
        FString CallFunc_GetGearTooltipInfo_Title; // 0x58
        FString CallFunc_GetGearTooltipInfo_Description; // 0x68
        FString CallFunc_GetGearTooltipInfo_Quality; // 0x78
        FName CallFunc_GetGearTooltipInfo_Rarity; // 0x88
        int32_t CallFunc_GetGearTooltipInfo_SellPrice; // 0x90
        bool CallFunc_GetGearTooltipInfo_Sellable; // 0x94
        char pad_95[0x3];
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x98
        bool CallFunc_GetGearItem_ReturnValue; // 0xf0
        char pad_f1[0x7];
        FGearItem CallFunc_GetGearItem_OutGearItem_1; // 0xf8
        bool CallFunc_GetGearItem_ReturnValue_1; // 0x150
        bool CallFunc_SetRarity_ShowRarityGraphics; // 0x151
    }; // Size: 0x152
    Params_UpdateEquippedTooltip params{};
    params.EquippedSlot = (EGearSlotIDEnum)EquippedSlot;
    params.TempSellable = (bool)TempSellable;
    params.TempSellPrice = (int32_t)TempSellPrice;
    params.TempDescription = (FString)TempDescription;
    params.tempTraitArray = (TArray<FName>)tempTraitArray;
    params.TempRarity = (FName)TempRarity;
    params.TempTitle = (FString)TempTitle;
    params.CallFunc_GetEquippedGearItemID_ReturnValue = (FGearItemID)CallFunc_GetEquippedGearItemID_ReturnValue;
    params.CallFunc_GetGearTooltipInfo_Title = (FString)CallFunc_GetGearTooltipInfo_Title;
    params.CallFunc_GetGearTooltipInfo_Description = (FString)CallFunc_GetGearTooltipInfo_Description;
    params.CallFunc_GetGearTooltipInfo_Quality = (FString)CallFunc_GetGearTooltipInfo_Quality;
    params.CallFunc_GetGearTooltipInfo_Rarity = (FName)CallFunc_GetGearTooltipInfo_Rarity;
    params.CallFunc_GetGearTooltipInfo_SellPrice = (int32_t)CallFunc_GetGearTooltipInfo_SellPrice;
    params.CallFunc_GetGearTooltipInfo_Sellable = (bool)CallFunc_GetGearTooltipInfo_Sellable;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.CallFunc_GetGearItem_OutGearItem_1 = (FGearItem)CallFunc_GetGearItem_OutGearItem_1;
    params.CallFunc_GetGearItem_ReturnValue_1 = (bool)CallFunc_GetGearItem_ReturnValue_1;
    params.CallFunc_SetRarity_ShowRarityGraphics = (bool)CallFunc_SetRarity_ShowRarityGraphics;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::SetTraitData(TArray<FName>& TraitData, FGearItemID GearItemID, TArray<FName> tempTraitArray, FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, UGearManager* CallFunc_Get_ReturnValue, int32_t CallFunc_GetTotalAvailableTriats_TotalAvailableTraits, int32_t CallFunc_GetGearEmptyTraitSlots_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.SetTraitData"));
    struct Params_SetTraitData {
        TArray<FName> TraitData; // 0x0
        FGearItemID GearItemID; // 0x10
        char pad_24[0x4];
        TArray<FName> tempTraitArray; // 0x28
        FName CallFunc_Array_Get_Item; // 0x38
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x40
        char pad_41[0x7];
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x48
        bool CallFunc_GetGearItem_ReturnValue; // 0xa0
        char pad_a1[0x7];
        UGearManager* CallFunc_Get_ReturnValue; // 0xa8
        int32_t CallFunc_GetTotalAvailableTriats_TotalAvailableTraits; // 0xb0
        int32_t CallFunc_GetGearEmptyTraitSlots_ReturnValue; // 0xb4
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0xb8
        bool CallFunc_BooleanAND_ReturnValue; // 0xb9
    }; // Size: 0xba
    Params_SetTraitData params{};
    params.TraitData = (TArray<FName>)TraitData;
    params.GearItemID = (FGearItemID)GearItemID;
    params.tempTraitArray = (TArray<FName>)tempTraitArray;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UGearManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetTotalAvailableTriats_TotalAvailableTraits = (int32_t)CallFunc_GetTotalAvailableTriats_TotalAvailableTraits;
    params.CallFunc_GetGearEmptyTraitSlots_ReturnValue = (int32_t)CallFunc_GetGearEmptyTraitSlots_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    TraitData = params.TraitData;
}
void UUI_BP_FG_GearInvTooltip_C::UpdateTraits(FName NewTraitID, int32_t EmptySlotCount, TArray<FName>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.UpdateTraits"));
    struct Params_UpdateTraits {
        FName NewTraitID; // 0x0
        int32_t EmptySlotCount; // 0x8
        char pad_c[0x4];
        TArray<FName> K2Node_MakeArray_Array; // 0x10
    }; // Size: 0x20
    Params_UpdateTraits params{};
    params.NewTraitID = (FName)NewTraitID;
    params.EmptySlotCount = (int32_t)EmptySlotCount;
    params.K2Node_MakeArray_Array = (TArray<FName>)K2Node_MakeArray_Array;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UUI_BP_FG_GearInvTooltip_C::Update_Simple_Tooltip(FString WandStyle, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Update Simple Tooltip"));
    struct Params_Update_Simple_Tooltip {
        FString WandStyle; // 0x0
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Update_Simple_Tooltip params{};
    params.WandStyle = (FString)WandStyle;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::PlayPanelAnimation() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.PlayPanelAnimation"));
    struct Params_PlayPanelAnimation {
    }; // Size: 0x0
    Params_PlayPanelAnimation params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::SetRequiredLevel(int32_t ItemLevel, FName ItemRarity, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle) {}
void UUI_BP_FG_GearInvTooltip_C::Update_Tool_Tooltip(FName ToolType, UIconButtonWidget* Button, bool Temp_bool_Variable, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_SetInventoryIconOverride_OutDisplayName, FString CallFunc_SetInventoryIconOverride_OutIconName, bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable, bool CallFunc_SetInventoryIconOverride_ReturnValue, ESlateVisibility Temp_byte_Variable_1, FString CallFunc_Concat_StrStr_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_NameName_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.Update Tool Tooltip"));
    struct Params_Update_Tool_Tooltip {
        FName ToolType; // 0x0
        UIconButtonWidget* Button; // 0x8
        bool Temp_bool_Variable; // 0x10
        char pad_11[0x7];
        UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        ESlateVisibility Temp_byte_Variable; // 0x21
        char pad_22[0x6];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x28
        FString CallFunc_SetInventoryIconOverride_OutDisplayName; // 0x38
        FString CallFunc_SetInventoryIconOverride_OutIconName; // 0x48
        bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable; // 0x58
        bool CallFunc_SetInventoryIconOverride_ReturnValue; // 0x59
        ESlateVisibility Temp_byte_Variable_1; // 0x5a
        char pad_5b[0x5];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x60
        ESlateVisibility K2Node_Select_Default; // 0x70
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x71
        char pad_72[0x6];
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x78
    }; // Size: 0x88
    Params_Update_Tool_Tooltip params{};
    params.ToolType = (FName)ToolType;
    params.Button = (UIconButtonWidget*)Button;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button = (UUI_BP_InventoryIconButton_C*)K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_SetInventoryIconOverride_OutDisplayName = (FString)CallFunc_SetInventoryIconOverride_OutDisplayName;
    params.CallFunc_SetInventoryIconOverride_OutIconName = (FString)CallFunc_SetInventoryIconOverride_OutIconName;
    params.CallFunc_SetInventoryIconOverride_OutIsNameTranslatable = (bool)CallFunc_SetInventoryIconOverride_OutIsNameTranslatable;
    params.CallFunc_SetInventoryIconOverride_ReturnValue = (bool)CallFunc_SetInventoryIconOverride_ReturnValue;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::SetStats(EGearSlotIDEnum GearSlot, int32_t Offense, int32_t Defense, bool isUnidentified, FName ItemRarity, GearStatType TempSecondarySlotID, GearStatType TempMainSlotID, int32_t TempCooldown, int32_t TempDeffense, int32_t TempOffense, GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.SetStats"));
    struct Params_SetStats {
        EGearSlotIDEnum GearSlot; // 0x0
        char pad_1[0x3];
        int32_t Offense; // 0x4
        int32_t Defense; // 0x8
        bool isUnidentified; // 0xc
        char pad_d[0x3];
        FName ItemRarity; // 0x10
        GearStatType TempSecondarySlotID; // 0x18
        GearStatType TempMainSlotID; // 0x19
        char pad_1a[0x2];
        int32_t TempCooldown; // 0x1c
        int32_t TempDeffense; // 0x20
        int32_t TempOffense; // 0x24
        GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue; // 0x28
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x29
        GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue; // 0x2a
    }; // Size: 0x2b
    Params_SetStats params{};
    params.GearSlot = (EGearSlotIDEnum)GearSlot;
    params.Offense = (int32_t)Offense;
    params.Defense = (int32_t)Defense;
    params.isUnidentified = (bool)isUnidentified;
    params.ItemRarity = (FName)ItemRarity;
    params.TempSecondarySlotID = (GearStatType)TempSecondarySlotID;
    params.TempMainSlotID = (GearStatType)TempMainSlotID;
    params.TempCooldown = (int32_t)TempCooldown;
    params.TempDeffense = (int32_t)TempDeffense;
    params.TempOffense = (int32_t)TempOffense;
    params.CallFunc_DefineGearStatTypeFromSlot_ReturnValue = (GearStatType)CallFunc_DefineGearStatTypeFromSlot_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue = (GearStatType)CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_GearInvTooltip_C::SetRarity(FName Rarity, bool& ShowRarityGraphics, ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.SetRarity"));
    struct Params_SetRarity {
        FName Rarity; // 0x0
        bool ShowRarityGraphics; // 0x8
        ESlateVisibility Temp_byte_Variable; // 0x9
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0xa
        char pad_b[0x5];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x10
        ESlateVisibility Temp_byte_Variable_1; // 0x20
        bool Temp_bool_Variable; // 0x21
        ESlateVisibility K2Node_Select_Default; // 0x22
        char pad_23[0x5];
        FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag; // 0x28
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x38
        bool CallFunc_NotEqual_NameName_ReturnValue_1; // 0x39
        bool CallFunc_NotEqual_NameName_ReturnValue_2; // 0x3a
        char pad_3b[0x5];
        FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag_1; // 0x40
        bool CallFunc_BooleanAND_ReturnValue; // 0x50
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x51
    }; // Size: 0x52
    Params_SetRarity params{};
    params.Rarity = (FName)Rarity;
    params.ShowRarityGraphics = (bool)ShowRarityGraphics;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_GetRarityColorTag_ColorTag = (FDataTableRowHandle)CallFunc_GetRarityColorTag_ColorTag;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue_1 = (bool)CallFunc_NotEqual_NameName_ReturnValue_1;
    params.CallFunc_NotEqual_NameName_ReturnValue_2 = (bool)CallFunc_NotEqual_NameName_ReturnValue_2;
    params.CallFunc_GetRarityColorTag_ColorTag_1 = (FDataTableRowHandle)CallFunc_GetRarityColorTag_ColorTag_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    ProcessEvent(func, &params);
    ShowRarityGraphics = params.ShowRarityGraphics;
}
void UUI_BP_FG_GearInvTooltip_C::HoldReleased(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_FG_GearInvTooltip.UI_BP_FG_GearInvTooltip_C.HoldReleased"));
    struct Params_HoldReleased {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_HoldReleased params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
