#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UClass.hpp"
#include "UFierySendComponent.hpp"
#include "UFunction.hpp"
#include "UMultiFX2Asset.hpp"
void UFierySendComponent::AddFierySendComponent(AActor* Actor, AActor* InInstigator, UMultiFX2Asset* InHitFx, UClass* InMunitionClass, bool bInDestroyOnHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FierySendComponent.AddFierySendComponent"));
    struct Params_AddFierySendComponent {
        AActor* Actor; // 0x0
        AActor* InInstigator; // 0x8
        UMultiFX2Asset* InHitFx; // 0x10
        UClass* InMunitionClass; // 0x18
        bool bInDestroyOnHit; // 0x20
    }; // Size: 0x21
    Params_AddFierySendComponent params{};
    params.Actor = (AActor*)Actor;
    params.InInstigator = (AActor*)InInstigator;
    params.InHitFx = (UMultiFX2Asset*)InHitFx;
    params.InMunitionClass = (UClass*)InMunitionClass;
    params.bInDestroyOnHit = (bool)bInDestroyOnHit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UFierySendComponent* UFierySendComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FierySendComponent");
    return (UFierySendComponent*)res;
}
void UFierySendComponent::HandleActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FierySendComponent.HandleActorHit"));
    struct Params_HandleActorHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_HandleActorHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
