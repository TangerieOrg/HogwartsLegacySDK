#include "AActor.hpp"
#include "AMunitionType_AOESpell.hpp"
#include "AMunitionType_Base.hpp"
#include "ATwisterMixtureEffect.hpp"
#include "FGameplayTag.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USphereComponent.hpp"
ATwisterMixtureEffect* ATwisterMixtureEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TwisterMixtureEffect");
    return (ATwisterMixtureEffect*)res;
}
void ATwisterMixtureEffect::BeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TwisterMixtureEffect.BeginPlay"));
    struct Params_BeginPlay {
    }; // Size: 0x0
    Params_BeginPlay params{};
    ProcessEvent(func, &params);
}
void ATwisterMixtureEffect::Tick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TwisterMixtureEffect.Tick"));
    struct Params_Tick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_Tick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ATwisterMixtureEffect::BeginPull() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TwisterMixtureEffect.BeginPull"));
    struct Params_BeginPull {
    }; // Size: 0x0
    Params_BeginPull params{};
    ProcessEvent(func, &params);
}
void ATwisterMixtureEffect::OnOverlapEndStoppingSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TwisterMixtureEffect.OnOverlapEndStoppingSphere"));
    struct Params_OnOverlapEndStoppingSphere {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEndStoppingSphere params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ATwisterMixtureEffect::OnCharacterLand(FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TwisterMixtureEffect.OnCharacterLand"));
    struct Params_OnCharacterLand {
        FHitResult Hit; // 0x0
    }; // Size: 0x88
    Params_OnCharacterLand params{};
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void ATwisterMixtureEffect::Cleanup(AMunitionType_Base* MunitionInstance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TwisterMixtureEffect.Cleanup"));
    struct Params_Cleanup {
        AMunitionType_Base* MunitionInstance; // 0x0
    }; // Size: 0x8
    Params_Cleanup params{};
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    ProcessEvent(func, &params);
}
