#pragma once
#include <cstdint>
#include "AGuideSpline.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UTimelineComponent;
class UNiagaraComponent;
class USplineMeshComponent;
class UStaticMesh;
class UMaterialInstanceDynamic;
class UAkComponent;
class UObject;
#pragma pack(push, 1)
class ABP_GuideSpline_C : public AGuideSpline {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x488
    float Timeline_1_BasecolorOpacity_1F0006E04BF37DED4CB85DBDE3023E3B; // 0x490
    float Timeline_1_NewTrack_0_1F0006E04BF37DED4CB85DBDE3023E3B; // 0x494
    ETimelineDirection::Type Timeline_1__Direction_1F0006E04BF37DED4CB85DBDE3023E3B; // 0x498
    char pad_499[0x7];
    UTimelineComponent* Timeline_1; // 0x4a0
    float Timeline_0_RibbonOpacity_7C1B1AE44828561BB5866090503E04CF; // 0x4a8
    float Timeline_0_flapflapboom_7C1B1AE44828561BB5866090503E04CF; // 0x4ac
    float Timeline_0_slowstart_7C1B1AE44828561BB5866090503E04CF; // 0x4b0
    float Timeline_0_linear_7C1B1AE44828561BB5866090503E04CF; // 0x4b4
    ETimelineDirection::Type Timeline_0__Direction_7C1B1AE44828561BB5866090503E04CF; // 0x4b8
    char pad_4b9[0x7];
    UTimelineComponent* Timeline_0; // 0x4c0
    bool CanPathStart; // 0x4c8
    char pad_4c9[0x7];
    UNiagaraComponent* SpawnedBookNiagaraRibbon; // 0x4d0
    float Myplayrate; // 0x4d8
    char pad_4dc[0x4];
    TArray<USplineMeshComponent*> MySplineMeshComponentArray; // 0x4e0
    float MovableRibbonDistance; // 0x4f0
    int32_t Number_Of_Elements; // 0x4f4
    UStaticMesh* New_Mesh; // 0x4f8
    float scaleMovableRibbon; // 0x500
    float Tangent; // 0x504
    TArray<UMaterialInstanceDynamic*> dynamicinstances; // 0x508
    float BookHoveringDistanceInWorldUnits; // 0x518
    float BookHoveringUDistance; // 0x51c
    float PlayRate; // 0x520
    char pad_524[0x4];
    UNiagaraComponent* EverLastingRibbon; // 0x528
    int32_t BackTrackComponents; // 0x530
    char pad_534[0x4];
    FHermesBPDelegateHandle Start_guiding_VFXHandle; // 0x538
    UNiagaraComponent* InitialNiagaraBurst; // 0x548
    float FadeOutDuration; // 0x550
    char pad_554[0x4];
    UNiagaraComponent* BookBurstNiagara; // 0x558
    FVector PreviousBookLocation; // 0x560
    float MinimumSplineLengthBurstEffectsTrigger; // 0x56c
    bool SecondaryBurstSpawned; // 0x570
    char pad_571[0x3];
    int32_t PlayerProgressInComponentLengthUnits; // 0x574
    int32_t SplineLengthInComonentLengthUnits; // 0x578
    float InitialSplineLength; // 0x57c
    UAkComponent* AK_SecondaryBurst; // 0x580
    float timeSinceLastCast; // 0x588
    float PlayerDistanceAlongSpline; // 0x58c
    int32_t CurrentPrefix; // 0x590
    int32_t PrevPrefix; // 0x594
    int32_t Player_Progress_Delta; // 0x598
    char pad_59c[0x4];
    TArray<bool> UpdateMesh; // 0x5a0
    TArray<FVector> StartPointTargets; // 0x5b0
    TArray<FVector> StartTangentTargets; // 0x5c0
    TArray<FVector> EndPointTargets; // 0x5d0
    TArray<FVector> EndTangentTargets; // 0x5e0
    float MeshUpdateDeltaTime; // 0x5f0
    float MeshUpdateInterpSpeed; // 0x5f4
    bool GuidingStarted; // 0x5f8
    char pad_5f9[0x7];
    static ABP_GuideSpline_C* StaticClass();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ComputeMeshComponentTargetsFromPlayerPosition();
    void SpawnInitialBurstAndCheckIfPathCanStart();
    void PreparePathRemoval();
    void ReverseRibbon();
    void ReceiveBeginPlay();
    void StartGuidingMechanicVFX(UObject* Caller);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_GuideSpline(int32_t EntryPoint, int32_t Temp_int_Variable, bool Temp_bool_IsClosed_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FTransform Temp_struct_Variable, int32_t Temp_int_Variable_1, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, bool CallFunc_Less_FloatFloat_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable_1);
}; // Size: 0x600
#pragma pack(pop)
