#include "AActor.hpp"
#include "ABP_VFX_Container_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_TriggerVolumes_Niagara.hpp"
#include "FSTR_TriggerVolumes_Particles.hpp"
#include "FTransform.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_VFX_Container_C::Off() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Container.BP_VFX_Container_C.Off"));
    struct Params_Off {
    }; // Size: 0x0
    Params_Off params{};
    ProcessEvent(func, &params);
}
void ABP_VFX_Container_C::On() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Container.BP_VFX_Container_C.On"));
    struct Params_On {
    }; // Size: 0x0
    Params_On params{};
    ProcessEvent(func, &params);
}
ABP_VFX_Container_C* ABP_VFX_Container_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Container.BP_VFX_Container_C");
    return (ABP_VFX_Container_C*)res;
}
void ABP_VFX_Container_C::ExecuteUbergraph_BP_VFX_Container(int32_t EntryPoint, FTransform Temp_struct_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UNiagaraComponent* CallFunc_AddComponent_ReturnValue, FTransform Temp_struct_Variable_1, int32_t Temp_int_Array_Index_Variable, UParticleSystemComponent* CallFunc_AddComponent_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Array_Index_Variable_3) {}
void ABP_VFX_Container_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Container.BP_VFX_Container_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_VFX_Container_C::Offset_Postiion() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Container.BP_VFX_Container_C.Offset Postiion"));
    struct Params_Offset_Postiion {
    }; // Size: 0x0
    Params_Offset_Postiion params{};
    ProcessEvent(func, &params);
}
void ABP_VFX_Container_C::Remove_Particles(UParticleSystemComponent* PSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Container.BP_VFX_Container_C.Remove Particles"));
    struct Params_Remove_Particles {
        UParticleSystemComponent* PSystem; // 0x0
    }; // Size: 0x8
    Params_Remove_Particles params{};
    params.PSystem = (UParticleSystemComponent*)PSystem;
    ProcessEvent(func, &params);
}
void ABP_VFX_Container_C::Remove_Niagara_particles(UNiagaraComponent* PSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/triggerVolumes/BP_VFX_Container.BP_VFX_Container_C.Remove Niagara particles"));
    struct Params_Remove_Niagara_particles {
        UNiagaraComponent* PSystem; // 0x0
    }; // Size: 0x8
    Params_Remove_Niagara_particles params{};
    params.PSystem = (UNiagaraComponent*)PSystem;
    ProcessEvent(func, &params);
}
