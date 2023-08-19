#pragma once
#include <cstdint>
#include "AWaterVolumeBase.hpp"
#include "EDrawDebugTrace\Type.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
class UStaticMeshComponent;
class USphereComponent;
class AActor;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ARiverVolume : public AWaterVolumeBase {
public:
    UStaticMeshComponent* RiverMesh; // 0x4b0
    float RiverFlowSpeed; // 0x4b8
    bool bDebugFlowView; // 0x4bc
    char pad_4bd[0x3];
    USphereComponent* LakeSphereIn; // 0x4c0
    USphereComponent* LakeSphereOut; // 0x4c8
    char pad_4d0[0x50];
    FVector RiverAveDir; // 0x520
    char pad_52c[0x4];
    TArray<AActor*> LakeActors; // 0x530
    TArray<AActor*> RemoveLakeActors; // 0x540
    EDrawDebugTrace::Type DebugFlowView; // 0x550
    bool bFlowInLake; // 0x551
    bool bFlowOutLake; // 0x552
    char pad_553[0x5];
    static ARiverVolume* StaticClass();
    void SetupRiver(FTransform i_RiverTransform, FVector i_RiverAveDir);
    void OnLakeSphereOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnActorOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    FVector2D GetForceVector(UPrimitiveComponent* PrimComp, bool bUseDist);
}; // Size: 0x558
#pragma pack(pop)
