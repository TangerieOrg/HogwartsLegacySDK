#include "FPickupNotificationData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_SpecialNotification_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_SpecialNotification_C* UUI_BP_SpecialNotification_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C");
    return (UUI_BP_SpecialNotification_C*)res;
}
void UUI_BP_SpecialNotification_C::I_AddChallengeCompleteNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedLevel, int32_t MaxLevels) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C.I_AddChallengeCompleteNotification"));
    struct Params_I_AddChallengeCompleteNotification {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t CompletedLevel; // 0x10
        int32_t MaxLevels; // 0x14
    }; // Size: 0x18
    Params_I_AddChallengeCompleteNotification params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.CompletedLevel = (int32_t)CompletedLevel;
    params.MaxLevels = (int32_t)MaxLevels;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialNotification_C::ShowNotification(FString ItemName, FString IconName, int32_t Count, FString Header, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C.ShowNotification"));
    struct Params_ShowNotification {
        FString ItemName; // 0x0
        FString IconName; // 0x10
        int32_t Count; // 0x20
        char pad_24[0x4];
        FString Header; // 0x28
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x38
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x40
        char pad_41[0x7];
        FTimerHandle CallFunc_K2_SetTimer_ReturnValue; // 0x48
    }; // Size: 0x50
    Params_ShowNotification params{};
    params.ItemName = (FString)ItemName;
    params.IconName = (FString)IconName;
    params.Count = (int32_t)Count;
    params.Header = (FString)Header;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.CallFunc_K2_SetTimer_ReturnValue = (FTimerHandle)CallFunc_K2_SetTimer_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialNotification_C::OnDisplaySpecialNotification(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C.OnDisplaySpecialNotification"));
    struct Params_OnDisplaySpecialNotification {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnDisplaySpecialNotification params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialNotification_C::HideComplete(UUIManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C.HideComplete"));
    struct Params_HideComplete {
        UUIManager* CallFunc_Get_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_HideComplete params{};
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialNotification_C::I_AddCollectionObtainedNotification(FName CollectionID, FName CollectionCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C.I_AddCollectionObtainedNotification"));
    struct Params_I_AddCollectionObtainedNotification {
        FName CollectionID; // 0x0
        FName CollectionCategory; // 0x8
    }; // Size: 0x10
    Params_I_AddCollectionObtainedNotification params{};
    params.CollectionID = (FName)CollectionID;
    params.CollectionCategory = (FName)CollectionCategory;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialNotification_C::Hide() {}
void UUI_BP_SpecialNotification_C::I_AddCollectionKnownNotification(FName CollectionID, FName CollectionCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C.I_AddCollectionKnownNotification"));
    struct Params_I_AddCollectionKnownNotification {
        FName CollectionID; // 0x0
        FName CollectionCategory; // 0x8
    }; // Size: 0x10
    Params_I_AddCollectionKnownNotification params{};
    params.CollectionID = (FName)CollectionID;
    params.CollectionCategory = (FName)CollectionCategory;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialNotification_C::I_ItemCollected(FString Name, FString IconName, int32_t Count, FString Header, bool SpecialCollection, FName Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C.I_ItemCollected"));
    struct Params_I_ItemCollected {
        FString Name; // 0x0
        FString IconName; // 0x10
        int32_t Count; // 0x20
        char pad_24[0x4];
        FString Header; // 0x28
        bool SpecialCollection; // 0x38
        char pad_39[0x3];
        FName Variation; // 0x3c
    }; // Size: 0x44
    Params_I_ItemCollected params{};
    params.Name = (FString)Name;
    params.IconName = (FString)IconName;
    params.Count = (int32_t)Count;
    params.Header = (FString)Header;
    params.SpecialCollection = (bool)SpecialCollection;
    params.Variation = (FName)Variation;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialNotification_C::I_AddGenericNotification(FString HeaderText, FString SubheaderText, FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C.I_AddGenericNotification"));
    struct Params_I_AddGenericNotification {
        FString HeaderText; // 0x0
        FString SubheaderText; // 0x10
        FString IconName; // 0x20
    }; // Size: 0x30
    Params_I_AddGenericNotification params{};
    params.HeaderText = (FString)HeaderText;
    params.SubheaderText = (FString)SubheaderText;
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialNotification_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialNotification_C::ExecuteUbergraph_UI_BP_SpecialNotification(int32_t EntryPoint, FName K2Node_Event_ChallengeID, FName K2Node_Event_ChallengeCategory, int32_t K2Node_Event_CompletedLevel, int32_t K2Node_Event_MaxLevels, FString K2Node_Event_Name, FString K2Node_Event_IconName_1, int32_t K2Node_Event_Count, FString K2Node_Event_Header, bool K2Node_Event_SpecialCollection, FName K2Node_Event_Variation, FPickupNotificationData K2Node_MakeStruct_PickupNotificationData, FString K2Node_Event_HeaderText, FString K2Node_Event_SubheaderText, FString K2Node_Event_IconName, UUIManager* CallFunc_Get_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, FName K2Node_Event_CollectionID, FName K2Node_Event_CollectionCategory, FName K2Node_Event_CollectionID_1, FName K2Node_Event_CollectionCategory_1) {}
void UUI_BP_SpecialNotification_C::EventDisplaySpecialNotification(FString ItemId) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C.EventDisplaySpecialNotification"));
    struct Params_EventDisplaySpecialNotification {
        FString ItemId; // 0x0
    }; // Size: 0x10
    Params_EventDisplaySpecialNotification params{};
    params.ItemId = (FString)ItemId;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialNotification_C::EventHideSpecialNotification() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C.EventHideSpecialNotification"));
    struct Params_EventHideSpecialNotification {
    }; // Size: 0x0
    Params_EventHideSpecialNotification params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialNotification_C::HideAnimationFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialNotification.UI_BP_SpecialNotification_C.HideAnimationFinished"));
    struct Params_HideAnimationFinished {
    }; // Size: 0x0
    Params_HideAnimationFinished params{};
    ProcessEvent(func, &params);
}
