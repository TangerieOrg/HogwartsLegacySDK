#include "AActor.hpp"
#include "AVFX_BP_Detected_ScreenFX_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPostProcessComponent.hpp"
#include "USceneComponent.hpp"
#include "UTimelineComponent.hpp"
#include "UVFX_BP_Detected_HUD_FlashColor_C.hpp"
void AVFX_BP_Detected_ScreenFX_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Detected/VFX_BP_Detected_ScreenFX.VFX_BP_Detected_ScreenFX_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
AVFX_BP_Detected_ScreenFX_C* AVFX_BP_Detected_ScreenFX_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Screen_FX/Detected/VFX_BP_Detected_ScreenFX.VFX_BP_Detected_ScreenFX_C");
    return (AVFX_BP_Detected_ScreenFX_C*)res;
}
void AVFX_BP_Detected_ScreenFX_C::Camera_Timeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Detected/VFX_BP_Detected_ScreenFX.VFX_BP_Detected_ScreenFX_C.Camera_Timeline__FinishedFunc"));
    struct Params_Camera_Timeline__FinishedFunc {
    }; // Size: 0x0
    Params_Camera_Timeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Detected_ScreenFX_C::ExecuteUbergraph_VFX_BP_Detected_ScreenFX(int32_t EntryPoint, bool CallFunc_IsPlayerInIntrusionArea_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Detected/VFX_BP_Detected_ScreenFX.VFX_BP_Detected_ScreenFX_C.ExecuteUbergraph_VFX_BP_Detected_ScreenFX"));
    struct Params_ExecuteUbergraph_VFX_BP_Detected_ScreenFX {
        int32_t EntryPoint; // 0x0
        bool CallFunc_IsPlayerInIntrusionArea_ReturnValue; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_VFX_BP_Detected_ScreenFX params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_IsPlayerInIntrusionArea_ReturnValue = (bool)CallFunc_IsPlayerInIntrusionArea_ReturnValue;
    ProcessEvent(func, &params);
}
void AVFX_BP_Detected_ScreenFX_C::Camera_Timeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Detected/VFX_BP_Detected_ScreenFX.VFX_BP_Detected_ScreenFX_C.Camera_Timeline__UpdateFunc"));
    struct Params_Camera_Timeline__UpdateFunc {
    }; // Size: 0x0
    Params_Camera_Timeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Detected_ScreenFX_C::Flash_UI__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Detected/VFX_BP_Detected_ScreenFX.VFX_BP_Detected_ScreenFX_C.Flash_UI__DelegateSignature"));
    struct Params_Flash_UI__DelegateSignature {
    }; // Size: 0x0
    Params_Flash_UI__DelegateSignature params{};
    ProcessEvent(func, &params);
}
