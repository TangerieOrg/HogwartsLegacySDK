#include "FChallengeNotificationData.hpp"
#include "FFormatArgumentData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTexture2D.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_SpecialChallengeNotification_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_SpecialChallengeNotification_C::SetChallengeDisplayText(FName ChallengeID, int32_t TotalRequired, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FString CallFunc_Conv_NameToString_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array) {}
UUI_BP_SpecialChallengeNotification_C* UUI_BP_SpecialChallengeNotification_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/SpecialNotification/UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C");
    return (UUI_BP_SpecialChallengeNotification_C*)res;
}
void UUI_BP_SpecialChallengeNotification_C::WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialChallengeNotification_C::ClearNotification(UUIManager* CallFunc_GetUIManagerPure_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.ClearNotification"));
    struct Params_ClearNotification {
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ClearNotification params{};
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialChallengeNotification_C::RequestChallengeUnlock(FName ChallengeID, FName ChallengeCategory, int32_t TotalRequired) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.RequestChallengeUnlock"));
    struct Params_RequestChallengeUnlock {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t TotalRequired; // 0x10
    }; // Size: 0x14
    Params_RequestChallengeUnlock params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.TotalRequired = (int32_t)TotalRequired;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialChallengeNotification_C::HideChallengeUnlock(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.HideChallengeUnlock"));
    struct Params_HideChallengeUnlock {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_HideChallengeUnlock params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialChallengeNotification_C::IconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.IconLoaded"));
    struct Params_IconLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_IconLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialChallengeNotification_C::WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialChallengeNotification_C::OnShowNotification(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.OnShowNotification"));
    struct Params_OnShowNotification {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnShowNotification params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialChallengeNotification_C::OnInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.OnInitialized"));
    struct Params_OnInitialized {
    }; // Size: 0x0
    Params_OnInitialized params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialChallengeNotification_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_SpecialChallengeNotification.UI_BP_SpecialChallengeNotification_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SpecialChallengeNotification_C::ExecuteUbergraph_UI_BP_SpecialChallengeNotification(int32_t EntryPoint) {}
