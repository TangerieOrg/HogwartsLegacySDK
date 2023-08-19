#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "E_InputSelection\Type.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UPointLightComponent;
class UAkComponent;
class UAnimatedLightComponent;
class UParticleSystemComponent;
class UBillboardComponent;
class USceneComponent;
class UTimelineComponent;
class UAkAudioEvent;
class UNiagaraComponent;
class UStaticMeshComponent;
class UNiagaraSystem;
class UParticleSystem;
class UStaticMesh;
class ATriggerVolume;
class USplineComponent;
#pragma pack(push, 1)
class ABP_AmbientPathEffects_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UAnimatedLightComponent* AnimatedLight; // 0x250
    UAkComponent* AkComponent; // 0x258
    UPointLightComponent* PointLight1; // 0x260
    UBillboardComponent* Billboard; // 0x268
    USceneComponent* DefaultSceneRoot; // 0x270
    float Timeline_1_NewTrack_0_398D182D492E4648424A52A1A4117CF4; // 0x278
    ETimelineDirection::Type Timeline_1__Direction_398D182D492E4648424A52A1A4117CF4; // 0x27c
    char pad_27d[0x3];
    UTimelineComponent* Timeline_1; // 0x280
    float DistanceLoadInArea; // 0x288
    float PlayRate; // 0x28c
    float EffectScale; // 0x290
    float MinTimerDelay; // 0x294
    float MaxTimerDelay; // 0x298
    char pad_29c[0x4];
    TArray<int32_t> StopPointsOnSpline; // 0x2a0
    bool CanPlay; // 0x2b0
    char pad_2b1[0x3];
    float AccumulatedTime; // 0x2b4
    float RandomTimer; // 0x2b8
    E_InputSelection::Type ETypeSelection; // 0x2bc
    char pad_2bd[0x3];
    UNiagaraComponent* selectedNiagara; // 0x2c0
    UParticleSystemComponent* selectedCascade; // 0x2c8
    UStaticMeshComponent* selectedMesh; // 0x2d0
    UNiagaraSystem* NiagaraSystem; // 0x2d8
    UParticleSystem* ParticleSystem; // 0x2e0
    UStaticMesh* StaticMesh; // 0x2e8
    bool AutoPlay; // 0x2f0
    char pad_2f1[0x7];
    ATriggerVolume* TriggerVolume; // 0x2f8
    TArray<USplineComponent*> SplineArray; // 0x300
    int32_t number_of_paths; // 0x310
    int32_t ChosenPath; // 0x314
    bool overwritten_splines; // 0x318
    char pad_319[0x3];
    float OriginalPlayrate; // 0x31c
    bool PointLightTurnedOn; // 0x320
    bool PlayOnlyOnce; // 0x321
    bool LoopFinished; // 0x322
    char pad_323[0x1];
    float LightIntensity; // 0x324
    bool MoveBasedOnPlayerVicinity; // 0x328
    bool PlayerInteraction; // 0x329
    char pad_32a[0x2];
    float StopPointProximity; // 0x32c
    UAkAudioEvent* AkEvent; // 0x330
    float Distance; // 0x338
    float TriggerDistance; // 0x33c
    FVector AkComponentLocation; // 0x340
    FVector OldAkComponentLocation; // 0x34c
    float TriggerSpeed; // 0x358
    bool AudioOnlyOnce; // 0x35c
    bool IsEventPlaying; // 0x35d
    bool initialTrigger; // 0x35e
    bool Set_Niagara_SpawnAmount; // 0x35f
    int32_t SpawnAmount; // 0x360
    float TickDistance; // 0x364
    static ABP_AmbientPathEffects_C* StaticClass();
    void UserConstructionScript0(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FTransform Temp_struct_Variable, int32_t CallFunc_Array_Length_ReturnValue, USplineComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay0();
    void SpawnParticles();
    void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void CheckIfParticlesCanBePlayed();
    void CheckIfSFXCanBePlayed();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_AmbientPathEffects(int32_t EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_2, FTransform Temp_struct_Variable, bool Temp_bool_IsClosed_Variable_1, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, float CallFunc_RandomFloatInRange_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_2, int32_t CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue, bool Temp_bool_IsClosed_Variable_3, AActor* K2Node_ComponentBoundEvent_OverlappedActor_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, AActor* K2Node_ComponentBoundEvent_OverlappedActor, AActor* K2Node_ComponentBoundEvent_OtherActor, USplineComponent* CallFunc_Array_Get_Item_1, float CallFunc_GetSplineLength_ReturnValue);
}; // Size: 0x368
#pragma pack(pop)
