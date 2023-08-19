#include "AActor.hpp"
#include "AVFX_BP_ScreenFX_DamageDirection_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPostProcessComponent.hpp"
#include "USceneComponent.hpp"
#include "UTimelineComponent.hpp"
void AVFX_BP_ScreenFX_DamageDirection_C::DamageEffect(UObject* Caller, int32_t Int1, int32_t Int2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_DamageDirection.VFX_BP_ScreenFX_DamageDirection_C.DamageEffect"));
    struct Params_DamageEffect {
        UObject* Caller; // 0x0
        int32_t Int1; // 0x8
        int32_t Int2; // 0xc
    }; // Size: 0x10
    Params_DamageEffect params{};
    params.Caller = (UObject*)Caller;
    params.Int1 = (int32_t)Int1;
    params.Int2 = (int32_t)Int2;
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_DamageDirection_C::Damage_Dircetion__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_DamageDirection.VFX_BP_ScreenFX_DamageDirection_C.Damage Dircetion__UpdateFunc"));
    struct Params_Damage_Dircetion__UpdateFunc {
    }; // Size: 0x0
    Params_Damage_Dircetion__UpdateFunc params{};
    ProcessEvent(func, &params);
}
AVFX_BP_ScreenFX_DamageDirection_C* AVFX_BP_ScreenFX_DamageDirection_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_DamageDirection.VFX_BP_ScreenFX_DamageDirection_C");
    return (AVFX_BP_ScreenFX_DamageDirection_C*)res;
}
void AVFX_BP_ScreenFX_DamageDirection_C::Damage_Dircetion__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_DamageDirection.VFX_BP_ScreenFX_DamageDirection_C.Damage Dircetion__FinishedFunc"));
    struct Params_Damage_Dircetion__FinishedFunc {
    }; // Size: 0x0
    Params_Damage_Dircetion__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_DamageDirection_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_DamageDirection.VFX_BP_ScreenFX_DamageDirection_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_DamageDirection_C::ExecuteUbergraph_VFX_BP_ScreenFX_DamageDirection(int32_t EntryPoint) {}
