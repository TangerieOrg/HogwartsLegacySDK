#include "APlayerController.hpp"
#include "EInputEvent.hpp"
#include "EInventorySortType.hpp"
#include "EInventoryTabCategory.hpp"
#include "EUIDisplayMode.hpp"
#include "EUMGInputAction.hpp"
#include "FAnchors.hpp"
#include "FGeometry.hpp"
#include "FInventoryHolder.hpp"
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVector2D.hpp"
#include "UAsyncLoadWrapper.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UCircularThrobber.hpp"
#include "UClass.hpp"
#include "UCreatureManager.hpp"
#include "UFieldGuideMenu.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UImage.hpp"
#include "UInventoryState.hpp"
#include "ULegendItem.hpp"
#include "UMenuCursorWidget.hpp"
#include "UObject.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTabPageWidget.hpp"
#include "UTutorialSystem.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_AsyncLoadWrapper_C.hpp"
#include "UUI_BP_FG_InventoryDetails_C.hpp"
#include "UUI_BP_FG_InventoryScreen_C.hpp"
#include "UUI_BP_FieldGuide_C.hpp"
#include "UUI_BP_HowMany_C.hpp"
#include "UUI_BP_InventoryIconButton_C.hpp"
#include "UUI_BP_ItemScrollBox_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_FG_InventoryScreen_C::I_RemoveInspectable(bool& Removed, bool CallFunc_RemoveInspectable_Removed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_RemoveInspectable"));
    struct Params_I_RemoveInspectable {
        bool Removed; // 0x0
        bool CallFunc_RemoveInspectable_Removed; // 0x1
    }; // Size: 0x2
    Params_I_RemoveInspectable params{};
    params.Removed = (bool)Removed;
    params.CallFunc_RemoveInspectable_Removed = (bool)CallFunc_RemoveInspectable_Removed;
    ProcessEvent(func, &params);
    Removed = params.Removed;
}
UUI_BP_FG_InventoryScreen_C* UUI_BP_FG_InventoryScreen_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C");
    return (UUI_BP_FG_InventoryScreen_C*)res;
}
void UUI_BP_FG_InventoryScreen_C::FindNextValidSortForCategory(FString Category, int32_t Delta, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Conv_ByteToInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidSortForCategory_Result) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.FindNextValidSortForCategory"));
    struct Params_FindNextValidSortForCategory {
        FString Category; // 0x0
        int32_t Delta; // 0x10
        bool Temp_bool_Variable; // 0x14
        bool CallFunc_Not_PreBool_ReturnValue; // 0x15
        char pad_16[0x2];
        int32_t Temp_int_Variable; // 0x18
        int32_t CallFunc_Conv_ByteToInt_ReturnValue; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x20
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x24
        bool CallFunc_BooleanAND_ReturnValue; // 0x25
        bool CallFunc_IsValidSortForCategory_Result; // 0x26
    }; // Size: 0x27
    Params_FindNextValidSortForCategory params{};
    params.Category = (FString)Category;
    params.Delta = (int32_t)Delta;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Conv_ByteToInt_ReturnValue = (int32_t)CallFunc_Conv_ByteToInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_IsValidSortForCategory_Result = (bool)CallFunc_IsValidSortForCategory_Result;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::I_ClickHandler(bool& Handled, bool CallFunc_HandleClicked_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_ClickHandler"));
    struct Params_I_ClickHandler {
        bool Handled; // 0x0
        bool CallFunc_HandleClicked_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_I_ClickHandler params{};
    params.Handled = (bool)Handled;
    params.CallFunc_HandleClicked_ReturnValue = (bool)CallFunc_HandleClicked_ReturnValue;
    ProcessEvent(func, &params);
    Handled = params.Handled;
}
void UUI_BP_FG_InventoryScreen_C::I_GetInventoryTabCategory(EInventoryTabCategory& TabCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_GetInventoryTabCategory"));
    struct Params_I_GetInventoryTabCategory {
        EInventoryTabCategory TabCategory; // 0x0
    }; // Size: 0x1
    Params_I_GetInventoryTabCategory params{};
    params.TabCategory = (EInventoryTabCategory)TabCategory;
    ProcessEvent(func, &params);
    TabCategory = params.TabCategory;
}
void UUI_BP_FG_InventoryScreen_C::SaveCurrentSortPreference(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SaveCurrentSortPreference"));
    struct Params_SaveCurrentSortPreference {
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x0
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x8
    }; // Size: 0x18
    Params_SaveCurrentSortPreference params{};
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::I_RefreshInventory() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_RefreshInventory"));
    struct Params_I_RefreshInventory {
    }; // Size: 0x0
    Params_I_RefreshInventory params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::GetInteractTargetInfo(FName& TargetId, FName& TargetHolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetInteractTargetInfo"));
    struct Params_GetInteractTargetInfo {
        FName TargetId; // 0x0
        FName TargetHolderID; // 0x8
    }; // Size: 0x10
    Params_GetInteractTargetInfo params{};
    params.TargetId = (FName)TargetId;
    params.TargetHolderID = (FName)TargetHolderID;
    ProcessEvent(func, &params);
    TargetId = params.TargetId;
    TargetHolderID = params.TargetHolderID;
}
void UUI_BP_FG_InventoryScreen_C::NavBar_SelectionChanged(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.NavBar_SelectionChanged"));
    struct Params_NavBar_SelectionChanged {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_NavBar_SelectionChanged params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::Setup_Categories(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {}
void UUI_BP_FG_InventoryScreen_C::I_GetInventory(UUserWidget*& Inventory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_GetInventory"));
    struct Params_I_GetInventory {
        UUserWidget* Inventory; // 0x0
    }; // Size: 0x8
    Params_I_GetInventory params{};
    params.Inventory = (UUserWidget*)Inventory;
    ProcessEvent(func, &params);
    Inventory = params.Inventory;
}
void UUI_BP_FG_InventoryScreen_C::SetCreatureInventoryTooltipInformation(UUserWidget* InButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetCreatureInventoryTooltipInformation"));
    struct Params_SetCreatureInventoryTooltipInformation {
        UUserWidget* InButton; // 0x0
    }; // Size: 0x8
    Params_SetCreatureInventoryTooltipInformation params{};
    params.InButton = (UUserWidget*)InButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::IconButton_Unhovered(UObject* Button, TArray<FLegendItemData>& CallFunc_RefreshLegend_TooltipLegendArray, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.IconButton_Unhovered"));
    struct Params_IconButton_Unhovered {
        UObject* Button; // 0x0
        TArray<FLegendItemData> CallFunc_RefreshLegend_TooltipLegendArray; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_IconButton_Unhovered params{};
    params.Button = (UObject*)Button;
    params.CallFunc_RefreshLegend_TooltipLegendArray = (TArray<FLegendItemData>)CallFunc_RefreshLegend_TooltipLegendArray;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_RefreshLegend_TooltipLegendArray = params.CallFunc_RefreshLegend_TooltipLegendArray;
}
TArray<FString> UUI_BP_FG_InventoryScreen_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool CallFunc_IsValid_ReturnValue, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess) {}
void UUI_BP_FG_InventoryScreen_C::GetPlayerInventory(TArray<FInventoryResult>& PlayerInventory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetPlayerInventory"));
    struct Params_GetPlayerInventory {
        TArray<FInventoryResult> PlayerInventory; // 0x0
    }; // Size: 0x10
    Params_GetPlayerInventory params{};
    params.PlayerInventory = (TArray<FInventoryResult>)PlayerInventory;
    ProcessEvent(func, &params);
    PlayerInventory = params.PlayerInventory;
}
void UUI_BP_FG_InventoryScreen_C::GetScrollBox(UUserWidget*& InventoryScrollBox) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetScrollBox"));
    struct Params_GetScrollBox {
        UUserWidget* InventoryScrollBox; // 0x0
    }; // Size: 0x8
    Params_GetScrollBox params{};
    params.InventoryScrollBox = (UUserWidget*)InventoryScrollBox;
    ProcessEvent(func, &params);
    InventoryScrollBox = params.InventoryScrollBox;
}
bool UUI_BP_FG_InventoryScreen_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, UUIManager* CallFunc_Get_ReturnValue, bool CallFunc_GetInMenuTransition_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, UUI_BP_FieldGuide_C* K2Node_DynamicCast_AsUI_BP_Field_Guide, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4) {}
void UUI_BP_FG_InventoryScreen_C::IconButton_Clicked(UObject* Button, bool CallFunc_ClickHandler_Handled, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.IconButton_Clicked"));
    struct Params_IconButton_Clicked {
        UObject* Button; // 0x0
        bool CallFunc_ClickHandler_Handled; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x9
        bool CallFunc_Not_PreBool_ReturnValue; // 0xa
    }; // Size: 0xb
    Params_IconButton_Clicked params{};
    params.Button = (UObject*)Button;
    params.CallFunc_ClickHandler_Handled = (bool)CallFunc_ClickHandler_Handled;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::GetTutorialHighlight(TArray<FName>& ItemNames, TArray<FName> ReturnValue, TArray<FName>& K2Node_MakeArray_Array, FName CallFunc_GetStatName_ReturnValue, int32_t CallFunc_ReadStat_ReturnValue, FString CallFunc_GetMissionStepBP_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetTutorialHighlight"));
    struct Params_GetTutorialHighlight {
        TArray<FName> ItemNames; // 0x0
        TArray<FName> ReturnValue; // 0x10
        TArray<FName> K2Node_MakeArray_Array; // 0x20
        FName CallFunc_GetStatName_ReturnValue; // 0x30
        int32_t CallFunc_ReadStat_ReturnValue; // 0x38
        char pad_3c[0x4];
        FString CallFunc_GetMissionStepBP_ReturnValue; // 0x40
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x50
        bool CallFunc_EqualEqual_StriStri_ReturnValue; // 0x51
    }; // Size: 0x52
    Params_GetTutorialHighlight params{};
    params.ItemNames = (TArray<FName>)ItemNames;
    params.ReturnValue = (TArray<FName>)ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<FName>)K2Node_MakeArray_Array;
    params.CallFunc_GetStatName_ReturnValue = (FName)CallFunc_GetStatName_ReturnValue;
    params.CallFunc_ReadStat_ReturnValue = (int32_t)CallFunc_ReadStat_ReturnValue;
    params.CallFunc_GetMissionStepBP_ReturnValue = (FString)CallFunc_GetMissionStepBP_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_StriStri_ReturnValue = (bool)CallFunc_EqualEqual_StriStri_ReturnValue;
    ProcessEvent(func, &params);
    ItemNames = params.ItemNames;
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UUI_BP_FG_InventoryScreen_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::UMGInputHandler(EUMGInputAction InputAction, EInputEvent InputEvent, bool& Handled, bool CallFunc_HandleUMGInputAction_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.UMGInputHandler"));
    struct Params_UMGInputHandler {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool Handled; // 0x2
        bool CallFunc_HandleUMGInputAction_ReturnValue; // 0x3
    }; // Size: 0x4
    Params_UMGInputHandler params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.Handled = (bool)Handled;
    params.CallFunc_HandleUMGInputAction_ReturnValue = (bool)CallFunc_HandleUMGInputAction_ReturnValue;
    ProcessEvent(func, &params);
    Handled = params.Handled;
}
void UUI_BP_FG_InventoryScreen_C::InventoryData() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InventoryData"));
    struct Params_InventoryData {
    }; // Size: 0x0
    Params_InventoryData params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::OnLoaded_627C7C8846B3845375AEA1B3524C9FA0(UClass* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnLoaded_627C7C8846B3845375AEA1B3524C9FA0"));
    struct Params_OnLoaded_627C7C8846B3845375AEA1B3524C9FA0 {
        UClass* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_627C7C8846B3845375AEA1B3524C9FA0 params{};
    params.Loaded = (UClass*)Loaded;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::ClickHandler(bool& Handled, bool CallFunc_HandleClicked_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ClickHandler"));
    struct Params_ClickHandler {
        bool Handled; // 0x0
        bool CallFunc_HandleClicked_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_ClickHandler params{};
    params.Handled = (bool)Handled;
    params.CallFunc_HandleClicked_ReturnValue = (bool)CallFunc_HandleClicked_ReturnValue;
    ProcessEvent(func, &params);
    Handled = params.Handled;
}
void UUI_BP_FG_InventoryScreen_C::GetItemBox(UUserWidget*& ItemBox) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetItemBox"));
    struct Params_GetItemBox {
        UUserWidget* ItemBox; // 0x0
    }; // Size: 0x8
    Params_GetItemBox params{};
    params.ItemBox = (UUserWidget*)ItemBox;
    ProcessEvent(func, &params);
    ItemBox = params.ItemBox;
}
void UUI_BP_FG_InventoryScreen_C::Setup_Tooltip(UUserWidget* Button, TArray<FLegendItemData>& TooltipLegend, bool CapturedCreature, FInventoryResult L_InventoryResult, UUI_BP_InventoryIconButton_C* L_InventoryButton, TArray<FLegendItemData> ButtonLegendData, bool IsAlbino, bool IsMale, bool TranslateTitle, bool bIsGivenName, FString Title, FString QualityString, FString ItemName, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<FLegendItemData>& CallFunc_GetTooltipLegendData_LegendData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Setup Tooltip"));
    struct Params_Setup_Tooltip {
        UUserWidget* Button; // 0x0
        TArray<FLegendItemData> TooltipLegend; // 0x8
        bool CapturedCreature; // 0x18
        char pad_19[0x7];
        FInventoryResult L_InventoryResult; // 0x20
        UUI_BP_InventoryIconButton_C* L_InventoryButton; // 0xa8
        TArray<FLegendItemData> ButtonLegendData; // 0xb0
        bool IsAlbino; // 0xc0
        bool IsMale; // 0xc1
        bool TranslateTitle; // 0xc2
        bool bIsGivenName; // 0xc3
        char pad_c4[0x4];
        FString Title; // 0xc8
        FString QualityString; // 0xd8
        FString ItemName; // 0xe8
        UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button; // 0xf8
        bool K2Node_DynamicCast_bSuccess; // 0x100
        bool CallFunc_IsValid_ReturnValue; // 0x101
        bool CallFunc_IsValid_ReturnValue_1; // 0x102
        char pad_103[0x5];
        TArray<FLegendItemData> CallFunc_GetTooltipLegendData_LegendData; // 0x108
    }; // Size: 0x118
    Params_Setup_Tooltip params{};
    params.Button = (UUserWidget*)Button;
    params.TooltipLegend = (TArray<FLegendItemData>)TooltipLegend;
    params.CapturedCreature = (bool)CapturedCreature;
    params.L_InventoryResult = (FInventoryResult)L_InventoryResult;
    params.L_InventoryButton = (UUI_BP_InventoryIconButton_C*)L_InventoryButton;
    params.ButtonLegendData = (TArray<FLegendItemData>)ButtonLegendData;
    params.IsAlbino = (bool)IsAlbino;
    params.IsMale = (bool)IsMale;
    params.TranslateTitle = (bool)TranslateTitle;
    params.bIsGivenName = (bool)bIsGivenName;
    params.Title = (FString)Title;
    params.QualityString = (FString)QualityString;
    params.ItemName = (FString)ItemName;
    params.K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button = (UUI_BP_InventoryIconButton_C*)K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetTooltipLegendData_LegendData = (TArray<FLegendItemData>)CallFunc_GetTooltipLegendData_LegendData;
    ProcessEvent(func, &params);
    TooltipLegend = params.TooltipLegend;
    CallFunc_GetTooltipLegendData_LegendData = params.CallFunc_GetTooltipLegendData_LegendData;
}
void UUI_BP_FG_InventoryScreen_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BP_FG_InventoryScreen_C::CenterInspectableScreenVertically(float CurrentHeight, float IdealHeight, float CurrentRatio, float IdealRatio, FVector2D CallFunc_MakeVector2D_ReturnValue, float K2Node_MathExpression_ReturnValue, float K2Node_MathExpression_ReturnValue_1, float CallFunc_Abs_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FVector2D CallFunc_GetViewportSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.CenterInspectableScreenVertically"));
    struct Params_CenterInspectableScreenVertically {
        float CurrentHeight; // 0x0
        float IdealHeight; // 0x4
        float CurrentRatio; // 0x8
        float IdealRatio; // 0xc
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x10
        float K2Node_MathExpression_ReturnValue; // 0x18
        float K2Node_MathExpression_ReturnValue_1; // 0x1c
        float CallFunc_Abs_ReturnValue; // 0x20
        FVector2D CallFunc_MakeVector2D_ReturnValue_1; // 0x24
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x2c
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x34
        char pad_35[0x3];
        float CallFunc_BreakVector2D_X; // 0x38
        float CallFunc_BreakVector2D_Y; // 0x3c
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x40
    }; // Size: 0x44
    Params_CenterInspectableScreenVertically params{};
    params.CurrentHeight = (float)CurrentHeight;
    params.IdealHeight = (float)IdealHeight;
    params.CurrentRatio = (float)CurrentRatio;
    params.IdealRatio = (float)IdealRatio;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.K2Node_MathExpression_ReturnValue_1 = (float)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue_1 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_1;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::I_InitButtonsToEmpty() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_InitButtonsToEmpty"));
    struct Params_I_InitButtonsToEmpty {
    }; // Size: 0x0
    Params_I_InitButtonsToEmpty params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::GetButtonNewIndicatorName(UIconButtonWidget* Button, FString& NewIndicatorString) {}
void UUI_BP_FG_InventoryScreen_C::SetButtonTransferDrop(bool Transfer_Drop) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetButtonTransferDrop"));
    struct Params_SetButtonTransferDrop {
        bool Transfer_Drop; // 0x0
    }; // Size: 0x1
    Params_SetButtonTransferDrop params{};
    params.Transfer_Drop = (bool)Transfer_Drop;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::TerminateLingeringTutorials(UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_ForceCompleteTutorial_ReturnValue, bool CallFunc_ForceCompleteTutorial_ReturnValue_1, bool CallFunc_ForceCompleteTutorial_ReturnValue_2, bool CallFunc_ForceCompleteTutorial_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.TerminateLingeringTutorials"));
    struct Params_TerminateLingeringTutorials {
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x0
        bool CallFunc_ForceCompleteTutorial_ReturnValue; // 0x8
        bool CallFunc_ForceCompleteTutorial_ReturnValue_1; // 0x9
        bool CallFunc_ForceCompleteTutorial_ReturnValue_2; // 0xa
        bool CallFunc_ForceCompleteTutorial_ReturnValue_3; // 0xb
    }; // Size: 0xc
    Params_TerminateLingeringTutorials params{};
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_ForceCompleteTutorial_ReturnValue = (bool)CallFunc_ForceCompleteTutorial_ReturnValue;
    params.CallFunc_ForceCompleteTutorial_ReturnValue_1 = (bool)CallFunc_ForceCompleteTutorial_ReturnValue_1;
    params.CallFunc_ForceCompleteTutorial_ReturnValue_2 = (bool)CallFunc_ForceCompleteTutorial_ReturnValue_2;
    params.CallFunc_ForceCompleteTutorial_ReturnValue_3 = (bool)CallFunc_ForceCompleteTutorial_ReturnValue_3;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::LeaveFromPage0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.LeaveFromPage"));
    struct Params_LeaveFromPage {
    }; // Size: 0x0
    Params_LeaveFromPage params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::OnLoaded_97F954DF4B2BFC8E82EF19BE04A37EDD(UClass* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnLoaded_97F954DF4B2BFC8E82EF19BE04A37EDD"));
    struct Params_OnLoaded_97F954DF4B2BFC8E82EF19BE04A37EDD {
        UClass* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_97F954DF4B2BFC8E82EF19BE04A37EDD params{};
    params.Loaded = (UClass*)Loaded;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::RefreshLegend(TArray<FLegendItemData>& TooltipLegendArray, TArray<FLegendItemData> TempTooltipLegend, TArray<FLegendItemData> TempLegendItems, UCreatureManager* CallFunc_Get_ReturnValue, bool CallFunc_IsValid_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData_1, int32_t CallFunc_Array_Add_ReturnValue_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, int32_t CallFunc_Array_Add_ReturnValue_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, FLegendItemData K2Node_MakeStruct_LegendItemData_4, int32_t CallFunc_Array_Add_ReturnValue_3, int32_t CallFunc_Array_Add_ReturnValue_4, FLegendItemData K2Node_MakeStruct_LegendItemData_5, int32_t CallFunc_Array_Add_ReturnValue_5, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess) {}
void UUI_BP_FG_InventoryScreen_C::ComputeIconSizeForPage(bool IsQuestItemCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ComputeIconSizeForPage"));
    struct Params_ComputeIconSizeForPage {
        bool IsQuestItemCategory; // 0x0
    }; // Size: 0x1
    Params_ComputeIconSizeForPage params{};
    params.IsQuestItemCategory = (bool)IsQuestItemCategory;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::ReadSavedSortPreference(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FString CallFunc_GetPlayerInventorySortPreference_ReturnValue, bool K2Node_SwitchString_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ReadSavedSortPreference"));
    struct Params_ReadSavedSortPreference {
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x0
        FString CallFunc_GetPlayerInventorySortPreference_ReturnValue; // 0x8
        bool K2Node_SwitchString_CmpSuccess; // 0x18
    }; // Size: 0x19
    Params_ReadSavedSortPreference params{};
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetPlayerInventorySortPreference_ReturnValue = (FString)CallFunc_GetPlayerInventorySortPreference_ReturnValue;
    params.K2Node_SwitchString_CmpSuccess = (bool)K2Node_SwitchString_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::IsValidSortForCategory(EInventorySortType SortType, FString Category, bool& Result, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.IsValidSortForCategory"));
    struct Params_IsValidSortForCategory {
        EInventorySortType SortType; // 0x0
        char pad_1[0x7];
        FString Category; // 0x8
        bool Result; // 0x18
        bool K2Node_SwitchString_CmpSuccess; // 0x19
        bool K2Node_SwitchEnum_CmpSuccess; // 0x1a
        bool K2Node_SwitchEnum_CmpSuccess_1; // 0x1b
        bool K2Node_SwitchEnum_CmpSuccess_2; // 0x1c
        bool K2Node_SwitchEnum_CmpSuccess_3; // 0x1d
        bool K2Node_SwitchEnum_CmpSuccess_4; // 0x1e
        bool K2Node_SwitchEnum_CmpSuccess_5; // 0x1f
    }; // Size: 0x20
    Params_IsValidSortForCategory params{};
    params.SortType = (EInventorySortType)SortType;
    params.Category = (FString)Category;
    params.Result = (bool)Result;
    params.K2Node_SwitchString_CmpSuccess = (bool)K2Node_SwitchString_CmpSuccess;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.K2Node_SwitchEnum_CmpSuccess_1 = (bool)K2Node_SwitchEnum_CmpSuccess_1;
    params.K2Node_SwitchEnum_CmpSuccess_2 = (bool)K2Node_SwitchEnum_CmpSuccess_2;
    params.K2Node_SwitchEnum_CmpSuccess_3 = (bool)K2Node_SwitchEnum_CmpSuccess_3;
    params.K2Node_SwitchEnum_CmpSuccess_4 = (bool)K2Node_SwitchEnum_CmpSuccess_4;
    params.K2Node_SwitchEnum_CmpSuccess_5 = (bool)K2Node_SwitchEnum_CmpSuccess_5;
    ProcessEvent(func, &params);
    Result = params.Result;
}
void UUI_BP_FG_InventoryScreen_C::CycleSortType(int32_t Delta, int32_t K2Node_MathExpression_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8_t CallFunc_Conv_IntToByte_ReturnValue, uint8_t CallFunc_GetValidValue_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.CycleSortType"));
    struct Params_CycleSortType {
        int32_t Delta; // 0x0
        int32_t K2Node_MathExpression_ReturnValue; // 0x4
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x8
        uint8_t CallFunc_Conv_IntToByte_ReturnValue; // 0x18
        uint8_t CallFunc_GetValidValue_ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_CycleSortType params{};
    params.Delta = (int32_t)Delta;
    params.K2Node_MathExpression_ReturnValue = (int32_t)K2Node_MathExpression_ReturnValue;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
    params.CallFunc_Conv_IntToByte_ReturnValue = (uint8_t)CallFunc_Conv_IntToByte_ReturnValue;
    params.CallFunc_GetValidValue_ReturnValue = (uint8_t)CallFunc_GetValidValue_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::KillActiveTutorial() {}
void UUI_BP_FG_InventoryScreen_C::PlayOneTimeTutorial(FString Category, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_AddNewStat_ReturnValue, bool CallFunc_StartTutorial_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_StatExists_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.PlayOneTimeTutorial"));
    struct Params_PlayOneTimeTutorial {
        FString Category; // 0x0
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x10
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x20
        FName CallFunc_Map_Find_Value; // 0x30
        bool CallFunc_Map_Find_ReturnValue; // 0x38
        char pad_39[0x3];
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x3c
        char pad_44[0x4];
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x48
        bool CallFunc_AddNewStat_ReturnValue; // 0x50
        bool CallFunc_StartTutorial_ReturnValue; // 0x51
        bool CallFunc_BooleanAND_ReturnValue; // 0x52
        bool CallFunc_StatExists_ReturnValue; // 0x53
        bool CallFunc_Not_PreBool_ReturnValue; // 0x54
    }; // Size: 0x55
    Params_PlayOneTimeTutorial params{};
    params.Category = (FString)Category;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Map_Find_Value = (FName)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_AddNewStat_ReturnValue = (bool)CallFunc_AddNewStat_ReturnValue;
    params.CallFunc_StartTutorial_ReturnValue = (bool)CallFunc_StartTutorial_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_StatExists_ReturnValue = (bool)CallFunc_StatExists_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::Get_Inventory_Structures_Data(bool CallFunc_IsValid_ReturnValue, TArray<FInventoryHolder>& CallFunc_GetInventoryItemData_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Get Inventory Structures Data"));
    struct Params_Get_Inventory_Structures_Data {
        bool CallFunc_IsValid_ReturnValue; // 0x0
        char pad_1[0x7];
        TArray<FInventoryHolder> CallFunc_GetInventoryItemData_ReturnValue; // 0x8
    }; // Size: 0x18
    Params_Get_Inventory_Structures_Data params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetInventoryItemData_ReturnValue = (TArray<FInventoryHolder>)CallFunc_GetInventoryItemData_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetInventoryItemData_ReturnValue = params.CallFunc_GetInventoryItemData_ReturnValue;
}
void UUI_BP_FG_InventoryScreen_C::ShowAmountWidget(int32_t Max, FName ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ShowAmountWidget"));
    struct Params_ShowAmountWidget {
        int32_t Max; // 0x0
        FName ItemName; // 0x4
    }; // Size: 0xc
    Params_ShowAmountWidget params{};
    params.Max = (int32_t)Max;
    params.ItemName = (FName)ItemName;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::I_ShowAmountWidget(int32_t Max, FName ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_ShowAmountWidget"));
    struct Params_I_ShowAmountWidget {
        int32_t Max; // 0x0
        FName ItemName; // 0x4
    }; // Size: 0xc
    Params_I_ShowAmountWidget params{};
    params.Max = (int32_t)Max;
    params.ItemName = (FName)ItemName;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::ShowSort_Label(FString Sort_Type) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ShowSort_Label"));
    struct Params_ShowSort_Label {
        FString Sort_Type; // 0x0
    }; // Size: 0x10
    Params_ShowSort_Label params{};
    params.Sort_Type = (FString)Sort_Type;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::SetupItemScrollBox(UClass* ButtonClass, EInventoryTabCategory CurCategory, int32_t CurrentInventorySize, int32_t CallFunc_GetHolderMaxSlotsBP_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Multiply_IntInt_ReturnValue, bool Temp_bool_Variable, int32_t CallFunc_Max_ReturnValue, int32_t K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1, EInventoryTabCategory CallFunc_GetInventoryTabCategory_InventoryTabCategory, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetupItemScrollBox"));
    struct Params_SetupItemScrollBox {
        UClass* ButtonClass; // 0x0
        EInventoryTabCategory CurCategory; // 0x8
        char pad_9[0x3];
        int32_t CurrentInventorySize; // 0xc
        int32_t CallFunc_GetHolderMaxSlotsBP_ReturnValue; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x14
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x1c
        int32_t CallFunc_Multiply_IntInt_ReturnValue; // 0x20
        bool Temp_bool_Variable; // 0x24
        char pad_25[0x3];
        int32_t CallFunc_Max_ReturnValue; // 0x28
        int32_t K2Node_Select_Default; // 0x2c
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x30
        EInventoryTabCategory CallFunc_GetInventoryTabCategory_InventoryTabCategory; // 0x31
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x32
        bool CallFunc_BooleanOR_ReturnValue; // 0x33
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x34
    }; // Size: 0x3c
    Params_SetupItemScrollBox params{};
    params.ButtonClass = (UClass*)ButtonClass;
    params.CurCategory = (EInventoryTabCategory)CurCategory;
    params.CurrentInventorySize = (int32_t)CurrentInventorySize;
    params.CallFunc_GetHolderMaxSlotsBP_ReturnValue = (int32_t)CallFunc_GetHolderMaxSlotsBP_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Multiply_IntInt_ReturnValue = (int32_t)CallFunc_Multiply_IntInt_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Max_ReturnValue = (int32_t)CallFunc_Max_ReturnValue;
    params.K2Node_Select_Default = (int32_t)K2Node_Select_Default;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.CallFunc_GetInventoryTabCategory_InventoryTabCategory = (EInventoryTabCategory)CallFunc_GetInventoryTabCategory_InventoryTabCategory;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::SetInventoryState(EUIDisplayMode DisplayMode) {}
void UUI_BP_FG_InventoryScreen_C::ResizeInventory(EInventoryTabCategory CurCategory, UUserWidget* Button, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, EInventoryTabCategory CallFunc_GetInventoryTabCategory_InventoryTabCategory, int32_t CallFunc_Array_Length_ReturnValue, UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ResizeInventory"));
    struct Params_ResizeInventory {
        EInventoryTabCategory CurCategory; // 0x0
        char pad_1[0x7];
        UUserWidget* Button; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0x10
        int32_t Temp_int_Loop_Counter_Variable; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        EInventoryTabCategory CallFunc_GetInventoryTabCategory_InventoryTabCategory; // 0x1c
        char pad_1d[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x20
        char pad_24[0x4];
        UUserWidget* CallFunc_Array_Get_Item; // 0x28
        bool CallFunc_Less_IntInt_ReturnValue; // 0x30
        char pad_31[0x7];
        UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button; // 0x38
        bool K2Node_DynamicCast_bSuccess; // 0x40
    }; // Size: 0x41
    Params_ResizeInventory params{};
    params.CurCategory = (EInventoryTabCategory)CurCategory;
    params.Button = (UUserWidget*)Button;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetInventoryTabCategory_InventoryTabCategory = (EInventoryTabCategory)CallFunc_GetInventoryTabCategory_InventoryTabCategory;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUserWidget*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button = (UUI_BP_InventoryIconButton_C*)K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::GetInventoryTabCategory(EInventoryTabCategory& InventoryTabCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GetInventoryTabCategory"));
    struct Params_GetInventoryTabCategory {
        EInventoryTabCategory InventoryTabCategory; // 0x0
    }; // Size: 0x1
    Params_GetInventoryTabCategory params{};
    params.InventoryTabCategory = (EInventoryTabCategory)InventoryTabCategory;
    ProcessEvent(func, &params);
    InventoryTabCategory = params.InventoryTabCategory;
}
void UUI_BP_FG_InventoryScreen_C::MarkSelectedItems(TArray<FString>& Items, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess) {}
void UUI_BP_FG_InventoryScreen_C::InventoryAmountWidgetEvent(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InventoryAmountWidgetEvent"));
    struct Params_InventoryAmountWidgetEvent {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_InventoryAmountWidgetEvent params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::SetCurrentHighlightedItem(FString NewItem, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetCurrentHighlightedItem"));
    struct Params_SetCurrentHighlightedItem {
        FString NewItem; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x10
        int32_t Temp_int_Loop_Counter_Variable; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue; // 0x1c
        UUserWidget* CallFunc_Array_Get_Item; // 0x20
        bool CallFunc_Less_IntInt_ReturnValue; // 0x28
        char pad_29[0x7];
        UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x39
    }; // Size: 0x3a
    Params_SetCurrentHighlightedItem params{};
    params.NewItem = (FString)NewItem;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUserWidget*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button = (UUI_BP_InventoryIconButton_C*)K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::AddInspectable(FString RichPaperID, FMargin K2Node_MakeStruct_Margin, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FAnchors K2Node_MakeStruct_Anchors, TArray<FLegendItemData>& CallFunc_RefreshLegend_TooltipLegendArray, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUserWidget* CallFunc_Create_ReturnValue) {}
void UUI_BP_FG_InventoryScreen_C::RemoveInspectable(bool& Removed, TArray<FLegendItemData>& CallFunc_RefreshLegend_TooltipLegendArray, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_RemoveChild_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.RemoveInspectable"));
    struct Params_RemoveInspectable {
        bool Removed; // 0x0
        char pad_1[0x7];
        TArray<FLegendItemData> CallFunc_RefreshLegend_TooltipLegendArray; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x18
        bool CallFunc_RemoveChild_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_RemoveInspectable params{};
    params.Removed = (bool)Removed;
    params.CallFunc_RefreshLegend_TooltipLegendArray = (TArray<FLegendItemData>)CallFunc_RefreshLegend_TooltipLegendArray;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_RemoveChild_ReturnValue = (bool)CallFunc_RemoveChild_ReturnValue;
    ProcessEvent(func, &params);
    Removed = params.Removed;
    CallFunc_RefreshLegend_TooltipLegendArray = params.CallFunc_RefreshLegend_TooltipLegendArray;
}
void UUI_BP_FG_InventoryScreen_C::OnUnhovered(UUIManager* CallFunc_Get_ReturnValue, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue) {}
void UUI_BP_FG_InventoryScreen_C::Refresh_Inventory(bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue) {}
void UUI_BP_FG_InventoryScreen_C::InitButtonsToEmpty(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FInventoryResult K2Node_MakeStruct_InventoryResult, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, UIconButtonWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue) {}
void UUI_BP_FG_InventoryScreen_C::UpdateAllButtons(TArray<FInventoryResult>& Inventory, int32_t CurrentInventorySize, bool isQuestItems, int32_t Offset, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FInventoryResult CallFunc_Array_Get_Item, UIconButtonWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, UIconButtonWidget* CallFunc_Array_Get_Item_2, FString CallFunc_GetButtonNewIndicatorName_NewIndicatorString) {}
void UUI_BP_FG_InventoryScreen_C::InitNavbar() {}
void UUI_BP_FG_InventoryScreen_C::IconButton_Hover(FString InventoryItemName, FName CallFunc_Conv_StringToName_ReturnValue, int32_t Temp_int_Array_Index_Variable, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, TArray<FLegendItemData>& CallFunc_RefreshLegend_TooltipLegendArray, FName CallFunc_Conv_StringToName_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue_2, UIconButtonWidget* CallFunc_Array_Get_Item, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess) {}
void UUI_BP_FG_InventoryScreen_C::InitInventory(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUserWidget* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InitInventory"));
    struct Params_InitInventory {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        UUserWidget* CallFunc_Array_Get_Item; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x18
        char pad_1c[0x4];
        UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        bool CallFunc_Less_IntInt_ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_InitInventory params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUserWidget*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button = (UUI_BP_InventoryIconButton_C*)K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::OnLoaded_8DA06735455F217B13C1A8853936776A(UClass* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnLoaded_8DA06735455F217B13C1A8853936776A"));
    struct Params_OnLoaded_8DA06735455F217B13C1A8853936776A {
        UClass* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_8DA06735455F217B13C1A8853936776A params{};
    params.Loaded = (UClass*)Loaded;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::SetPickPocketing(bool PickPocketing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetPickPocketing"));
    struct Params_SetPickPocketing {
        bool PickPocketing; // 0x0
    }; // Size: 0x1
    Params_SetPickPocketing params{};
    params.PickPocketing = (bool)PickPocketing;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::SetStride(int32_t Stride) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetStride"));
    struct Params_SetStride {
        int32_t Stride; // 0x0
    }; // Size: 0x4
    Params_SetStride params{};
    params.Stride = (int32_t)Stride;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::ShowNavBar(bool ShouldShow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ShowNavBar"));
    struct Params_ShowNavBar {
        bool ShouldShow; // 0x0
    }; // Size: 0x1
    Params_ShowNavBar params{};
    params.ShouldShow = (bool)ShouldShow;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::SetCurrentIconButton(UUserWidget* CurrentButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetCurrentIconButton"));
    struct Params_SetCurrentIconButton {
        UUserWidget* CurrentButton; // 0x0
    }; // Size: 0x8
    Params_SetCurrentIconButton params{};
    params.CurrentButton = (UUserWidget*)CurrentButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::SetToInventory(bool ToInventory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetToInventory"));
    struct Params_SetToInventory {
        bool ToInventory; // 0x0
    }; // Size: 0x1
    Params_SetToInventory params{};
    params.ToInventory = (bool)ToInventory;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::I_Sort() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_Sort"));
    struct Params_I_Sort {
    }; // Size: 0x0
    Params_I_Sort params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::I_SetActiveButton(UUserWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_SetActiveButton"));
    struct Params_I_SetActiveButton {
        UUserWidget* Button; // 0x0
    }; // Size: 0x8
    Params_I_SetActiveButton params{};
    params.Button = (UUserWidget*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::I_AddInspectable(FString RichPaperID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_AddInspectable"));
    struct Params_I_AddInspectable {
        FString RichPaperID; // 0x0
    }; // Size: 0x10
    Params_I_AddInspectable params{};
    params.RichPaperID = (FString)RichPaperID;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::NavBar_UnhoveredCategory(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.NavBar_UnhoveredCategory"));
    struct Params_NavBar_UnhoveredCategory {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_NavBar_UnhoveredCategory params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::NavBar_HoveredCategory(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.NavBar_HoveredCategory"));
    struct Params_NavBar_HoveredCategory {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_NavBar_HoveredCategory params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::GoToPage0(TArray<FString>& DestinationStack) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.GoToPage"));
    struct Params_GoToPage {
        TArray<FString> DestinationStack; // 0x0
    }; // Size: 0x10
    Params_GoToPage params{};
    params.DestinationStack = (TArray<FString>)DestinationStack;
    ProcessEvent(func, &params);
    DestinationStack = params.DestinationStack;
}
void UUI_BP_FG_InventoryScreen_C::OnNavBarSelectionChanged(int32_t NewCategoryIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnNavBarSelectionChanged"));
    struct Params_OnNavBarSelectionChanged {
        int32_t NewCategoryIndex; // 0x0
    }; // Size: 0x4
    Params_OnNavBarSelectionChanged params{};
    params.NewCategoryIndex = (int32_t)NewCategoryIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::ClearCategory(FName CategoryName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.ClearCategory"));
    struct Params_ClearCategory {
        FName CategoryName; // 0x0
    }; // Size: 0x8
    Params_ClearCategory params{};
    params.CategoryName = (FName)CategoryName;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::I_SetInventoryCategory(EInventoryTabCategory Category) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_SetInventoryCategory"));
    struct Params_I_SetInventoryCategory {
        EInventoryTabCategory Category; // 0x0
    }; // Size: 0x1
    Params_I_SetInventoryCategory params{};
    params.Category = (EInventoryTabCategory)Category;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::InventoryIconButtonClicked(UObject* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InventoryIconButtonClicked"));
    struct Params_InventoryIconButtonClicked {
        UObject* Button; // 0x0
    }; // Size: 0x8
    Params_InventoryIconButtonClicked params{};
    params.Button = (UObject*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::InventoryIconButtonUnhovered(UObject* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InventoryIconButtonUnhovered"));
    struct Params_InventoryIconButtonUnhovered {
        UObject* Button; // 0x0
    }; // Size: 0x8
    Params_InventoryIconButtonUnhovered params{};
    params.Button = (UObject*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::InventoryIconButtonHovered(UObject* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InventoryIconButtonHovered"));
    struct Params_InventoryIconButtonHovered {
        UObject* Button; // 0x0
    }; // Size: 0x8
    Params_InventoryIconButtonHovered params{};
    params.Button = (UObject*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::Load_Class() {}
void UUI_BP_FG_InventoryScreen_C::OnNavLoadComplete(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnNavLoadComplete"));
    struct Params_OnNavLoadComplete {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_OnNavLoadComplete params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::SetInteractTargetInfo(FName TargetId, FName TargetHolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetInteractTargetInfo"));
    struct Params_SetInteractTargetInfo {
        FName TargetId; // 0x0
        FName TargetHolderID; // 0x8
    }; // Size: 0x10
    Params_SetInteractTargetInfo params{};
    params.TargetId = (FName)TargetId;
    params.TargetHolderID = (FName)TargetHolderID;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::OnClickedEventDispatcher__DelegateSignature(UObject* Category) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnClickedEventDispatcher__DelegateSignature"));
    struct Params_OnClickedEventDispatcher__DelegateSignature {
        UObject* Category; // 0x0
    }; // Size: 0x8
    Params_OnClickedEventDispatcher__DelegateSignature params{};
    params.Category = (UObject*)Category;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::SetMode(EUIDisplayMode UIDisplayMode) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetMode"));
    struct Params_SetMode {
        EUIDisplayMode UIDisplayMode; // 0x0
    }; // Size: 0x1
    Params_SetMode params{};
    params.UIDisplayMode = (EUIDisplayMode)UIDisplayMode;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::ExecuteUbergraph_UI_BP_FG_InventoryScreen(int32_t EntryPoint, UClass* K2Node_CustomEvent_Loaded, UClass* Temp_class_Variable, UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess) {}
void UUI_BP_FG_InventoryScreen_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::I_SetParent(UUserWidget* NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.I_SetParent"));
    struct Params_I_SetParent {
        UUserWidget* NewParam; // 0x0
    }; // Size: 0x8
    Params_I_SetParent params{};
    params.NewParam = (UUserWidget*)NewParam;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::OnLegendItemHoldEnd0(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnLegendItemHoldEnd"));
    struct Params_OnLegendItemHoldEnd {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_OnLegendItemHoldEnd params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::BndEvt__UI_BP_FG_InventoryScreen_SortLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.BndEvt__UI_BP_FG_InventoryScreen_SortLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_InventoryScreen_SortLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FG_InventoryScreen_SortLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::BndEvt__UI_BP_FG_InventoryScreen_SortRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.BndEvt__UI_BP_FG_InventoryScreen_SortRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_InventoryScreen_SortRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FG_InventoryScreen_SortRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::BndEvt__UI_BP_FG_InventoryScreen_detailsPanel_K2Node_ComponentBoundEvent_2_LegendHoldItemReleased__DelegateSignature(ULegendItem* InventoryLegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.BndEvt__UI_BP_FG_InventoryScreen_detailsPanel_K2Node_ComponentBoundEvent_2_LegendHoldItemReleased__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FG_InventoryScreen_detailsPanel_K2Node_ComponentBoundEvent_2_LegendHoldItemReleased__DelegateSignature {
        ULegendItem* InventoryLegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_BndEvt__UI_BP_FG_InventoryScreen_detailsPanel_K2Node_ComponentBoundEvent_2_LegendHoldItemReleased__DelegateSignature params{};
    params.InventoryLegendItem = (ULegendItem*)InventoryLegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_InventoryScreen_C::AbortInteraction__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_InventoryScreen.UI_BP_FG_InventoryScreen_C.AbortInteraction__DelegateSignature"));
    struct Params_AbortInteraction__DelegateSignature {
    }; // Size: 0x0
    Params_AbortInteraction__DelegateSignature params{};
    ProcessEvent(func, &params);
}
