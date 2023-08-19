#include "AActor.hpp"
#include "AChannelingSpellTool.hpp"
#include "AWingardiumBulletTimeSpellTool.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FHitResult.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
#include "UParticleSystemComponent.hpp"
#include "UPrimitiveComponent.hpp"
AWingardiumBulletTimeSpellTool* AWingardiumBulletTimeSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WingardiumBulletTimeSpellTool");
    return (AWingardiumBulletTimeSpellTool*)res;
}
void AWingardiumBulletTimeSpellTool::AdjustWingardiumRotation(FVector InDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WingardiumBulletTimeSpellTool.AdjustWingardiumRotation"));
    struct Params_AdjustWingardiumRotation {
        FVector InDirection; // 0x0
    }; // Size: 0xc
    Params_AdjustWingardiumRotation params{};
    params.InDirection = (FVector)InDirection;
    ProcessEvent(func, &params);
}
void AWingardiumBulletTimeSpellTool::OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WingardiumBulletTimeSpellTool.OnComponentOverlapEnd"));
    struct Params_OnComponentOverlapEnd {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnComponentOverlapEnd params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void AWingardiumBulletTimeSpellTool::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WingardiumBulletTimeSpellTool.OnActorHit"));
    struct Params_OnActorHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_OnActorHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void AWingardiumBulletTimeSpellTool::OnActorEndPlay(AActor* DestroyedActor, EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WingardiumBulletTimeSpellTool.OnActorEndPlay"));
    struct Params_OnActorEndPlay {
        AActor* DestroyedActor; // 0x0
        EEndPlayReason::Type EndPlayReason; // 0x8
    }; // Size: 0x9
    Params_OnActorEndPlay params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void AWingardiumBulletTimeSpellTool::BeamFadeOut(UParticleSystemComponent* BeamEmitter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WingardiumBulletTimeSpellTool.BeamFadeOut"));
    struct Params_BeamFadeOut {
        UParticleSystemComponent* BeamEmitter; // 0x0
    }; // Size: 0x8
    Params_BeamFadeOut params{};
    params.BeamEmitter = (UParticleSystemComponent*)BeamEmitter;
    ProcessEvent(func, &params);
}
void AWingardiumBulletTimeSpellTool::BeamFadeIn(UParticleSystemComponent* BeamEmitter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WingardiumBulletTimeSpellTool.BeamFadeIn"));
    struct Params_BeamFadeIn {
        UParticleSystemComponent* BeamEmitter; // 0x0
    }; // Size: 0x8
    Params_BeamFadeIn params{};
    params.BeamEmitter = (UParticleSystemComponent*)BeamEmitter;
    ProcessEvent(func, &params);
}
void AWingardiumBulletTimeSpellTool::AdjustWingardiumHeight(float Adjust) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WingardiumBulletTimeSpellTool.AdjustWingardiumHeight"));
    struct Params_AdjustWingardiumHeight {
        float Adjust; // 0x0
    }; // Size: 0x4
    Params_AdjustWingardiumHeight params{};
    params.Adjust = (float)Adjust;
    ProcessEvent(func, &params);
}
void AWingardiumBulletTimeSpellTool::AdjustWingardiumDistance(float Adjust) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WingardiumBulletTimeSpellTool.AdjustWingardiumDistance"));
    struct Params_AdjustWingardiumDistance {
        float Adjust; // 0x0
    }; // Size: 0x4
    Params_AdjustWingardiumDistance params{};
    params.Adjust = (float)Adjust;
    ProcessEvent(func, &params);
}
