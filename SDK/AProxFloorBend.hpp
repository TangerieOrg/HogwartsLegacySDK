#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UBoxComponent;
class UPrimitiveComponent;
class USceneComponent;
class UAkAudioEvent;
struct FHitResult;
class UCurveFloat;
class UAkComponent;
class UStaticMeshComponent;
class ACharacter;
#pragma pack(push, 1)
class AProxFloorBend : public AActor {
public:
    TArray<AActor*> Floor; // 0x248
    float Radius; // 0x258
    float InnerRadius; // 0x25c
    float Offset; // 0x260
    float BlendTime; // 0x264
    float FloorOffset; // 0x268
    float ZOffset; // 0x26c
    float ZFloorBase; // 0x270
    float TraceDistance; // 0x274
    char pad_278[0x8];
    FTransform ProximityOffset; // 0x280
    bool bUseProxOffset; // 0x2b0
    bool bSetUpOnPlay; // 0x2b1
    bool bShowCollisionPlane; // 0x2b2
    bool bHardFloorReset; // 0x2b3
    float OffsetDis; // 0x2b4
    float OffsetMultiplier; // 0x2b8
    float BaseHeight; // 0x2bc
    float NewFloorModifierX; // 0x2c0
    float NewFloorModifierY; // 0x2c4
    FVector FloorBaseLocation; // 0x2c8
    char pad_2d4[0x4];
    TArray<UPrimitiveComponent*> OverlappedList; // 0x2d8
    TArray<FVector> LocationsList; // 0x2e8
    UAkAudioEvent* StartAkEvent; // 0x2f8
    UAkAudioEvent* StopAkEvent; // 0x300
    UAkAudioEvent* FloorMoveLoopStartAkEvent; // 0x308
    UAkAudioEvent* FloorMoveLoopStopAkEvent; // 0x310
    UCurveFloat* FloorCurve; // 0x318
    char pad_320[0x98];
    ETimelineDirection::Type TimelineDirection; // 0x3b8
    char pad_3b9[0x7];
    USceneComponent* SceneComponent; // 0x3c0
    UStaticMeshComponent* NewFloorComponent; // 0x3c8
    UAkComponent* AkProxFloorBend; // 0x3d0
    UBoxComponent* TriggerBox; // 0x3d8
    ACharacter* PlayerCharacter; // 0x3e0
    AActor* ComparisonActor; // 0x3e8
    char pad_3f0[0x10];
    static AProxFloorBend* StaticClass();
    void UpdateRTPCValues();
    void UpdateProxFloorBend(float Blend);
    void UpdateCollisionResponse(float Blend);
    void SetFloorLocation(UPrimitiveComponent* Obj, float Blend, FVector BaseLOC, FVector CompareLocation);
    void ResetFloor();
    bool ProxFloorBendSetUp(USceneComponent* i_SceneComponent, UStaticMeshComponent* i_NewFloor, UAkComponent* i_AkComponent, UBoxComponent* i_TriggerBox, AActor* i_ComparisonActor);
    void OnTimelineFinished();
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x400
#pragma pack(pop)
