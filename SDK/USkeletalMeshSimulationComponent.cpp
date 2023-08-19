#include "AChaosSolverActor.hpp"
#include "ECollisionTypeEnum.hpp"
#include "EInitialVelocityTypeEnum.hpp"
#include "EObjectStateTypeEnum.hpp"
#include "FChaosPhysicsCollisionInfo.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UChaosPhysicalMaterial.hpp"
#include "UFunction.hpp"
#include "UPhysicsAsset.hpp"
#include "USkeletalMeshSimulationComponent.hpp"
USkeletalMeshSimulationComponent* USkeletalMeshSimulationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCollectionEngine.SkeletalMeshSimulationComponent");
    return (USkeletalMeshSimulationComponent*)res;
}
void USkeletalMeshSimulationComponent::ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision"));
    struct Params_ReceivePhysicsCollision {
        FChaosPhysicsCollisionInfo CollisionInfo; // 0x0
    }; // Size: 0x70
    Params_ReceivePhysicsCollision params{};
    params.CollisionInfo = (FChaosPhysicsCollisionInfo)CollisionInfo;
    ProcessEvent(func, &params);
    CollisionInfo = params.CollisionInfo;
}
