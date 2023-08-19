#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "ESpiderTypeEnum.hpp"
#include "FVector.hpp"
class UParticleSystem;
class USceneComponent;
class UStaticMeshComponent;
class UPoseableMeshComponent;
class UPhysicsConstraintComponent;
class ASpiderWeb_EggSack;
#pragma pack(push, 1)
class ASpiderWeb_HangingBase : public AWorldObject {
public:
    float CableLength; // 0x2b0
    float LootChance; // 0x2b4
    bool bSpawnObject; // 0x2b8
    char pad_2b9[0x7];
    FString ObjectDBID; // 0x2c0
    bool bSpawnSpiders; // 0x2d0
    ESpiderTypeEnum SpiderType; // 0x2d1
    char pad_2d2[0x2];
    float SpiderChance; // 0x2d4
    int32_t BaseSpiderNum; // 0x2d8
    int32_t SpiderNumVariance; // 0x2dc
    UParticleSystem* SnapParticle; // 0x2e0
    float ExtraCableLength; // 0x2e8
    float CableLengthTick; // 0x2ec
    int32_t DescendoCount; // 0x2f0
    bool bBroken; // 0x2f4
    char pad_2f5[0x3];
    UStaticMeshComponent* AnchorComp; // 0x2f8
    UPoseableMeshComponent* PosableMeshComp; // 0x300
    UPhysicsConstraintComponent* PhysicsConstraintComp; // 0x308
    ASpiderWeb_EggSack* SpawnedSack; // 0x310
    UStaticMeshComponent* SackMeshComp; // 0x318
    USceneComponent* TargetComp; // 0x320
    FVector WebEndLoc; // 0x328
    char pad_334[0x14];
    static ASpiderWeb_HangingBase* StaticClass();
    void WingardiumStart(bool i_Start);
    void WebRetract();
    void WakeTick(bool i_Wake);
    void StartWebRetract();
    void ScaleStart(bool i_Start, bool i_ScaleUp);
    void EndWebRetract();
    void DescendoHit();
    void BreakConnection(bool i_Explode);
    void AccioStart(bool i_Start, float i_Time);
    void AccioPull();
}; // Size: 0x348
#pragma pack(pop)
