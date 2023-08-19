#include "AActor.hpp"
#include "APhoenixBudgetedActor.hpp"
#include "APropOwl.hpp"
#include "ASpellTool.hpp"
#include "FHitResult.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FVector.hpp"
#include "UAnimationComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UPropOwl_AnimInstance.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USpellToolRecord.hpp"
void APropOwl::StartReaction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PropOwl.StartReaction"));
    struct Params_StartReaction {
    }; // Size: 0x0
    Params_StartReaction params{};
    ProcessEvent(func, &params);
}
APropOwl* APropOwl::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PropOwl");
    return (APropOwl*)res;
}
void APropOwl::EndReaction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PropOwl.EndReaction"));
    struct Params_EndReaction {
    }; // Size: 0x0
    Params_EndReaction params{};
    ProcessEvent(func, &params);
}
void APropOwl::OnHitBySpell(ASpellTool* SpellTool, AActor* InInstigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PropOwl.OnHitBySpell"));
    struct Params_OnHitBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* InInstigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FHitResult Hit; // 0x20
        FVector ImpactDirection; // 0xa8
    }; // Size: 0xb4
    Params_OnHitBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.InInstigator = (AActor*)InInstigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    Hit = params.Hit;
    ImpactDirection = params.ImpactDirection;
}
