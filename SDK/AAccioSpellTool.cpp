#include "AAccioSpellTool.hpp"
#include "AActor.hpp"
#include "AChannelingSpellTool.hpp"
#include "AWingardiumBulletTimeSpellTool.hpp"
#include "FAccioDampingSphere.hpp"
#include "FAccioLevelData.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USpellToolRecord.hpp"
void AAccioSpellTool::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AccioSpellTool.OnActorHit"));
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
AAccioSpellTool* AAccioSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AccioSpellTool");
    return (AAccioSpellTool*)res;
}
void AAccioSpellTool::StartAccioBall() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AccioSpellTool.StartAccioBall"));
    struct Params_StartAccioBall {
    }; // Size: 0x0
    Params_StartAccioBall params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AAccioSpellTool::PullCharacter(FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AccioSpellTool.PullCharacter"));
    struct Params_PullCharacter {
        FHitResult HitResult; // 0x0
    }; // Size: 0x88
    Params_PullCharacter params{};
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
}
void AAccioSpellTool::EndAccioBall() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AccioSpellTool.EndAccioBall"));
    struct Params_EndAccioBall {
    }; // Size: 0x0
    Params_EndAccioBall params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
