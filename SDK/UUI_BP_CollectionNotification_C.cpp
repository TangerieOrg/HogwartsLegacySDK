#include "AHUD.hpp"
#include "APhoenixHUD.hpp"
#include "APlayerController.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UInvalidationBox.hpp"
#include "UNotificationWidget.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_CollectionNotification_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_CollectionNotification_C* UUI_BP_CollectionNotification_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Notifications/UI_BP_CollectionNotification.UI_BP_CollectionNotification_C");
    return (UUI_BP_CollectionNotification_C*)res;
}
void UUI_BP_CollectionNotification_C::ActivateNotification() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.ActivateNotification"));
    struct Params_ActivateNotification {
    }; // Size: 0x0
    Params_ActivateNotification params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CollectionNotification_C::WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CollectionNotification_C::SetNotificationData(FName CollectionID, FName Category, FString CollectionState, FString tempChallengeIcon, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_CheckItemID_SetItemID, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_SetInventoryIconOverride_OutDisplayName, FString CallFunc_SetInventoryIconOverride_OutIconName, bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable, bool CallFunc_SetInventoryIconOverride_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_2, FString CallFunc_Conv_NameToString_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.SetNotificationData"));
    struct Params_SetNotificationData {
        FName CollectionID; // 0x0
        FName Category; // 0x8
        FString CollectionState; // 0x10
        FString tempChallengeIcon; // 0x20
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x30
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x31
        char pad_32[0x6];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x38
        FString CallFunc_CheckItemID_SetItemID; // 0x48
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x58
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x68
        FString CallFunc_SetInventoryIconOverride_OutDisplayName; // 0x78
        FString CallFunc_SetInventoryIconOverride_OutIconName; // 0x88
        bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable; // 0x98
        bool CallFunc_SetInventoryIconOverride_ReturnValue; // 0x99
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1; // 0x9a
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_2; // 0x9b
        char pad_9c[0x4];
        FString CallFunc_Conv_NameToString_ReturnValue_2; // 0xa0
    }; // Size: 0xb0
    Params_SetNotificationData params{};
    params.CollectionID = (FName)CollectionID;
    params.Category = (FName)Category;
    params.CollectionState = (FString)CollectionState;
    params.tempChallengeIcon = (FString)tempChallengeIcon;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_CheckItemID_SetItemID = (FString)CallFunc_CheckItemID_SetItemID;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_SetInventoryIconOverride_OutDisplayName = (FString)CallFunc_SetInventoryIconOverride_OutDisplayName;
    params.CallFunc_SetInventoryIconOverride_OutIconName = (FString)CallFunc_SetInventoryIconOverride_OutIconName;
    params.CallFunc_SetInventoryIconOverride_OutIsNameTranslatable = (bool)CallFunc_SetInventoryIconOverride_OutIsNameTranslatable;
    params.CallFunc_SetInventoryIconOverride_ReturnValue = (bool)CallFunc_SetInventoryIconOverride_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_1 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_1;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_2 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_2;
    params.CallFunc_Conv_NameToString_ReturnValue_2 = (FString)CallFunc_Conv_NameToString_ReturnValue_2;
    ProcessEvent(func, &params);
}
void UUI_BP_CollectionNotification_C::CheckItemID(FString NewID, FString& SetItemID, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.CheckItemID"));
    struct Params_CheckItemID {
        FString NewID; // 0x0
        FString SetItemID; // 0x10
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x20
        char pad_21[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0x28
        FString CallFunc_GetPlayerHouse_ReturnValue; // 0x30
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x40
    }; // Size: 0x50
    Params_CheckItemID params{};
    params.NewID = (FString)NewID;
    params.SetItemID = (FString)SetItemID;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlayerHouse_ReturnValue = (FString)CallFunc_GetPlayerHouse_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
    SetItemID = params.SetItemID;
}
void UUI_BP_CollectionNotification_C::ClearKnowledgeFlag(APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.ClearKnowledgeFlag"));
    struct Params_ClearKnowledgeFlag {
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x0
        AHUD* CallFunc_GetHUD_ReturnValue; // 0x8
        APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_ClearKnowledgeFlag params{};
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetHUD_ReturnValue = (AHUD*)CallFunc_GetHUD_ReturnValue;
    params.K2Node_DynamicCast_AsPhoenix_HUD = (APhoenixHUD*)K2Node_DynamicCast_AsPhoenix_HUD;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_CollectionNotification_C::WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CollectionNotification_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CollectionNotification_C::WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2"));
    struct Params_WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CollectionNotification_C::ExecuteUbergraph_UI_BP_CollectionNotification(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_CollectionNotification.UI_BP_CollectionNotification_C.ExecuteUbergraph_UI_BP_CollectionNotification"));
    struct Params_ExecuteUbergraph_UI_BP_CollectionNotification {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        FGeometry K2Node_Event_MyGeometry; // 0x10
        float K2Node_Event_InDeltaTime; // 0x48
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x4c
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x50
        char pad_51[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x58
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x60
    }; // Size: 0x68
    Params_ExecuteUbergraph_UI_BP_CollectionNotification params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    ProcessEvent(func, &params);
}
