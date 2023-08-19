#include "FChallengeNotificationData.hpp"
#include "FFormatArgumentData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTexture2D.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_ChallengeComplete_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_ChallengeComplete_C::SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::IntroAnimationEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.IntroAnimationEnd"));
    struct Params_IntroAnimationEnd {
    }; // Size: 0x0
    Params_IntroAnimationEnd params{};
    ProcessEvent(func, &params);
}
UUI_BP_ChallengeComplete_C* UUI_BP_ChallengeComplete_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C");
    return (UUI_BP_ChallengeComplete_C*)res;
}
void UUI_BP_ChallengeComplete_C::SetChallengeDisplayText(FName ChallengeID, int32_t TotalRequired, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FString CallFunc_Conv_NameToString_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array) {}
void UUI_BP_ChallengeComplete_C::SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_2"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_2 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_ChallengeComplete_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::IntroAnimationStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.IntroAnimationStart"));
    struct Params_IntroAnimationStart {
    }; // Size: 0x0
    Params_IntroAnimationStart params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::ClearNotification(UUIManager* CallFunc_GetUIManagerPure_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.ClearNotification"));
    struct Params_ClearNotification {
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ClearNotification params{};
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::PlayHideAnimation(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.PlayHideAnimation"));
    struct Params_PlayHideAnimation {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_PlayHideAnimation params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::OutroAnimationEnded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.OutroAnimationEnded"));
    struct Params_OutroAnimationEnded {
    }; // Size: 0x0
    Params_OutroAnimationEnded params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::RequestChallengeComplete(FName ChallengeID, FName ChallengeCategory, int32_t CompletedTier, int32_t TotalTiers, int32_t TotalInstancesForLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.RequestChallengeComplete"));
    struct Params_RequestChallengeComplete {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t CompletedTier; // 0x10
        int32_t TotalTiers; // 0x14
        int32_t TotalInstancesForLevel; // 0x18
    }; // Size: 0x1c
    Params_RequestChallengeComplete params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.CompletedTier = (int32_t)CompletedTier;
    params.TotalTiers = (int32_t)TotalTiers;
    params.TotalInstancesForLevel = (int32_t)TotalInstancesForLevel;
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::IconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.IconLoaded"));
    struct Params_IconLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_IconLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_ShowChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_HideChallengeUnlock_Anim_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::OnShowNotification(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.OnShowNotification"));
    struct Params_OnShowNotification {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnShowNotification params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::OnInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/SpecialNotification/UI_BP_ChallengeComplete.UI_BP_ChallengeComplete_C.OnInitialized"));
    struct Params_OnInitialized {
    }; // Size: 0x0
    Params_OnInitialized params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeComplete_C::ExecuteUbergraph_UI_BP_ChallengeComplete(int32_t EntryPoint, FName K2Node_CustomEvent_ChallengeID, FName K2Node_CustomEvent_ChallengeCategory, int32_t K2Node_CustomEvent_CompletedTier, int32_t K2Node_CustomEvent_TotalTiers, int32_t K2Node_CustomEvent_TotalInstancesForLevel, FChallengeNotificationData K2Node_MakeStruct_ChallengeNotificationData, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UTexture2D* K2Node_CustomEvent_LoadedTexture, UObject* K2Node_CustomEvent_CallbackParam, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UObject* K2Node_CustomEvent_Caller, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue) {}
