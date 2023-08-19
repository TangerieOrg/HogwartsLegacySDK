#pragma once
#include <cstdint>
#include "EClusterConnectionTypeEnum.hpp"
#include "EGeometryCollectionPhysicsTypeEnum.hpp"
#include "EInitialVelocityTypeEnum.hpp"
#include "EObjectStateTypeEnum.hpp"
#include "FGeomComponentCacheParameters.hpp"
#include "FGeometryCollectionRepData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UMeshComponent.hpp"
class AChaosSolverActor;
class UInstancedStaticMeshComponent;
class AFieldSystemActor;
class UGeometryCollection;
class UBodySetup;
class UChaosPhysicalMaterial;
class UPhysicalMaterial;
struct FChaosPhysicsCollisionInfo;
class UFieldSystemMetaData;
class UFieldNodeBase;
#pragma pack(push, 1)
class UGeometryCollectionComponent : public UMeshComponent {
public:
    AChaosSolverActor* ChaosSolverActor; // 0x4b0
    char pad_4b8[0xe8];
    UGeometryCollection* RestCollection; // 0x5a0
    TArray<AFieldSystemActor*> InitializationFields; // 0x5a8
    bool Simulating; // 0x5b8
    char pad_5b9[0x7];
    EObjectStateTypeEnum ObjectType; // 0x5c0
    bool bForceMotionBlur; // 0x5c1
    bool EnableClustering; // 0x5c2
    char pad_5c3[0x1];
    int32_t ClusterGroupIndex; // 0x5c4
    int32_t MaxClusterLevel; // 0x5c8
    char pad_5cc[0x4];
    TArray<float> DamageThreshold; // 0x5d0
    bool bUseSizeSpecificDamageThreshold; // 0x5e0
    EClusterConnectionTypeEnum ClusterConnectionType; // 0x5e1
    char pad_5e2[0x2];
    int32_t CollisionGroup; // 0x5e4
    float CollisionSampleFraction; // 0x5e8
    float LinearEtherDrag; // 0x5ec
    float AngularEtherDrag; // 0x5f0
    char pad_5f4[0x4];
    UChaosPhysicalMaterial* PhysicalMaterial; // 0x5f8
    EInitialVelocityTypeEnum InitialVelocityType; // 0x600
    char pad_601[0x3];
    FVector InitialLinearVelocity; // 0x604
    FVector InitialAngularVelocity; // 0x610
    char pad_61c[0x4];
    UPhysicalMaterial* PhysicalMaterialOverride; // 0x620
    FGeomComponentCacheParameters CacheParameters; // 0x628
    TArray<FTransform> RestTransforms; // 0x678
    char pad_688[0x68];
    float DesiredCacheTime; // 0x6f0
    bool CachePlayback; // 0x6f4
    char pad_6f5[0x13];
    bool bNotifyBreaks; // 0x708
    bool bNotifyCollisions; // 0x709
    bool bNotifyTrailing; // 0x70a
    bool bNotifyRemovals; // 0x70b
    bool bStoreVelocities; // 0x70c
    bool bShowBoneColors; // 0x70d
    bool bEnableReplication; // 0x70e
    bool bEnableAbandonAfterLevel; // 0x70f
    int32_t ReplicationAbandonClusterLevel; // 0x710
    char pad_714[0x4];
    FGeometryCollectionRepData RepData; // 0x718
    char pad_730[0x218];
    UBodySetup* DummyBodySetup; // 0x948
    char pad_950[0x8];
    TArray<UInstancedStaticMeshComponent*> EmbeddedGeometryComponents; // 0x958
    char pad_968[0x8];
    static UGeometryCollectionComponent* StaticClass();
    void SetNotifyRemovals(bool bNewNotifyRemovals);
    void SetNotifyBreaks(bool bNewNotifyBreaks);
    void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);
    void OnRep_RepData(FGeometryCollectionRepData& OldData);
    void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(UGeometryCollectionComponent* FracturedComponent);
    void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(UGeometryCollectionComponent* FracturedComponent);
    void NetAbandonCluster(int32_t TransformIndex);
    void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    void ApplyKinematicField(float Radius, FVector Position);
}; // Size: 0x970
#pragma pack(pop)
