#include "AActor.hpp"
#include "APlayerCameraManager.hpp"
#include "AVFX_BP_Spider_Luminous_Blind_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UPointLightComponent.hpp"
#include "UPostProcessComponent.hpp"
#include "USceneComponent.hpp"
#include "UTimelineComponent.hpp"
void AVFX_BP_Spider_Luminous_Blind_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_ScreenVFX/VFX_BP_Spider_Luminous_Blind.VFX_BP_Spider_Luminous_Blind_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
AVFX_BP_Spider_Luminous_Blind_C* AVFX_BP_Spider_Luminous_Blind_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Enemies/Spider/Spider_ScreenVFX/VFX_BP_Spider_Luminous_Blind.VFX_BP_Spider_Luminous_Blind_C");
    return (AVFX_BP_Spider_Luminous_Blind_C*)res;
}
void AVFX_BP_Spider_Luminous_Blind_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_ScreenVFX/VFX_BP_Spider_Luminous_Blind.VFX_BP_Spider_Luminous_Blind_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Spider_Luminous_Blind_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_ScreenVFX/VFX_BP_Spider_Luminous_Blind.VFX_BP_Spider_Luminous_Blind_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Spider_Luminous_Blind_C::ExecuteUbergraph_VFX_BP_Spider_Luminous_Blind(int32_t EntryPoint, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_ScreenVFX/VFX_BP_Spider_Luminous_Blind.VFX_BP_Spider_Luminous_Blind_C.ExecuteUbergraph_VFX_BP_Spider_Luminous_Blind"));
    struct Params_ExecuteUbergraph_VFX_BP_Spider_Luminous_Blind {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue; // 0x8
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x10
    }; // Size: 0x14
    Params_ExecuteUbergraph_VFX_BP_Spider_Luminous_Blind params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetPlayerCameraManager_ReturnValue = (APlayerCameraManager*)CallFunc_GetPlayerCameraManager_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
