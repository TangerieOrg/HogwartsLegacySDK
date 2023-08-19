#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "SocialSemanticIDs.hpp"
#include "URPGAbilityEventListener_Base.hpp"
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class URPGAbilityEventListener_ReduceCooldownOnDamage : public URPGAbilityEventListener_Base {
public:
    FRuntimeFloatCurve TimePerDamage; // 0x28
    bool bCheckSpellGroup; // 0xb0
    SocialSemanticIDs SpellGroupName; // 0xb1
    char pad_b2[0x6];
    static URPGAbilityEventListener_ReduceCooldownOnDamage* StaticClass();
    void OnDamageReceived(AActor* Target, AActor* Instigator, float Damage, FHitResult& Hit);
}; // Size: 0xb8
#pragma pack(pop)
