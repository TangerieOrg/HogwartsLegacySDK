#include "AActor.hpp"
#include "AVFX_BP_Spider_Stop_Splat_Acro_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "UDecalComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UNiagaraComponent.hpp"
#include "USceneComponent.hpp"
#include "UTimelineComponent.hpp"
void AVFX_BP_Spider_Stop_Splat_Acro_C::ExecuteUbergraph_VFX_BP_Spider_Stop_Splat_Acro(int32_t EntryPoint, int32_t CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32_t CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, FTransform Temp_struct_Variable, UNiagaraComponent* CallFunc_AddComponent_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Critical_Health_Finisher/VFX_BP_Spider_Stop_Splat_Acro.VFX_BP_Spider_Stop_Splat_Acro_C.ExecuteUbergraph_VFX_BP_Spider_Stop_Splat_Acro"));
    struct Params_ExecuteUbergraph_VFX_BP_Spider_Stop_Splat_Acro {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_RandomIntegerInRange_ReturnValue; // 0x4
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x8
        int32_t CallFunc_Round_ReturnValue; // 0xc
        float CallFunc_Conv_IntToFloat_ReturnValue_1; // 0x10
        char pad_14[0xc];
        FTransform Temp_struct_Variable; // 0x20
        UNiagaraComponent* CallFunc_AddComponent_ReturnValue; // 0x50
    }; // Size: 0x58
    Params_ExecuteUbergraph_VFX_BP_Spider_Stop_Splat_Acro params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_RandomIntegerInRange_ReturnValue = (int32_t)CallFunc_RandomIntegerInRange_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_Round_ReturnValue = (int32_t)CallFunc_Round_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue_1 = (float)CallFunc_Conv_IntToFloat_ReturnValue_1;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_AddComponent_ReturnValue = (UNiagaraComponent*)CallFunc_AddComponent_ReturnValue;
    ProcessEvent(func, &params);
}
AVFX_BP_Spider_Stop_Splat_Acro_C* AVFX_BP_Spider_Stop_Splat_Acro_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Enemies/Spider/Critical_Health_Finisher/VFX_BP_Spider_Stop_Splat_Acro.VFX_BP_Spider_Stop_Splat_Acro_C");
    return (AVFX_BP_Spider_Stop_Splat_Acro_C*)res;
}
void AVFX_BP_Spider_Stop_Splat_Acro_C::Decal_Timeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Critical_Health_Finisher/VFX_BP_Spider_Stop_Splat_Acro.VFX_BP_Spider_Stop_Splat_Acro_C.Decal_Timeline__UpdateFunc"));
    struct Params_Decal_Timeline__UpdateFunc {
    }; // Size: 0x0
    Params_Decal_Timeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Spider_Stop_Splat_Acro_C::Decal_Timeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Critical_Health_Finisher/VFX_BP_Spider_Stop_Splat_Acro.VFX_BP_Spider_Stop_Splat_Acro_C.Decal_Timeline__FinishedFunc"));
    struct Params_Decal_Timeline__FinishedFunc {
    }; // Size: 0x0
    Params_Decal_Timeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_Spider_Stop_Splat_Acro_C::UserConstructionScript0(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Critical_Health_Finisher/VFX_BP_Spider_Stop_Splat_Acro.VFX_BP_Spider_Stop_Splat_Acro_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_UserConstructionScript params{};
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    ProcessEvent(func, &params);
}
void AVFX_BP_Spider_Stop_Splat_Acro_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Enemies/Spider/Critical_Health_Finisher/VFX_BP_Spider_Stop_Splat_Acro.VFX_BP_Spider_Stop_Splat_Acro_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
