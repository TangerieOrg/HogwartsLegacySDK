#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_TriggerVolumes_Niagara.hpp"
#include "FSTR_TriggerVolumes_Particles.hpp"
#include "FTransform.hpp"
class UStaticMeshComponent;
class UParticleSystemComponent;
class UAkComponent;
class USceneComponent;
class UParticleSystem;
class UNiagaraComponent;
class UAkAudioEvent;
#pragma pack(push, 1)
class ABP_VFX_Container_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UStaticMeshComponent* Sphere; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    TArray<UParticleSystemComponent*> effectList; // 0x260
    float OffsetAmount; // 0x270
    bool ACTIVE; // 0x274
    char pad_275[0x3];
    TArray<UParticleSystem*> Effects; // 0x278
    int32_t Count; // 0x288
    int32_t Total; // 0x28c
    TArray<UNiagaraComponent*> Niagara_Effect_List; // 0x290
    bool Debug_Location; // 0x2a0
    char pad_2a1[0x7];
    TArray<FSTR_TriggerVolumes_Particles> Particle_Systems; // 0x2a8
    TArray<FSTR_TriggerVolumes_Niagara> Niagara_Systems; // 0x2b8
    int32_t NiagaraTotal; // 0x2c8
    int32_t NiagaraCount; // 0x2cc
    TArray<UAkAudioEvent*> AudioEvents; // 0x2d0
    TArray<UAkComponent*> AKComponentList; // 0x2e0
    char pad_2f0[0x50];
    static ABP_VFX_Container_C* StaticClass();
    void ReceiveBeginPlay0();
    void On();
    void Off();
    void Offset_Postiion();
    void Remove_Particles(UParticleSystemComponent* PSystem);
    void Remove_Niagara_particles(UNiagaraComponent* PSystem);
    void ExecuteUbergraph_BP_VFX_Container(int32_t EntryPoint, FTransform Temp_struct_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UNiagaraComponent* CallFunc_AddComponent_ReturnValue, FTransform Temp_struct_Variable_1, int32_t Temp_int_Array_Index_Variable, UParticleSystemComponent* CallFunc_AddComponent_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Array_Index_Variable_3);
}; // Size: 0x340
#pragma pack(pop)
