#include "AActor.hpp"
#include "AWandTool.hpp"
#include "FHitResult.hpp"
#include "FRPGHitTracker.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "HitTrackerTypes.hpp"
#include "UFunction.hpp"
#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnTargetHitWithSpells.hpp"
URPGAbilityEventListener_OnTargetHitWithSpells* URPGAbilityEventListener_OnTargetHitWithSpells::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnTargetHitWithSpells");
    return (URPGAbilityEventListener_OnTargetHitWithSpells*)res;
}
void URPGAbilityEventListener_OnTargetHitWithSpells::OnDamageReceived(AActor* Target, AActor* Instigator, float Damage, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityEventListener_OnTargetHitWithSpells.OnDamageReceived"));
    struct Params_OnDamageReceived {
        AActor* Target; // 0x0
        AActor* Instigator; // 0x8
        float Damage; // 0x10
        FHitResult Hit; // 0x14
    }; // Size: 0x9c
    Params_OnDamageReceived params{};
    params.Target = (AActor*)Target;
    params.Instigator = (AActor*)Instigator;
    params.Damage = (float)Damage;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
