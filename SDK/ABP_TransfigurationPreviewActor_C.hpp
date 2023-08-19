#pragma once
#include <cstdint>
#include "ATransfigurationPreviewActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "E_PreviewActorState\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransfigurationResource.hpp"
#include "FVector.hpp"
class UPostProcessComponent;
class UPointLightComponent;
class UNiagaraSystem;
class UNiagaraComponent;
class USceneComponent;
class UTimelineComponent;
class UMeshComponent;
class UCurveFloat;
class UMaterialBillboardComponent;
class AActor;
#pragma pack(push, 1)
class ABP_TransfigurationPreviewActor_C : public ATransfigurationPreviewActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x430
    UPostProcessComponent* PostProcess; // 0x438
    UPointLightComponent* Visibility_PointLight; // 0x440
    USceneComponent* CentredMeshRoot; // 0x448
    UNiagaraComponent* NiagaraSwirl; // 0x450
    float Timeline_0_Light_551032264E08DDD03F2778B4242AC652; // 0x458
    float Timeline_0_Distortion_551032264E08DDD03F2778B4242AC652; // 0x45c
    ETimelineDirection::Type Timeline_0__Direction_551032264E08DDD03F2778B4242AC652; // 0x460
    char pad_461[0x7];
    UTimelineComponent* Timeline_0; // 0x468
    float ConjuredFromThinAirTimeline_Light_DE9EC78A4D8C95068C93FB91E1840FD8; // 0x470
    float ConjuredFromThinAirTimeline_DistortIn_DE9EC78A4D8C95068C93FB91E1840FD8; // 0x474
    float ConjuredFromThinAirTimeline_DistortOut_DE9EC78A4D8C95068C93FB91E1840FD8; // 0x478
    float ConjuredFromThinAirTimeline_Rotation_DE9EC78A4D8C95068C93FB91E1840FD8; // 0x47c
    float ConjuredFromThinAirTimeline_Scale_DE9EC78A4D8C95068C93FB91E1840FD8; // 0x480
    ETimelineDirection::Type ConjuredFromThinAirTimeline__Direction_DE9EC78A4D8C95068C93FB91E1840FD8; // 0x484
    char pad_485[0x3];
    UTimelineComponent* ConjuredFromThinAirTimeline; // 0x488
    FVector OriginalScale; // 0x490
    char pad_49c[0x4];
    TArray<UMeshComponent*> GhostMeshes; // 0x4a0
    TArray<UMeshComponent*> SolidMeshes; // 0x4b0
    float ScaleFactor; // 0x4c0
    bool Visible; // 0x4c4
    char pad_4c5[0x3];
    float GlowMult; // 0x4c8
    float PinchMult; // 0x4cc
    float RefractionMult; // 0x4d0
    float RandomSwirl; // 0x4d4
    bool TransformingIn; // 0x4d8
    char pad_4d9[0x3];
    int32_t CamUID; // 0x4dc
    UCurveFloat* SizeToCameraDistanceCurve; // 0x4e0
    UCurveFloat* BlendCurve; // 0x4e8
    UCurveFloat* SizeToVertOffsetCurve; // 0x4f0
    bool bInitializeVisibilityOnLoad; // 0x4f8
    char pad_4f9[0x3];
    FVector OriginalCenter; // 0x4fc
    E_PreviewActorState::Type ActorState; // 0x508
    bool bTransformationMeshSwapPending; // 0x509
    char pad_50a[0x6];
    TArray<USceneComponent*> HiddenComponents; // 0x510
    float EffectScale; // 0x520
    char pad_524[0x4];
    UNiagaraSystem* ExpandEffect; // 0x528
    UNiagaraSystem* CollapseEffect; // 0x530
    FRotator Rotation; // 0x538
    float PlayRate; // 0x544
    FVector MinimumScale; // 0x548
    char pad_554[0xc];
    static ABP_TransfigurationPreviewActor_C* StaticClass();
    void ResetToOriginalScale();
    bool IsPreviewInTransition(bool K2Node_SwitchEnum_CmpSuccess);
    void ShowBillboardComponents(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32_t CallFunc_Array_Length_ReturnValue, USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UMaterialBillboardComponent* K2Node_DynamicCast_AsMaterial_Billboard_Component, bool K2Node_DynamicCast_bSuccess);
    void Set_EffectScale(FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter, FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent, float K2Node_MathExpression_ReturnValue);
    void ShowPreviewMesh(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, USceneComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void HidePreviewMesh(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32_t CallFunc_Array_Length_ReturnValue, USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
    bool IsReadyForPlacement(float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_GetPlaybackPosition_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    bool ShouldBeCollapsedToSwirl(bool CallFunc_AreResourceRequirementsMet_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocked_ReturnValue, bool CallFunc_CanPlace_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void SetupCentredMeshRoot(FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter, FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent, bool CallFunc_K2_AttachToComponent_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult);
    void ConjuredFromThinAirTimeline__FinishedFunc();
    void ConjuredFromThinAirTimeline__UpdateFunc();
    void ConjuredFromThinAirTimeline__TriggerMotionBlur__EventFunc();
    void ConjuredFromThinAirTimeline__SwirlOffEvent__EventFunc();
    void ConjuredFromThinAirTimeline__BackwardsTransformationEvent__EventFunc();
    void ConjuredFromThinAirTimeline__Camera_Shaker_Trigger__EventFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__NewTrack_1__EventFunc();
    void InitializeVisibility();
    void ReinitializeVisibility();
    void ReceiveTick(float DeltaSeconds);
    void ConjuredFromThinAir();
    void CancelledIntoThinAir();
    void ObjectDeselected(AActor* InNewActor);
    void ObjectConfirmed(TArray<AActor*>& InNewActors);
    void BlueprintInitialize();
    void OnTransformStart(ATransfigurationPreviewActor* InNewPreview);
    void OnTransformationDone(AActor* DestroyedActor);
    void ObjectSelected();
    void OnVanishStart();
    void OnPreviewMeshLoaded();
    void TransformedFromOtherPreview(ATransfigurationPreviewActor* InPreviousPreview);
    void Vanish();
    void BP_OnTransformationLoaded();
    void OnTransformWithoutStyle();
    void OnReturnedToSwirl();
    void AppearFromSwirl();
    void ReturnToSwirl();
    void StartHoldConjuring(float TotalConjurationDuration, TArray<FTransfigurationResource>& Resources, FVector WandPos);
    void ColorAboutToChange();
    void CannotHoldConjuring();
    void StartHoldVanishing();
    void CancelHoldVanishing();
    void StartHoldTransforming();
    void CancelHoldTransforming();
    void FinishHoldVanishing();
    void FinishHoldTransforming();
    void OnSizeChange(float StartScale, float EndScale);
    void ExecuteUbergraph_BP_TransfigurationPreviewActor(int32_t EntryPoint);
}; // Size: 0x560
#pragma pack(pop)
