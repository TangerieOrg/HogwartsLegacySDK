#include "FGeometry.hpp"
#include "FMailEntry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UOwlMailNotification.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_LegendItem_C.hpp"
#include "UUI_BP_OwlMailNotification_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_OwlMailNotification_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::ShowOwlMail(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.ShowOwlMail"));
    struct Params_ShowOwlMail {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowOwlMail params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::ReadMail() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.ReadMail"));
    struct Params_ReadMail {
    }; // Size: 0x0
    Params_ReadMail params{};
    ProcessEvent(func, &params);
}
UUI_BP_OwlMailNotification_C* UUI_BP_OwlMailNotification_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C");
    return (UUI_BP_OwlMailNotification_C*)res;
}
void UUI_BP_OwlMailNotification_C::ShowMailNotification(FMailEntry MailEntry, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.ShowMailNotification"));
    struct Params_ShowMailNotification {
        FMailEntry MailEntry; // 0x0
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x58
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x68
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x78
        char pad_7c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x80
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x88
    }; // Size: 0x89
    Params_ShowMailNotification params{};
    params.MailEntry = (FMailEntry)MailEntry;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::HideMailNotification() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.HideMailNotification"));
    struct Params_HideMailNotification {
    }; // Size: 0x0
    Params_HideMailNotification params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::OnInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.OnInitialized"));
    struct Params_OnInitialized {
    }; // Size: 0x0
    Params_OnInitialized params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::QueueNotification(FMailEntry NewEntry, int32_t DisplayPriority, UUIManager* CallFunc_Get_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.QueueNotification"));
    struct Params_QueueNotification {
        FMailEntry NewEntry; // 0x0
        int32_t DisplayPriority; // 0x58
        char pad_5c[0x4];
        UUIManager* CallFunc_Get_ReturnValue; // 0x60
        int32_t CallFunc_Array_Add_ReturnValue; // 0x68
    }; // Size: 0x6c
    Params_QueueNotification params{};
    params.NewEntry = (FMailEntry)NewEntry;
    params.DisplayPriority = (int32_t)DisplayPriority;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::DialogueLineComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.DialogueLineComplete"));
    struct Params_DialogueLineComplete {
    }; // Size: 0x0
    Params_DialogueLineComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::OnEnvelopeClosed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.OnEnvelopeClosed"));
    struct Params_OnEnvelopeClosed {
    }; // Size: 0x0
    Params_OnEnvelopeClosed params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::CheckToShowNameTransition() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.CheckToShowNameTransition"));
    struct Params_CheckToShowNameTransition {
    }; // Size: 0x0
    Params_CheckToShowNameTransition params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_OwlMailNotification.UI_BP_OwlMailNotification_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OwlMailNotification_C::ExecuteUbergraph_UI_BP_OwlMailNotification(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller, int32_t CallFunc_Array_Length_ReturnValue, FMailEntry CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_PlayMailDialogLine_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {}
