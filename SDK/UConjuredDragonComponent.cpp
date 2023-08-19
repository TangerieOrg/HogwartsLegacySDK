#include "AActor.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UConjuredDragonComponent.hpp"
#include "UFunction.hpp"
void UConjuredDragonComponent::HeadTrackActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjuredDragonComponent.HeadTrackActor"));
    struct Params_HeadTrackActor {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_HeadTrackActor params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
UConjuredDragonComponent* UConjuredDragonComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjuredDragonComponent");
    return (UConjuredDragonComponent*)res;
}
void UConjuredDragonComponent::ApproachVector(FVector& Out, FVector& curr, FVector& Dest, float Rate, float dt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjuredDragonComponent.ApproachVector"));
    struct Params_ApproachVector {
        FVector Out; // 0x0
        FVector curr; // 0xc
        FVector Dest; // 0x18
        float Rate; // 0x24
        float dt; // 0x28
    }; // Size: 0x2c
    Params_ApproachVector params{};
    params.Out = (FVector)Out;
    params.curr = (FVector)curr;
    params.Dest = (FVector)Dest;
    params.Rate = (float)Rate;
    params.dt = (float)dt;
    ProcessEvent(func, &params);
    Out = params.Out;
    curr = params.curr;
    Dest = params.Dest;
}
void UConjuredDragonComponent::EndEncounter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjuredDragonComponent.EndEncounter"));
    struct Params_EndEncounter {
    }; // Size: 0x0
    Params_EndEncounter params{};
    ProcessEvent(func, &params);
}
void UConjuredDragonComponent::BeginEncounter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjuredDragonComponent.BeginEncounter"));
    struct Params_BeginEncounter {
    }; // Size: 0x0
    Params_BeginEncounter params{};
    ProcessEvent(func, &params);
}
float UConjuredDragonComponent::ApproachScalar(float curr, float Dest, float Rate, float dt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjuredDragonComponent.ApproachScalar"));
    struct Params_ApproachScalar {
        float curr; // 0x0
        float Dest; // 0x4
        float Rate; // 0x8
        float dt; // 0xc
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_ApproachScalar params{};
    params.curr = (float)curr;
    params.Dest = (float)Dest;
    params.Rate = (float)Rate;
    params.dt = (float)dt;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
