#include "AActor.hpp"
#include "FHitResult.hpp"
#include "UAkAudioEvent.hpp"
#include "UBillboardComponent.hpp"
#include "UBoxComponent.hpp"
#include "UCurseComponent.hpp"
#include "UFunction.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USpellToolRecord.hpp"
void UCurseComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CurseComponent.OnOverlapEnd"));
    struct Params_OnOverlapEnd {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEnd params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
UCurseComponent* UCurseComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CurseComponent");
    return (UCurseComponent*)res;
}
void UCurseComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CurseComponent.OnOverlapBegin"));
    struct Params_OnOverlapBegin {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBegin params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void UCurseComponent::UncurseEnds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CurseComponent.UncurseEnds"));
    struct Params_UncurseEnds {
    }; // Size: 0x0
    Params_UncurseEnds params{};
    ProcessEvent(func, &params);
}
bool UCurseComponent::Uncurse(int32_t UncurseLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CurseComponent.Uncurse"));
    struct Params_Uncurse {
        int32_t UncurseLevel; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_Uncurse params{};
    params.UncurseLevel = (int32_t)UncurseLevel;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCurseComponent::IsCursed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CurseComponent.IsCursed"));
    struct Params_IsCursed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCursed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCurseComponent::ActivateCurseWithBuildup(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CurseComponent.ActivateCurseWithBuildup"));
    struct Params_ActivateCurseWithBuildup {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_ActivateCurseWithBuildup params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
