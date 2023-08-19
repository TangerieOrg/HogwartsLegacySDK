#pragma once
#include <cstdint>
#include "AWingardiumBulletTimeSpellTool.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FNiagaraSystemSpawnAttachedPointInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
class UNiagaraComponent;
class USceneComponent;
class UTimelineComponent;
class UInputComponent;
class ACharacter;
class UParticleSystemComponent;
class AActor;
class APawn;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class ABP_WingardiumSpell_C : public AWingardiumBulletTimeSpellTool {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xbe8
    USceneComponent* DefaultSceneRoot; // 0xbf0
    float Timeline_1_Alpha_05AF6D4343E0F0E54FA574B3E63EB4CF; // 0xbf8
    ETimelineDirection::Type Timeline_1__Direction_05AF6D4343E0F0E54FA574B3E63EB4CF; // 0xbfc
    char pad_bfd[0x3];
    UTimelineComponent* Timeline_1; // 0xc00
    bool WingardiumMoving; // 0xc08
    char pad_c09[0x7];
    UInputComponent* ParentInputComponent; // 0xc10
    UParticleSystemComponent* P_Beam; // 0xc18
    USceneComponent* TargetComponent; // 0xc20
    bool BonusCastInProgress; // 0xc28
    char pad_c29[0x7];
    UNiagaraComponent* VFX_LassoBeam; // 0xc30
    AActor* Target; // 0xc38
    static ABP_WingardiumSpell_C* StaticClass();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_15(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_14(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_13(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_12(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_11(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_10(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_9(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_8(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_7(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_6(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_5(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_4(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_3(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void FadeBeamIn(UParticleSystemComponent* Beam);
    void OnAffectTarget(AActor* Target, USceneComponent* Component, bool bInTargetAffected);
    void OnStop();
    void ReceiveTick(float DeltaSeconds);
    void OnStart();
    void VFX_LassoBeam_Spawn();
    void VFX_LassoBeam_Update(AActor* Target);
    void ReceiveBeginPlay();
    void FadeBeamOut(UParticleSystemComponent* Beam);
    void BeamFadeOut0(UParticleSystemComponent* BeamEmitter);
    void BeamFadeIn0(UParticleSystemComponent* BeamEmitter);
    void ExecuteUbergraph_BP_WingardiumSpell(int32_t EntryPoint, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_15, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_14, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_13, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_12, FVariantMapHandle Temp_struct_Variable, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_11, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_10, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_9, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_8, FVariantMapHandle Temp_struct_Variable_1, FNiagaraSystemSpawnAttachedPointInfo K2Node_MakeStruct_NiagaraSystemSpawnAttachedPointInfo, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_7, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_6, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_5, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_4, FVariantMapHandle Temp_struct_Variable_2, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_3, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_2, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_1, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, FVariantMapHandle Temp_struct_Variable_3, UParticleSystemComponent* K2Node_CustomEvent_Beam_1, AActor* K2Node_Event_Target, USceneComponent* K2Node_Event_Component, bool K2Node_Event_bInTargetAffected, ACharacter* CallFunc_GetCharacter_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_GetInputAxisValue_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, TArray<USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, USkeletalMeshComponent* CallFunc_Array_Get_Item, UNiagaraComponent* CallFunc_SpawnAttached_NiagaraComponent, AActor* K2Node_CustomEvent_Target, FVector CallFunc_GetActorBounds_Origin, FVector CallFunc_GetActorBounds_BoxExtent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, AActor* CallFunc_GetUltimateOwner_ReturnValue, UInputComponent* CallFunc_GetComponentByClass_ReturnValue, UParticleSystemComponent* K2Node_CustomEvent_Beam, UParticleSystemComponent* K2Node_Event_BeamEmitter_1, UParticleSystemComponent* K2Node_Event_BeamEmitter);
}; // Size: 0xc40
#pragma pack(pop)
