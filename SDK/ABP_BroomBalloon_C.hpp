#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UObjectStateComponent;
class UCapsuleComponent;
class USkeletalMeshComponent;
class UNiagaraComponent;
class UTimelineComponent;
#pragma pack(push, 1)
class ABP_BroomBalloon_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UObjectStateComponent* ObjectState; // 0x250
    UCapsuleComponent* Capsule; // 0x258
    USkeletalMeshComponent* SkeletalMesh; // 0x260
    float Timeline_0_NewTrack_0_DC23866A4662A1C65290A794C17319FE; // 0x268
    ETimelineDirection::Type Timeline_0__Direction_DC23866A4662A1C65290A794C17319FE; // 0x26c
    char pad_26d[0x3];
    UTimelineComponent* Timeline_0; // 0x270
    FVector StartingLocation; // 0x278
    float Speed; // 0x284
    float MaxSpeed; // 0x288
    float MinSpeed; // 0x28c
    bool IsZSG; // 0x290
    bool IsZSG2; // 0x291
    bool IsZZM1; // 0x292
    bool IsZZM2; // 0x293
    float BobAmount; // 0x294
    float MaxBobAmount; // 0x298
    float MinBob; // 0x29c
    float MaxBob; // 0x2a0
    bool Respawner; // 0x2a4
    bool IsHidden; // 0x2a5
    char pad_2a6[0x2];
    float MinScale; // 0x2a8
    char pad_2ac[0x4];
    UNiagaraComponent* BurstVFX; // 0x2b0
    int32_t Material; // 0x2b8
    char pad_2bc[0x4];
    static ABP_BroomBalloon_C* StaticClass();
    void SetMaterial(int32_t MaterialIndex, bool K2Node_SwitchInteger_CmpSuccess);
    void UserConstructionScript0(bool K2Node_SwitchInteger_CmpSuccess);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera);
    void ReceiveBeginPlay0();
    void ReceiveActorBeginOverlap0(AActor* OtherActor);
    void ReceiveTick0(float DeltaSeconds);
    void TickThrottler_GoToSleep(float DistanceSquaredToCamera);
    void TickThrottler_WakeUp(float DistanceSquaredToCamera);
    void SetHidden(bool Hidden);
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_BroomBalloon(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x2c0
#pragma pack(pop)
