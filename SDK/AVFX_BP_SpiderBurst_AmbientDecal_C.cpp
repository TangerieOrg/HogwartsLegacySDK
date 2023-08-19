#include "AActor.hpp"
#include "AVFX_BP_SpiderBurst_AmbientDecal_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UDecalComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMeshComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "USceneComponent.hpp"
#include "UTimelineComponent.hpp"
AVFX_BP_SpiderBurst_AmbientDecal_C* AVFX_BP_SpiderBurst_AmbientDecal_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Enemies/Spider/Spider_Fire_Explode/VFX_BP_SpiderBurst_AmbientDecal.VFX_BP_SpiderBurst_AmbientDecal_C");
    return (AVFX_BP_SpiderBurst_AmbientDecal_C*)res;
}
void AVFX_BP_SpiderBurst_AmbientDecal_C::Timeline_SplatAlpha__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_Fire_Explode/VFX_BP_SpiderBurst_AmbientDecal.VFX_BP_SpiderBurst_AmbientDecal_C.Timeline_SplatAlpha__FinishedFunc"));
    struct Params_Timeline_SplatAlpha__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_SplatAlpha__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_SpiderBurst_AmbientDecal_C::UserConstructionScript0(UDecalComponent* NewLocalVar_0, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_Fire_Explode/VFX_BP_SpiderBurst_AmbientDecal.VFX_BP_SpiderBurst_AmbientDecal_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        UDecalComponent* NewLocalVar_0; // 0x0
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x10
    }; // Size: 0x18
    Params_UserConstructionScript params{};
    params.NewLocalVar_0 = (UDecalComponent*)NewLocalVar_0;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
    ProcessEvent(func, &params);
}
void AVFX_BP_SpiderBurst_AmbientDecal_C::Timeline_Emissive__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_Fire_Explode/VFX_BP_SpiderBurst_AmbientDecal.VFX_BP_SpiderBurst_AmbientDecal_C.Timeline_Emissive__FinishedFunc"));
    struct Params_Timeline_Emissive__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_Emissive__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_SpiderBurst_AmbientDecal_C::Timeline_Emissive__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_Fire_Explode/VFX_BP_SpiderBurst_AmbientDecal.VFX_BP_SpiderBurst_AmbientDecal_C.Timeline_Emissive__UpdateFunc"));
    struct Params_Timeline_Emissive__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_Emissive__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_SpiderBurst_AmbientDecal_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_Fire_Explode/VFX_BP_SpiderBurst_AmbientDecal.VFX_BP_SpiderBurst_AmbientDecal_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_SpiderBurst_AmbientDecal_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_Fire_Explode/VFX_BP_SpiderBurst_AmbientDecal.VFX_BP_SpiderBurst_AmbientDecal_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_SpiderBurst_AmbientDecal_C::Timeline_SplatAlpha__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_Fire_Explode/VFX_BP_SpiderBurst_AmbientDecal.VFX_BP_SpiderBurst_AmbientDecal_C.Timeline_SplatAlpha__UpdateFunc"));
    struct Params_Timeline_SplatAlpha__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_SplatAlpha__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_SpiderBurst_AmbientDecal_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_Fire_Explode/VFX_BP_SpiderBurst_AmbientDecal.VFX_BP_SpiderBurst_AmbientDecal_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_SpiderBurst_AmbientDecal_C::ExecuteUbergraph_VFX_BP_SpiderBurst_AmbientDecal(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Spider_Fire_Explode/VFX_BP_SpiderBurst_AmbientDecal.VFX_BP_SpiderBurst_AmbientDecal_C.ExecuteUbergraph_VFX_BP_SpiderBurst_AmbientDecal"));
    struct Params_ExecuteUbergraph_VFX_BP_SpiderBurst_AmbientDecal {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_VFX_BP_SpiderBurst_AmbientDecal params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
