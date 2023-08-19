#include "AActor.hpp"
#include "APhysicsConstraintActor.hpp"
#include "ASuperSlamTarget.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UCurveVector.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USuperSlamFinisherComponent.hpp"
USuperSlamFinisherComponent* USuperSlamFinisherComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SuperSlamFinisherComponent");
    return (USuperSlamFinisherComponent*)res;
}
void USuperSlamFinisherComponent::HandleSkeletalMeshComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SuperSlamFinisherComponent.HandleSkeletalMeshComponentHit"));
    struct Params_HandleSkeletalMeshComponentHit {
        UPrimitiveComponent* HitComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        FVector NormalImpulse; // 0x18
        FHitResult Hit; // 0x24
    }; // Size: 0xac
    Params_HandleSkeletalMeshComponentHit params{};
    params.HitComponent = (UPrimitiveComponent*)HitComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
