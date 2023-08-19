#include "AChaosSolverActor.hpp"
#include "ECollisionTypeEnum.hpp"
#include "EImplicitTypeEnum.hpp"
#include "EInitialVelocityTypeEnum.hpp"
#include "EObjectStateTypeEnum.hpp"
#include "FChaosPhysicsCollisionInfo.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UChaosPhysicalMaterial.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "UStaticMeshSimulationComponent.hpp"
UStaticMeshSimulationComponent* UStaticMeshSimulationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCollectionEngine.StaticMeshSimulationComponent");
    return (UStaticMeshSimulationComponent*)res;
}
void UStaticMeshSimulationComponent::ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision"));
    struct Params_ReceivePhysicsCollision {
        FChaosPhysicsCollisionInfo CollisionInfo; // 0x0
    }; // Size: 0x70
    Params_ReceivePhysicsCollision params{};
    params.CollisionInfo = (FChaosPhysicsCollisionInfo)CollisionInfo;
    ProcessEvent(func, &params);
    CollisionInfo = params.CollisionInfo;
}
void UStaticMeshSimulationComponent::ForceRecreatePhysicsState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState"));
    struct Params_ForceRecreatePhysicsState {
    }; // Size: 0x0
    Params_ForceRecreatePhysicsState params{};
    ProcessEvent(func, &params);
}
