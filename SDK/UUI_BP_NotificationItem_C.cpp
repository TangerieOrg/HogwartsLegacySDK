#include "EGearSlotIDEnum.hpp"
#include "FDataTableRowHandle.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRarityColors.hpp"
#include "FTimerHandle.hpp"
#include "GearStatType.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UGearManager.hpp"
#include "UImage.hpp"
#include "UNotificationWidget.hpp"
#include "UObject.hpp"
#include "UPhoenixImage.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_NotificationItem_C.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_NotificationItem_C* UUI_BP_NotificationItem_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C");
    return (UUI_BP_NotificationItem_C*)res;
}
void UUI_BP_NotificationItem_C::SetItemNotificationType(bool isQuestItem) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.SetItemNotificationType"));
    struct Params_SetItemNotificationType {
        bool isQuestItem; // 0x0
    }; // Size: 0x1
    Params_SetItemNotificationType params{};
    params.isQuestItem = (bool)isQuestItem;
    ProcessEvent(func, &params);
}
bool UUI_BP_NotificationItem_C::IncrementCount(int32_t Amount, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.IncrementCount"));
    struct Params_IncrementCount {
        int32_t Amount; // 0x0
        bool ReturnValue; // 0x4
        char pad_5[0x3];
        FTimerHandle CallFunc_K2_SetTimer_ReturnValue; // 0x8
        bool CallFunc_K2_IsValidTimerHandle_ReturnValue; // 0x10
        bool CallFunc_IsAnimationPlaying_ReturnValue; // 0x11
    }; // Size: 0x12
    Params_IncrementCount params{};
    params.Amount = (int32_t)Amount;
    params.CallFunc_K2_SetTimer_ReturnValue = (FTimerHandle)CallFunc_K2_SetTimer_ReturnValue;
    params.CallFunc_K2_IsValidTimerHandle_ReturnValue = (bool)CallFunc_K2_IsValidTimerHandle_ReturnValue;
    params.CallFunc_IsAnimationPlaying_ReturnValue = (bool)CallFunc_IsAnimationPlaying_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_NotificationItem_C::SetPlayerHouseBroom(UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.SetPlayerHouseBroom"));
    struct Params_SetPlayerHouseBroom {
        UUIManager* CallFunc_Get_ReturnValue; // 0x0
        FString CallFunc_GetPlayerHouse_ReturnValue; // 0x8
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x18
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x28
    }; // Size: 0x29
    Params_SetPlayerHouseBroom params{};
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlayerHouse_ReturnValue = (FString)CallFunc_GetPlayerHouse_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationItem_C::Set_Rarity_State(FName RarityTier, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FRarityColors CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FLinearColor CallFunc_GetColorByRowHandleBP_ReturnValue, FLinearColor CallFunc_GetColorByRowHandleBP_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.Set Rarity State"));
    struct Params_Set_Rarity_State {
        FName RarityTier; // 0x0
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle; // 0x8
        FRarityColors CallFunc_GetDataTableRowFromName_OutRow; // 0x18
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x60
        char pad_61[0x3];
        FLinearColor CallFunc_GetColorByRowHandleBP_ReturnValue; // 0x64
        FLinearColor CallFunc_GetColorByRowHandleBP_ReturnValue_1; // 0x74
    }; // Size: 0x84
    Params_Set_Rarity_State params{};
    params.RarityTier = (FName)RarityTier;
    params.K2Node_MakeStruct_DataTableRowHandle = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FRarityColors)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    params.CallFunc_GetColorByRowHandleBP_ReturnValue = (FLinearColor)CallFunc_GetColorByRowHandleBP_ReturnValue;
    params.CallFunc_GetColorByRowHandleBP_ReturnValue_1 = (FLinearColor)CallFunc_GetColorByRowHandleBP_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationItem_C::Compare_Gear_Stats(FName GearID, int32_t TempNewGearDeffense, int32_t TempNewGearOffense, FDataTableRowHandle TempCompareColor, EGearSlotIDEnum tempGearSlot, int32_t TempEquippedStat, int32_t TempNewStat, FGearItemID TempGearItemID, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FGearItemID CallFunc_GetEquippedGearItemID_ReturnValue, int32_t CallFunc_GetGearItemStats_OffenseStat, int32_t CallFunc_GetGearItemStats_DefenseStat, FGearItemID K2Node_MakeStruct_GearItemID, int32_t CallFunc_GetGearItemStats_OffenseStat_1, int32_t CallFunc_GetGearItemStats_DefenseStat_1, UGearManager* CallFunc_Get_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.Compare Gear Stats"));
    struct Params_Compare_Gear_Stats {
        FName GearID; // 0x0
        int32_t TempNewGearDeffense; // 0x8
        int32_t TempNewGearOffense; // 0xc
        FDataTableRowHandle TempCompareColor; // 0x10
        EGearSlotIDEnum tempGearSlot; // 0x20
        char pad_21[0x3];
        int32_t TempEquippedStat; // 0x24
        int32_t TempNewStat; // 0x28
        FGearItemID TempGearItemID; // 0x2c
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle; // 0x40
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1; // 0x50
        bool CallFunc_Less_IntInt_ReturnValue; // 0x60
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x61
        char pad_62[0x2];
        FGearItemID CallFunc_GetEquippedGearItemID_ReturnValue; // 0x64
        int32_t CallFunc_GetGearItemStats_OffenseStat; // 0x78
        int32_t CallFunc_GetGearItemStats_DefenseStat; // 0x7c
        FGearItemID K2Node_MakeStruct_GearItemID; // 0x80
        int32_t CallFunc_GetGearItemStats_OffenseStat_1; // 0x94
        int32_t CallFunc_GetGearItemStats_DefenseStat_1; // 0x98
        char pad_9c[0x4];
        UGearManager* CallFunc_Get_ReturnValue; // 0xa0
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0xa8
        bool CallFunc_GetGearItem_ReturnValue; // 0x100
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x101
        GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue; // 0x102
        bool K2Node_SwitchEnum_CmpSuccess; // 0x103
    }; // Size: 0x104
    Params_Compare_Gear_Stats params{};
    params.GearID = (FName)GearID;
    params.TempNewGearDeffense = (int32_t)TempNewGearDeffense;
    params.TempNewGearOffense = (int32_t)TempNewGearOffense;
    params.TempCompareColor = (FDataTableRowHandle)TempCompareColor;
    params.tempGearSlot = (EGearSlotIDEnum)tempGearSlot;
    params.TempEquippedStat = (int32_t)TempEquippedStat;
    params.TempNewStat = (int32_t)TempNewStat;
    params.TempGearItemID = (FGearItemID)TempGearItemID;
    params.K2Node_MakeStruct_DataTableRowHandle = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle;
    params.K2Node_MakeStruct_DataTableRowHandle_1 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_GetEquippedGearItemID_ReturnValue = (FGearItemID)CallFunc_GetEquippedGearItemID_ReturnValue;
    params.CallFunc_GetGearItemStats_OffenseStat = (int32_t)CallFunc_GetGearItemStats_OffenseStat;
    params.CallFunc_GetGearItemStats_DefenseStat = (int32_t)CallFunc_GetGearItemStats_DefenseStat;
    params.K2Node_MakeStruct_GearItemID = (FGearItemID)K2Node_MakeStruct_GearItemID;
    params.CallFunc_GetGearItemStats_OffenseStat_1 = (int32_t)CallFunc_GetGearItemStats_OffenseStat_1;
    params.CallFunc_GetGearItemStats_DefenseStat_1 = (int32_t)CallFunc_GetGearItemStats_DefenseStat_1;
    params.CallFunc_Get_ReturnValue = (UGearManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.CallFunc_DefineGearStatTypeFromSlot_ReturnValue = (GearStatType)CallFunc_DefineGearStatTypeFromSlot_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationItem_C::AddCount(int32_t Amount) {}
void UUI_BP_NotificationItem_C::WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationItem_C::LifetimeComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.LifetimeComplete"));
    struct Params_LifetimeComplete {
    }; // Size: 0x0
    Params_LifetimeComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationItem_C::WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2"));
    struct Params_WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationItem_C::ExecuteUbergraph_UI_BP_NotificationItem(int32_t EntryPoint, bool Temp_bool_Variable) {}
void UUI_BP_NotificationItem_C::ActivateNotification() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.ActivateNotification"));
    struct Params_ActivateNotification {
    }; // Size: 0x0
    Params_ActivateNotification params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationItem_C::SetIsInventoryFullNotification(bool IsInventoryFull) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.SetIsInventoryFullNotification"));
    struct Params_SetIsInventoryFullNotification {
        bool IsInventoryFull; // 0x0
    }; // Size: 0x1
    Params_SetIsInventoryFullNotification params{};
    params.IsInventoryFull = (bool)IsInventoryFull;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationItem_C::ToggleCountVisibility(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.ToggleCountVisibility"));
    struct Params_ToggleCountVisibility {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_ToggleCountVisibility params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationItem_C::NotificationComplete__DelegateSignature(UUI_BP_NotificationItem_C* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.NotificationComplete__DelegateSignature"));
    struct Params_NotificationComplete__DelegateSignature {
        UUI_BP_NotificationItem_C* Item; // 0x0
    }; // Size: 0x8
    Params_NotificationComplete__DelegateSignature params{};
    params.Item = (UUI_BP_NotificationItem_C*)Item;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationItem_C::NotificationAborted(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationItem.UI_BP_NotificationItem_C.NotificationAborted"));
    struct Params_NotificationAborted {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_NotificationAborted params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
