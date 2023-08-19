#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UUI_BP_SparkleBurst_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_SparkleBurst_C* UUI_BP_SparkleBurst_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/FX/UI_BP_SparkleBurst.UI_BP_SparkleBurst_C");
    return (UUI_BP_SparkleBurst_C*)res;
}
void UUI_BP_SparkleBurst_C::PlaySparkleBurst(float PlaybackSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/FX/UI_BP_SparkleBurst.UI_BP_SparkleBurst_C.PlaySparkleBurst"));
    struct Params_PlaySparkleBurst {
        float PlaybackSpeed; // 0x0
    }; // Size: 0x4
    Params_PlaySparkleBurst params{};
    params.PlaybackSpeed = (float)PlaybackSpeed;
    ProcessEvent(func, &params);
}
void UUI_BP_SparkleBurst_C::ExecuteUbergraph_UI_BP_SparkleBurst(int32_t EntryPoint, float K2Node_CustomEvent_PlaybackSpeed, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/FX/UI_BP_SparkleBurst.UI_BP_SparkleBurst_C.ExecuteUbergraph_UI_BP_SparkleBurst"));
    struct Params_ExecuteUbergraph_UI_BP_SparkleBurst {
        int32_t EntryPoint; // 0x0
        float K2Node_CustomEvent_PlaybackSpeed; // 0x4
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_UI_BP_SparkleBurst params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_CustomEvent_PlaybackSpeed = (float)K2Node_CustomEvent_PlaybackSpeed;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
