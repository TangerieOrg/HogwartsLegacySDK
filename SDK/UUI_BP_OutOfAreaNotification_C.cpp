#include "ABiped_Player.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_OutOfAreaNotification_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_OutOfAreaNotification_C* UUI_BP_OutOfAreaNotification_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/UI_BP_OutOfAreaNotification.UI_BP_OutOfAreaNotification_C");
    return (UUI_BP_OutOfAreaNotification_C*)res;
}
void UUI_BP_OutOfAreaNotification_C::StopNotification(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_OutOfAreaNotification.UI_BP_OutOfAreaNotification_C.StopNotification"));
    struct Params_StopNotification {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        char pad_c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_StopNotification params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_OutOfAreaNotification_C::UpdateNotificationTime(float NewTime, int32_t CallFunc_FCeil_ReturnValue) {}
void UUI_BP_OutOfAreaNotification_C::StartNotification(FString ErrorMessage, float CountdownTime, int32_t CallFunc_FCeil_ReturnValue) {}
void UUI_BP_OutOfAreaNotification_C::ExecuteUbergraph_UI_BP_OutOfAreaNotification(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_OutOfAreaNotification.UI_BP_OutOfAreaNotification_C.ExecuteUbergraph_UI_BP_OutOfAreaNotification"));
    struct Params_ExecuteUbergraph_UI_BP_OutOfAreaNotification {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_UI_BP_OutOfAreaNotification params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_OutOfAreaNotification_C::WidgetAnimationEvt_showNotification_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_OutOfAreaNotification.UI_BP_OutOfAreaNotification_C.WidgetAnimationEvt_showNotification_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_showNotification_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_showNotification_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OutOfAreaNotification_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_OutOfAreaNotification.UI_BP_OutOfAreaNotification_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
