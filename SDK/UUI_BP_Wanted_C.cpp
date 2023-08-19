#include "APlayerController.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UUI_BP_GoldLeafDivider_C.hpp"
#include "UUI_BP_Wanted_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_Wanted_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Wanted/UI_BP_Wanted.UI_BP_Wanted_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
UUI_BP_Wanted_C* UUI_BP_Wanted_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Wanted/UI_BP_Wanted.UI_BP_Wanted_C");
    return (UUI_BP_Wanted_C*)res;
}
void UUI_BP_Wanted_C::ToggleWantedState(bool isWanted) {}
void UUI_BP_Wanted_C::StopWanted(bool CallFunc_IsAnimationPlaying_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Wanted/UI_BP_Wanted.UI_BP_Wanted_C.StopWanted"));
    struct Params_StopWanted {
        bool CallFunc_IsAnimationPlaying_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StopWanted params{};
    params.CallFunc_IsAnimationPlaying_ReturnValue = (bool)CallFunc_IsAnimationPlaying_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Wanted_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Wanted/UI_BP_Wanted.UI_BP_Wanted_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Wanted_C::StartRipple(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Wanted/UI_BP_Wanted.UI_BP_Wanted_C.StartRipple"));
    struct Params_StartRipple {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_StartRipple params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Wanted_C::ExecuteUbergraph_UI_BP_Wanted(int32_t EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_CustomEvent_rotationAngle, APlayerController* CallFunc_GetPlayerController_ReturnValue, FRotator CallFunc_GetCameraRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Wanted/UI_BP_Wanted.UI_BP_Wanted_C.ExecuteUbergraph_UI_BP_Wanted"));
    struct Params_ExecuteUbergraph_UI_BP_Wanted {
        int32_t EntryPoint; // 0x0
        FGeometry K2Node_Event_MyGeometry; // 0x4
        float K2Node_Event_InDeltaTime; // 0x3c
        float K2Node_CustomEvent_rotationAngle; // 0x40
        char pad_44[0x4];
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x48
        FRotator CallFunc_GetCameraRotation_ReturnValue; // 0x50
        float CallFunc_BreakRotator_Roll; // 0x5c
        float CallFunc_BreakRotator_Pitch; // 0x60
        float CallFunc_BreakRotator_Yaw; // 0x64
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x68
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x6c
    }; // Size: 0x70
    Params_ExecuteUbergraph_UI_BP_Wanted params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    params.K2Node_CustomEvent_rotationAngle = (float)K2Node_CustomEvent_rotationAngle;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetCameraRotation_ReturnValue = (FRotator)CallFunc_GetCameraRotation_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Wanted_C::RippleRotation(float RotationAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Wanted/UI_BP_Wanted.UI_BP_Wanted_C.RippleRotation"));
    struct Params_RippleRotation {
        float RotationAngle; // 0x0
    }; // Size: 0x4
    Params_RippleRotation params{};
    params.RotationAngle = (float)RotationAngle;
    ProcessEvent(func, &params);
}
