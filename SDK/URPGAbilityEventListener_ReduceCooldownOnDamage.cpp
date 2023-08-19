#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "SocialSemanticIDs.hpp"
#include "UFunction.hpp"
#include "URPGAbilityEventListener_Base.hpp"
#include "URPGAbilityEventListener_ReduceCooldownOnDamage.hpp"
URPGAbilityEventListener_ReduceCooldownOnDamage* URPGAbilityEventListener_ReduceCooldownOnDamage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_ReduceCooldownOnDamage");
    return (URPGAbilityEventListener_ReduceCooldownOnDamage*)res;
}
void URPGAbilityEventListener_ReduceCooldownOnDamage::OnDamageReceived(AActor* Target, AActor* Instigator, float Damage, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityEventListener_ReduceCooldownOnDamage.OnDamageReceived"));
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
