#include "AActor.hpp"
#include "AVFX_BP_Spider_Stop_Splat_Venom_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "UDecalComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UNiagaraComponent.hpp"
#include "USceneComponent.hpp"
#include "UTimelineComponent.hpp"
void AVFX_BP_Spider_Stop_Splat_Venom_C::Decal_Timeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Critical_Health_Finisher/VFX_BP_Spider_Stop_Splat_Venom.VFX_BP_Spider_Stop_Splat_Venom_C.Decal_Timeline__UpdateFunc"));
    struct Params_Decal_Timeline__UpdateFunc {
    }; // Size: 0x0
    Params_Decal_Timeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
AVFX_BP_Spider_Stop_Splat_Venom_C* AVFX_BP_Spider_Stop_Splat_Venom_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Enemies/Spider/Critical_Health_Finisher/VFX_BP_Spider_Stop_Splat_Venom.VFX_BP_Spider_Stop_Splat_Venom_C");
    return (AVFX_BP_Spider_Stop_Splat_Venom_C*)res;
}
void AVFX_BP_Spider_Stop_Splat_Venom_C::UserConstructionScript0(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Critical_Health_Finisher/VFX_BP_Spider_Stop_Splat_Venom.VFX_BP_Spider_Stop_Splat_Venom_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_UserConstructionScript params{};
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    ProcessEvent(func, &params);
}
void AVFX_BP_Spider_Stop_Splat_Venom_C::Decal_Timeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Critical_Health_Finisher/VFX_BP_Spider_Stop_Splat_Venom.VFX_BP_Spider_Stop_Splat_Venom_C.Decal_Timeline__FinishedFunc"));
    struct Params_Decal_Timeline__FinishedFunc {
    }; // Size: 0x0
    Params_Decal_Timeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Spider_Stop_Splat_Venom_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Critical_Health_Finisher/VFX_BP_Spider_Stop_Splat_Venom.VFX_BP_Spider_Stop_Splat_Venom_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Spider_Stop_Splat_Venom_C::ExecuteUbergraph_VFX_BP_Spider_Stop_Splat_Venom(int32_t EntryPoint, FTransform Temp_struct_Variable, UNiagaraComponent* CallFunc_AddComponent_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Critical_Health_Finisher/VFX_BP_Spider_Stop_Splat_Venom.VFX_BP_Spider_Stop_Splat_Venom_C.ExecuteUbergraph_VFX_BP_Spider_Stop_Splat_Venom"));
    struct Params_ExecuteUbergraph_VFX_BP_Spider_Stop_Splat_Venom {
        int32_t EntryPoint; // 0x0
        char pad_4[0xc];
        FTransform Temp_struct_Variable; // 0x10
        UNiagaraComponent* CallFunc_AddComponent_ReturnValue; // 0x40
    }; // Size: 0x48
    Params_ExecuteUbergraph_VFX_BP_Spider_Stop_Splat_Venom params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_AddComponent_ReturnValue = (UNiagaraComponent*)CallFunc_AddComponent_ReturnValue;
    ProcessEvent(func, &params);
}
