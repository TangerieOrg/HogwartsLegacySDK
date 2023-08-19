#include "AChaosSolverActor.hpp"
#include "AFieldSystemActor.hpp"
#include "EClusterConnectionTypeEnum.hpp"
#include "EGeometryCollectionPhysicsTypeEnum.hpp"
#include "EInitialVelocityTypeEnum.hpp"
#include "EObjectStateTypeEnum.hpp"
#include "FChaosPhysicsCollisionInfo.hpp"
#include "FGeomComponentCacheParameters.hpp"
#include "FGeometryCollectionRepData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBodySetup.hpp"
#include "UChaosPhysicalMaterial.hpp"
#include "UFieldNodeBase.hpp"
#include "UFieldSystemMetaData.hpp"
#include "UFunction.hpp"
#include "UGeometryCollection.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UMeshComponent.hpp"
#include "UPhysicalMaterial.hpp"
UGeometryCollectionComponent* UGeometryCollectionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCollectionEngine.GeometryCollectionComponent");
    return (UGeometryCollectionComponent*)res;
}
void UGeometryCollectionComponent::SetNotifyRemovals(bool bNewNotifyRemovals) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals"));
    struct Params_SetNotifyRemovals {
        bool bNewNotifyRemovals; // 0x0
    }; // Size: 0x1
    Params_SetNotifyRemovals params{};
    params.bNewNotifyRemovals = (bool)bNewNotifyRemovals;
    ProcessEvent(func, &params);
}
void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks"));
    struct Params_SetNotifyBreaks {
        bool bNewNotifyBreaks; // 0x0
    }; // Size: 0x1
    Params_SetNotifyBreaks params{};
    params.bNewNotifyBreaks = (bool)bNewNotifyBreaks;
    ProcessEvent(func, &params);
}
void UGeometryCollectionComponent::ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision"));
    struct Params_ReceivePhysicsCollision {
        FChaosPhysicsCollisionInfo CollisionInfo; // 0x0
    }; // Size: 0x70
    Params_ReceivePhysicsCollision params{};
    params.CollisionInfo = (FChaosPhysicsCollisionInfo)CollisionInfo;
    ProcessEvent(func, &params);
    CollisionInfo = params.CollisionInfo;
}
void UGeometryCollectionComponent::OnRep_RepData(FGeometryCollectionRepData& OldData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData"));
    struct Params_OnRep_RepData {
        FGeometryCollectionRepData OldData; // 0x0
    }; // Size: 0x18
    Params_OnRep_RepData params{};
    params.OldData = (FGeometryCollectionRepData)OldData;
    ProcessEvent(func, &params);
    OldData = params.OldData;
}
void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(UGeometryCollectionComponent* FracturedComponent) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature"));
    struct Params_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature {
        UGeometryCollectionComponent* FracturedComponent; // 0x0
    }; // Size: 0x8
    Params_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature params{};
    params.FracturedComponent = (UGeometryCollectionComponent*)FracturedComponent;
    ProcessEvent(func, &params);
}
void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(UGeometryCollectionComponent* FracturedComponent) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature"));
    struct Params_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature {
        UGeometryCollectionComponent* FracturedComponent; // 0x0
    }; // Size: 0x8
    Params_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature params{};
    params.FracturedComponent = (UGeometryCollectionComponent*)FracturedComponent;
    ProcessEvent(func, &params);
}
void UGeometryCollectionComponent::NetAbandonCluster(int32_t TransformIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster"));
    struct Params_NetAbandonCluster {
        int32_t TransformIndex; // 0x0
    }; // Size: 0x4
    Params_NetAbandonCluster params{};
    params.TransformIndex = (int32_t)TransformIndex;
    ProcessEvent(func, &params);
}
void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField"));
    struct Params_ApplyPhysicsField {
        bool Enabled; // 0x0
        EGeometryCollectionPhysicsTypeEnum Target; // 0x1
        char pad_2[0x6];
        UFieldSystemMetaData* MetaData; // 0x8
        UFieldNodeBase* Field; // 0x10
    }; // Size: 0x18
    Params_ApplyPhysicsField params{};
    params.Enabled = (bool)Enabled;
    params.Target = (EGeometryCollectionPhysicsTypeEnum)Target;
    params.MetaData = (UFieldSystemMetaData*)MetaData;
    params.Field = (UFieldNodeBase*)Field;
    ProcessEvent(func, &params);
}
void UGeometryCollectionComponent::ApplyKinematicField(float Radius, FVector Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField"));
    struct Params_ApplyKinematicField {
        float Radius; // 0x0
        FVector Position; // 0x4
    }; // Size: 0x10
    Params_ApplyKinematicField params{};
    params.Radius = (float)Radius;
    params.Position = (FVector)Position;
    ProcessEvent(func, &params);
}
