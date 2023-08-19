#include "AActor.hpp"
#include "AVFX_BP_Finisher3_Finisher_Success_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UDecalComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UNiagaraComponent.hpp"
#include "USceneComponent.hpp"
#include "UTimelineComponent.hpp"
AVFX_BP_Finisher3_Finisher_Success_C* AVFX_BP_Finisher3_Finisher_Success_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Particles/Magic/Finisher3_Lightning/VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C");
    return (AVFX_BP_Finisher3_Finisher_Success_C*)res;
}
void AVFX_BP_Finisher3_Finisher_Success_C::Timeline_2__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Finisher3_Lightning/VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.Timeline_2__FinishedFunc"));
    struct Params_Timeline_2__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_2__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Finisher3_Finisher_Success_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Finisher3_Lightning/VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Finisher3_Finisher_Success_C::UserConstructionScript0(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Finisher3_Lightning/VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_UserConstructionScript params{};
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    ProcessEvent(func, &params);
}
void AVFX_BP_Finisher3_Finisher_Success_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Finisher3_Lightning/VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Finisher3_Finisher_Success_C::Timeline_1__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Finisher3_Lightning/VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.Timeline_1__FinishedFunc"));
    struct Params_Timeline_1__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_1__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Finisher3_Finisher_Success_C::Timeline_1__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Finisher3_Lightning/VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.Timeline_1__UpdateFunc"));
    struct Params_Timeline_1__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_1__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Finisher3_Finisher_Success_C::Timeline_2__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Finisher3_Lightning/VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.Timeline_2__UpdateFunc"));
    struct Params_Timeline_2__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_2__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Finisher3_Finisher_Success_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Finisher3_Lightning/VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Finisher3_Finisher_Success_C::ExecuteUbergraph_VFX_BP_Finisher3_Finisher_Success(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Particles/Magic/Finisher3_Lightning/VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.ExecuteUbergraph_VFX_BP_Finisher3_Finisher_Success"));
    struct Params_ExecuteUbergraph_VFX_BP_Finisher3_Finisher_Success {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_VFX_BP_Finisher3_Finisher_Success params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
