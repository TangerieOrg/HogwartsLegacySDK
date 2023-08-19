#include "EGearSlotIDEnum.hpp"
#include "EIconButtonState.hpp"
#include "ESlateVisibility.hpp"
#include "FDataTableRowHandle.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FGearStatRecipeData.hpp"
#include "FItemProperties.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "GearStatType.hpp"
#include "UCanvasPanel.hpp"
#include "UClass.hpp"
#include "UExperienceManager.hpp"
#include "UFunction.hpp"
#include "UGearManager.hpp"
#include "UIconButtonWidget.hpp"
#include "UImage.hpp"
#include "UNamedSlot.hpp"
#include "UOverlay.hpp"
#include "UPanelSlot.hpp"
#include "UPhoenixImage.hpp"
#include "UScaleBox.hpp"
#include "USizeBox.hpp"
#include "UUI_BP_GearButton_C.hpp"
#include "UUI_BP_GearThreadSlot_C.hpp"
#include "UUI_BP_NewIndicator_C.hpp"
#include "UUI_BP_SelectedBox_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_GearButton_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::SetHoodState(bool ShowHoodIcon, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetHoodState"));
    struct Params_SetHoodState {
        bool ShowHoodIcon; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        ESlateVisibility K2Node_Select_Default; // 0x4
    }; // Size: 0x5
    Params_SetHoodState params{};
    params.ShowHoodIcon = (bool)ShowHoodIcon;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
UUI_BP_GearButton_C* UUI_BP_GearButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C");
    return (UUI_BP_GearButton_C*)res;
}
void UUI_BP_GearButton_C::InitGearButton(FGearItemID GearID, bool IsAppearance, TArray<FName> TempTraits, FItemProperties CallFunc_GetItemProperties_ItemProperties, bool CallFunc_GetItemProperties_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_SetInventoryIconOverride_OutDisplayName, FString CallFunc_SetInventoryIconOverride_OutIconName, bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable, bool CallFunc_SetInventoryIconOverride_ReturnValue, UGearManager* CallFunc_Get_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, int32_t CallFunc_GetGearEmptyTraitSlots_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.InitGearButton"));
    struct Params_InitGearButton {
        FGearItemID GearID; // 0x0
        bool IsAppearance; // 0x14
        char pad_15[0x3];
        TArray<FName> TempTraits; // 0x18
        FItemProperties CallFunc_GetItemProperties_ItemProperties; // 0x28
        bool CallFunc_GetItemProperties_ReturnValue; // 0x94
        char pad_95[0x3];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x98
        bool CallFunc_Not_PreBool_ReturnValue; // 0xa8
        char pad_a9[0x7];
        FString CallFunc_SetInventoryIconOverride_OutDisplayName; // 0xb0
        FString CallFunc_SetInventoryIconOverride_OutIconName; // 0xc0
        bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable; // 0xd0
        bool CallFunc_SetInventoryIconOverride_ReturnValue; // 0xd1
        char pad_d2[0x6];
        UGearManager* CallFunc_Get_ReturnValue; // 0xd8
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0xe0
        bool CallFunc_GetGearItem_ReturnValue; // 0x138
        char pad_139[0x3];
        int32_t CallFunc_GetGearEmptyTraitSlots_ReturnValue; // 0x13c
    }; // Size: 0x140
    Params_InitGearButton params{};
    params.GearID = (FGearItemID)GearID;
    params.IsAppearance = (bool)IsAppearance;
    params.TempTraits = (TArray<FName>)TempTraits;
    params.CallFunc_GetItemProperties_ItemProperties = (FItemProperties)CallFunc_GetItemProperties_ItemProperties;
    params.CallFunc_GetItemProperties_ReturnValue = (bool)CallFunc_GetItemProperties_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_SetInventoryIconOverride_OutDisplayName = (FString)CallFunc_SetInventoryIconOverride_OutDisplayName;
    params.CallFunc_SetInventoryIconOverride_OutIconName = (FString)CallFunc_SetInventoryIconOverride_OutIconName;
    params.CallFunc_SetInventoryIconOverride_OutIsNameTranslatable = (bool)CallFunc_SetInventoryIconOverride_OutIsNameTranslatable;
    params.CallFunc_SetInventoryIconOverride_ReturnValue = (bool)CallFunc_SetInventoryIconOverride_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UGearManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.CallFunc_GetGearEmptyTraitSlots_ReturnValue = (int32_t)CallFunc_GetGearEmptyTraitSlots_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::I_GetIconName(FString& IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.I_GetIconName"));
    struct Params_I_GetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_I_GetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
    IconName = params.IconName;
}
void UUI_BP_GearButton_C::ToggleLoomInteraction(bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.ToggleLoomInteraction"));
    struct Params_ToggleLoomInteraction {
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x0
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0x1
        bool CallFunc_EqualEqual_NameName_ReturnValue_2; // 0x2
        bool CallFunc_EqualEqual_NameName_ReturnValue_3; // 0x3
        bool CallFunc_BooleanOR_ReturnValue; // 0x4
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x5
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x6
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x7
    }; // Size: 0x8
    Params_ToggleLoomInteraction params{};
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    params.CallFunc_EqualEqual_NameName_ReturnValue_2 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_2;
    params.CallFunc_EqualEqual_NameName_ReturnValue_3 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::SetUpgradeAvailable(FGearItem TempGearItem, int32_t CallFunc_GetMaxUpgradeForGearItem_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FGearItem CallFunc_GetButtonGearItem_GearItem, bool CallFunc_BooleanOR_ReturnValue, GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue, FGearStatRecipeData CallFunc_GetGearStatsUpgradeRecipe_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetUpgradeAvailable"));
    struct Params_SetUpgradeAvailable {
        FGearItem TempGearItem; // 0x0
        int32_t CallFunc_GetMaxUpgradeForGearItem_ReturnValue; // 0x58
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x5c
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x60
        char pad_61[0x7];
        FGearItem CallFunc_GetButtonGearItem_GearItem; // 0x68
        bool CallFunc_BooleanOR_ReturnValue; // 0xc0
        GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue; // 0xc1
        char pad_c2[0x6];
        FGearStatRecipeData CallFunc_GetGearStatsUpgradeRecipe_ReturnValue; // 0xc8
    }; // Size: 0xe8
    Params_SetUpgradeAvailable params{};
    params.TempGearItem = (FGearItem)TempGearItem;
    params.CallFunc_GetMaxUpgradeForGearItem_ReturnValue = (int32_t)CallFunc_GetMaxUpgradeForGearItem_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_GetButtonGearItem_GearItem = (FGearItem)CallFunc_GetButtonGearItem_GearItem;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue = (GearStatType)CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue;
    params.CallFunc_GetGearStatsUpgradeRecipe_ReturnValue = (FGearStatRecipeData)CallFunc_GetGearStatsUpgradeRecipe_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::ResetGearButtonState(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.ResetGearButtonState"));
    struct Params_ResetGearButtonState {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ResetGearButtonState params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::ToggleHoodState() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.ToggleHoodState"));
    struct Params_ToggleHoodState {
    }; // Size: 0x0
    Params_ToggleHoodState params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::ResetButton() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.ResetButton"));
    struct Params_ResetButton {
    }; // Size: 0x0
    Params_ResetButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::SetItemLock(int32_t ItemLevel, UExperienceManager* CallFunc_Get_ReturnValue, int32_t CallFunc_GetExperienceLevel_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetItemLock"));
    struct Params_SetItemLock {
        int32_t ItemLevel; // 0x0
        char pad_4[0x4];
        UExperienceManager* CallFunc_Get_ReturnValue; // 0x8
        int32_t CallFunc_GetExperienceLevel_ReturnValue; // 0x10
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x14
    }; // Size: 0x15
    Params_SetItemLock params{};
    params.ItemLevel = (int32_t)ItemLevel;
    params.CallFunc_Get_ReturnValue = (UExperienceManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetExperienceLevel_ReturnValue = (int32_t)CallFunc_GetExperienceLevel_ReturnValue;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::OverrideGearIcon(FString tempOverrideID, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.OverrideGearIcon"));
    struct Params_OverrideGearIcon {
        FString tempOverrideID; // 0x0
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x10
        bool K2Node_SwitchEnum_CmpSuccess; // 0x11
    }; // Size: 0x12
    Params_OverrideGearIcon params{};
    params.tempOverrideID = (FString)tempOverrideID;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::ToggleTraitNotification(bool ShowNotification, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.ToggleTraitNotification"));
    struct Params_ToggleTraitNotification {
        bool ShowNotification; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ToggleTraitNotification params{};
    params.ShowNotification = (bool)ShowNotification;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::GetButtonGearItem(FGearItem& GearItem, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.GetButtonGearItem"));
    struct Params_GetButtonGearItem {
        FGearItem GearItem; // 0x0
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x58
        bool CallFunc_GetGearItem_ReturnValue; // 0xb0
    }; // Size: 0xb1
    Params_GetButtonGearItem params{};
    params.GearItem = (FGearItem)GearItem;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    ProcessEvent(func, &params);
    GearItem = params.GearItem;
}
void UUI_BP_GearButton_C::SetTraitAvailable(FGearItem CallFunc_GetButtonGearItem_GearItem, int32_t CallFunc_GetTotalAvailableTriats_TotalAvailableTraits, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetTraitAvailable"));
    struct Params_SetTraitAvailable {
        FGearItem CallFunc_GetButtonGearItem_GearItem; // 0x0
        int32_t CallFunc_GetTotalAvailableTriats_TotalAvailableTraits; // 0x58
        bool CallFunc_Not_PreBool_ReturnValue; // 0x5c
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x5d
        bool CallFunc_BooleanAND_ReturnValue; // 0x5e
    }; // Size: 0x5f
    Params_SetTraitAvailable params{};
    params.CallFunc_GetButtonGearItem_GearItem = (FGearItem)CallFunc_GetButtonGearItem_GearItem;
    params.CallFunc_GetTotalAvailableTriats_TotalAvailableTraits = (int32_t)CallFunc_GetTotalAvailableTriats_TotalAvailableTraits;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::ToggleUpgradeNotification(bool showUpgrade, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.ToggleUpgradeNotification"));
    struct Params_ToggleUpgradeNotification {
        bool showUpgrade; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ToggleUpgradeNotification params{};
    params.showUpgrade = (bool)showUpgrade;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::SetRarityState(FName RarityTier, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetRarityState"));
    struct Params_SetRarityState {
        FName RarityTier; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x8
        ESlateVisibility Temp_byte_Variable_1; // 0x9
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0xa
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0xb
        bool CallFunc_BooleanOR_ReturnValue; // 0xc
        bool CallFunc_EqualEqual_NameName_ReturnValue_2; // 0xd
        bool Temp_bool_Variable; // 0xe
        ESlateVisibility K2Node_Select_Default; // 0xf
        FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag; // 0x10
    }; // Size: 0x20
    Params_SetRarityState params{};
    params.RarityTier = (FName)RarityTier;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_2 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_2;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_GetRarityColorTag_ColorTag = (FDataTableRowHandle)CallFunc_GetRarityColorTag_ColorTag;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::SetInitSelected(bool IsSelected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetInitSelected"));
    struct Params_SetInitSelected {
        bool IsSelected; // 0x0
    }; // Size: 0x1
    Params_SetInitSelected params{};
    params.IsSelected = (bool)IsSelected;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::I_SetIconName(FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.I_SetIconName"));
    struct Params_I_SetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_I_SetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::SetIsIdentified(int32_t IdentifiedIndex, int32_t Temp_int_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetIsIdentified"));
    struct Params_SetIsIdentified {
        int32_t IdentifiedIndex; // 0x0
        int32_t Temp_int_Variable; // 0x4
        bool Temp_bool_Variable; // 0x8
        bool Temp_bool_Variable_1; // 0x9
        bool K2Node_Select_Default; // 0xa
    }; // Size: 0xb
    Params_SetIsIdentified params{};
    params.IdentifiedIndex = (int32_t)IdentifiedIndex;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.K2Node_Select_Default = (bool)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
bool UUI_BP_GearButton_C::HandleNonExistent0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.HandleNonExistent"));
    struct Params_HandleNonExistent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleNonExistent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UWidget* UUI_BP_GearButton_C::GetExtraContent0(UWidget* CallFunc_GetChildAt_ReturnValue, UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.GetExtraContent"));
    struct Params_GetExtraContent {
        UWidget* ReturnValue; // 0x0
        UWidget* CallFunc_GetChildAt_ReturnValue; // 0x8
        UUserWidget* K2Node_DynamicCast_AsUser_Widget; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_GetExtraContent params{};
    params.CallFunc_GetChildAt_ReturnValue = (UWidget*)CallFunc_GetChildAt_ReturnValue;
    params.K2Node_DynamicCast_AsUser_Widget = (UUserWidget*)K2Node_DynamicCast_AsUser_Widget;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
void UUI_BP_GearButton_C::SetIsNewItem(bool IsNew) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetIsNewItem"));
    struct Params_SetIsNewItem {
        bool IsNew; // 0x0
    }; // Size: 0x1
    Params_SetIsNewItem params{};
    params.IsNew = (bool)IsNew;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::SetTraitSlots(TArray<FName>& TraitArray, int32_t emptyTraitCount, int32_t tempThreadCount, int32_t Temp_int_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable_1, bool CallFunc_IsValid_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetTraitSlots"));
    struct Params_SetTraitSlots {
        TArray<FName> TraitArray; // 0x0
        int32_t emptyTraitCount; // 0x10
        int32_t tempThreadCount; // 0x14
        int32_t Temp_int_Variable; // 0x18
        int32_t Temp_int_Loop_Counter_Variable; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x20
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x24
        int32_t Temp_int_Array_Index_Variable; // 0x28
        int32_t Temp_int_Variable_1; // 0x2c
        bool CallFunc_IsValid_ReturnValue; // 0x30
        char pad_31[0x3];
        FName CallFunc_Array_Get_Item; // 0x34
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x3c
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x3d
        char pad_3e[0x2];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x40
        int32_t Temp_int_Variable_2; // 0x44
        bool CallFunc_Less_IntInt_ReturnValue; // 0x48
        char pad_49[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x4c
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x50
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x54
    }; // Size: 0x55
    Params_SetTraitSlots params{};
    params.TraitArray = (TArray<FName>)TraitArray;
    params.emptyTraitCount = (int32_t)emptyTraitCount;
    params.tempThreadCount = (int32_t)tempThreadCount;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Variable_2 = (int32_t)Temp_int_Variable_2;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    TraitArray = params.TraitArray;
}
void UUI_BP_GearButton_C::HideStatList(bool showStats) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.HideStatList"));
    struct Params_HideStatList {
        bool showStats; // 0x0
    }; // Size: 0x1
    Params_HideStatList params{};
    params.showStats = (bool)showStats;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::I_AddExtraContent(UWidget* NewContent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.I_AddExtraContent"));
    struct Params_I_AddExtraContent {
        UWidget* NewContent; // 0x0
    }; // Size: 0x8
    Params_I_AddExtraContent params{};
    params.NewContent = (UWidget*)NewContent;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::ToggleAppearanceIcon(bool HasAppearance, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.ToggleAppearanceIcon"));
    struct Params_ToggleAppearanceIcon {
        bool HasAppearance; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        ESlateVisibility K2Node_Select_Default; // 0x4
    }; // Size: 0x5
    Params_ToggleAppearanceIcon params{};
    params.HasAppearance = (bool)HasAppearance;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
bool UUI_BP_GearButton_C::IsInteractable() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.IsInteractable"));
    struct Params_IsInteractable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInteractable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_GearButton_C::SetIsSelected(bool buttonSelected, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetIsSelected"));
    struct Params_SetIsSelected {
        bool buttonSelected; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SetIsSelected params{};
    params.buttonSelected = (bool)buttonSelected;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::I_SetImage(FString ImageName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.I_SetImage"));
    struct Params_I_SetImage {
        FString ImageName; // 0x0
    }; // Size: 0x10
    Params_I_SetImage params{};
    params.ImageName = (FString)ImageName;
    ProcessEvent(func, &params);
}
bool UUI_BP_GearButton_C::SetButtonIcons0(FString BackgroundImage) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetButtonIcons"));
    struct Params_SetButtonIcons {
        FString BackgroundImage; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetButtonIcons params{};
    params.BackgroundImage = (FString)BackgroundImage;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_GearButton_C::SetButtonState0(EIconButtonState NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetButtonState"));
    struct Params_SetButtonState {
        EIconButtonState NewState; // 0x0
    }; // Size: 0x1
    Params_SetButtonState params{};
    params.NewState = (EIconButtonState)NewState;
    ProcessEvent(func, &params);
}
bool UUI_BP_GearButton_C::HandleMissing0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.HandleMissing"));
    struct Params_HandleMissing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleMissing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_BP_GearButton_C::HandleEnabled0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.HandleEnabled"));
    struct Params_HandleEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_BP_GearButton_C::HandleDisabled0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.HandleDisabled"));
    struct Params_HandleDisabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleDisabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_BP_GearButton_C::RemoveExtraContent0(bool CallFunc_RemoveChildAt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.RemoveExtraContent"));
    struct Params_RemoveExtraContent {
        bool ReturnValue; // 0x0
        bool CallFunc_RemoveChildAt_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_RemoveExtraContent params{};
    params.CallFunc_RemoveChildAt_ReturnValue = (bool)CallFunc_RemoveChildAt_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_BP_GearButton_C::AddExtraContent0(UWidget* NewContent, UPanelSlot* CallFunc_AddChild_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.AddExtraContent"));
    struct Params_AddExtraContent {
        UWidget* NewContent; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x7];
        UPanelSlot* CallFunc_AddChild_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddExtraContent params{};
    params.NewContent = (UWidget*)NewContent;
    params.CallFunc_AddChild_ReturnValue = (UPanelSlot*)CallFunc_AddChild_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_BP_GearButton_C::SetState0(bool IsActive, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.SetState"));
    struct Params_SetState {
        bool IsActive; // 0x0
        bool ReturnValue; // 0x1
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x2
    }; // Size: 0x3
    Params_SetState params{};
    params.IsActive = (bool)IsActive;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_GearButton_C::I_SetIconSize(FVector2D Size) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.I_SetIconSize"));
    struct Params_I_SetIconSize {
        FVector2D Size; // 0x0
    }; // Size: 0x8
    Params_I_SetIconSize params{};
    params.Size = (FVector2D)Size;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::HighlightButton0(bool isHighlighted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.HighlightButton"));
    struct Params_HighlightButton {
        bool isHighlighted; // 0x0
    }; // Size: 0x1
    Params_HighlightButton params{};
    params.isHighlighted = (bool)isHighlighted;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::ExecuteUbergraph_UI_BP_GearButton(int32_t EntryPoint, FString K2Node_Event_IconName, FString K2Node_Event_ImageName, UWidget* K2Node_Event_NewContent, bool CallFunc_AddExtraContent_ReturnValue, bool K2Node_Event_isHighlighted, EIconButtonState K2Node_Event_NewState, bool CallFunc_HandleEnabled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HandleDisabled_ReturnValue, bool CallFunc_HandleMissing_ReturnValue, bool CallFunc_HandleNonExistent_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, FVector2D K2Node_Event_Size, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.ExecuteUbergraph_UI_BP_GearButton"));
    struct Params_ExecuteUbergraph_UI_BP_GearButton {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        FString K2Node_Event_IconName; // 0x8
        FString K2Node_Event_ImageName; // 0x18
        UWidget* K2Node_Event_NewContent; // 0x28
        bool CallFunc_AddExtraContent_ReturnValue; // 0x30
        bool K2Node_Event_isHighlighted; // 0x31
        EIconButtonState K2Node_Event_NewState; // 0x32
        bool CallFunc_HandleEnabled_ReturnValue; // 0x33
        bool K2Node_SwitchEnum_CmpSuccess; // 0x34
        bool CallFunc_HandleDisabled_ReturnValue; // 0x35
        bool CallFunc_HandleMissing_ReturnValue; // 0x36
        bool CallFunc_HandleNonExistent_ReturnValue; // 0x37
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x38
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x3c
        FVector2D K2Node_Event_Size; // 0x40
        bool K2Node_Event_IsDesignTime; // 0x48
        char pad_49[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x50
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x58
    }; // Size: 0x60
    Params_ExecuteUbergraph_UI_BP_GearButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IconName = (FString)K2Node_Event_IconName;
    params.K2Node_Event_ImageName = (FString)K2Node_Event_ImageName;
    params.K2Node_Event_NewContent = (UWidget*)K2Node_Event_NewContent;
    params.CallFunc_AddExtraContent_ReturnValue = (bool)CallFunc_AddExtraContent_ReturnValue;
    params.K2Node_Event_isHighlighted = (bool)K2Node_Event_isHighlighted;
    params.K2Node_Event_NewState = (EIconButtonState)K2Node_Event_NewState;
    params.CallFunc_HandleEnabled_ReturnValue = (bool)CallFunc_HandleEnabled_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_HandleDisabled_ReturnValue = (bool)CallFunc_HandleDisabled_ReturnValue;
    params.CallFunc_HandleMissing_ReturnValue = (bool)CallFunc_HandleMissing_ReturnValue;
    params.CallFunc_HandleNonExistent_ReturnValue = (bool)CallFunc_HandleNonExistent_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.K2Node_Event_Size = (FVector2D)K2Node_Event_Size;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::OnGearButtonClickEvent__DelegateSignature(UUI_BP_GearButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.OnGearButtonClickEvent__DelegateSignature"));
    struct Params_OnGearButtonClickEvent__DelegateSignature {
        UUI_BP_GearButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_OnGearButtonClickEvent__DelegateSignature params{};
    params.IconButton = (UUI_BP_GearButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::OnGearButtonUnhoveredEvent__DelegateSignature(UUI_BP_GearButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.OnGearButtonUnhoveredEvent__DelegateSignature"));
    struct Params_OnGearButtonUnhoveredEvent__DelegateSignature {
        UUI_BP_GearButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_OnGearButtonUnhoveredEvent__DelegateSignature params{};
    params.IconButton = (UUI_BP_GearButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_GearButton_C::OnGearButtonHoveredEvent__DelegateSignature(UUI_BP_GearButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_GearButton.UI_BP_GearButton_C.OnGearButtonHoveredEvent__DelegateSignature"));
    struct Params_OnGearButtonHoveredEvent__DelegateSignature {
        UUI_BP_GearButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_OnGearButtonHoveredEvent__DelegateSignature params{};
    params.IconButton = (UUI_BP_GearButton_C*)IconButton;
    ProcessEvent(func, &params);
}
