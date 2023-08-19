#include "AActor.hpp"
#include "AExplosiveBarrel.hpp"
#include "AWorldObject.hpp"
#include "EDrawDebugTrace\Type.hpp"
#include "EObjectTypeQuery.hpp"
#include "ERadialImpulseFalloff.hpp"
#include "FGameplayTagContainer.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UStaticMeshComponent.hpp"
AExplosiveBarrel* AExplosiveBarrel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ExplosiveBarrel");
    return (AExplosiveBarrel*)res;
}
bool AExplosiveBarrel::SphereOverlap(TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplosiveBarrel.SphereOverlap"));
    struct Params_SphereOverlap {
        TArray<AActor*> OutActors; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SphereOverlap params{};
    params.OutActors = (TArray<AActor*>)OutActors;
    ProcessEvent(func, &params);
    OutActors = params.OutActors;
    return (bool)params.ReturnValue;
}
void AExplosiveBarrel::ExplodeEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplosiveBarrel.ExplodeEnd"));
    struct Params_ExplodeEnd {
    }; // Size: 0x0
    Params_ExplodeEnd params{};
    ProcessEvent(func, &params);
}
void AExplosiveBarrel::SortAffectedActors(TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplosiveBarrel.SortAffectedActors"));
    struct Params_SortAffectedActors {
        TArray<AActor*> OutActors; // 0x0
    }; // Size: 0x10
    Params_SortAffectedActors params{};
    params.OutActors = (TArray<AActor*>)OutActors;
    ProcessEvent(func, &params);
    OutActors = params.OutActors;
}
void AExplosiveBarrel::KillBarrel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplosiveBarrel.KillBarrel"));
    struct Params_KillBarrel {
    }; // Size: 0x0
    Params_KillBarrel params{};
    ProcessEvent(func, &params);
}
void AExplosiveBarrel::HitByBombarda() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplosiveBarrel.HitByBombarda"));
    struct Params_HitByBombarda {
    }; // Size: 0x0
    Params_HitByBombarda params{};
    ProcessEvent(func, &params);
}
float AExplosiveBarrel::GetExplosionVFXScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplosiveBarrel.GetExplosionVFXScale"));
    struct Params_GetExplosionVFXScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetExplosionVFXScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void AExplosiveBarrel::ExplodeStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplosiveBarrel.ExplodeStart"));
    struct Params_ExplodeStart {
    }; // Size: 0x0
    Params_ExplodeStart params{};
    ProcessEvent(func, &params);
}
bool AExplosiveBarrel::ExplodeDamage(AActor* DamageActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplosiveBarrel.ExplodeDamage"));
    struct Params_ExplodeDamage {
        AActor* DamageActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ExplodeDamage params{};
    params.DamageActor = (AActor*)DamageActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AExplosiveBarrel::ApplyOnFireDoT(AActor* Target, AActor* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExplosiveBarrel.ApplyOnFireDoT"));
    struct Params_ApplyOnFireDoT {
        AActor* Target; // 0x0
        AActor* InInstigator; // 0x8
    }; // Size: 0x10
    Params_ApplyOnFireDoT params{};
    params.Target = (AActor*)Target;
    params.InInstigator = (AActor*)InInstigator;
    ProcessEvent(func, &params);
}
