#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_TriggerVolumes_Niagara.hpp"
#include "FSTR_TriggerVolumes_Particles.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UBillboardComponent;
class UBoxComponent;
class UAkAudioEvent;
class USceneComponent;
class ABP_VFX_Container_C;
class UPrimitiveComponent;
class ABiped_Player;
#pragma pack(push, 1)
class ABP_VFX_Trigger_Volume_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UBillboardComponent* Billboard; // 0x250
    UBoxComponent* Box; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    FVector Box_Size; // 0x268
    float Offset_Amount; // 0x274
    ABP_VFX_Container_C* Particle_Rig; // 0x278
    TArray<FSTR_TriggerVolumes_Particles> Particle_Systems; // 0x280
    TArray<FSTR_TriggerVolumes_Niagara> Niagara_System; // 0x290
    bool Debug_Volume_Setup; // 0x2a0
    char pad_2a1[0x7];
    TArray<UAkAudioEvent*> AudioEvents; // 0x2a8
    static ABP_VFX_Trigger_Volume_C* StaticClass();
    void UserConstructionScript0();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ReceiveBeginPlay0();
    void Event_TriggerVolume();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_VFX_Trigger_Volume(int32_t EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_GetUnscaledBoxExtent_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_VFX_Container_C* CallFunc_FinishSpawningActor_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsOverlappingActor_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_InverseTransformLocation_ReturnValue, bool CallFunc_IsPointInBox_ReturnValue, EEndPlayReason::Type K2Node_Event_EndPlayReason);
}; // Size: 0x2b8
#pragma pack(pop)
