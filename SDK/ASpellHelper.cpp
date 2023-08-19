#include "AActor.hpp"
#include "AMunitionType_Base.hpp"
#include "ASpellHelper.hpp"
#include "ASpellTool.hpp"
#include "EEnemyShieldBreaker.hpp"
#include "EImpactTypes.hpp"
#include "ERadialImpulseFalloff.hpp"
#include "FCastSpellData.hpp"
#include "FDamageInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMultiFX2Asset.hpp"
#include "UParticleSystem.hpp"
#include "UPrimitiveComponent.hpp"
#include "URadialForceData.hpp"
#include "USceneComponent.hpp"
#include "USpellToolRecord.hpp"
#include "UToolSetComponent.hpp"
#include "UVelocityTrackerComponent.hpp"
ASpellHelper* ASpellHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellHelper");
    return (ASpellHelper*)res;
}
ASpellTool* ASpellHelper::GetSpellTool(USpellToolRecord* InSpellToolRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.GetSpellTool"));
    struct Params_GetSpellTool {
        USpellToolRecord* InSpellToolRecord; // 0x0
        ASpellTool* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSpellTool params{};
    params.InSpellToolRecord = (USpellToolRecord*)InSpellToolRecord;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ASpellTool*)params.ReturnValue;
}
void ASpellHelper::SetVelocityTrackerMinDamage(AActor* InTarget, float MinDamageDealt, float MinDamageDealtCharacter, float MixDamageTaken, float MixDamageTakenCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.SetVelocityTrackerMinDamage"));
    struct Params_SetVelocityTrackerMinDamage {
        AActor* InTarget; // 0x0
        float MinDamageDealt; // 0x8
        float MinDamageDealtCharacter; // 0xc
        float MixDamageTaken; // 0x10
        float MixDamageTakenCharacter; // 0x14
    }; // Size: 0x18
    Params_SetVelocityTrackerMinDamage params{};
    params.InTarget = (AActor*)InTarget;
    params.MinDamageDealt = (float)MinDamageDealt;
    params.MinDamageDealtCharacter = (float)MinDamageDealtCharacter;
    params.MixDamageTaken = (float)MixDamageTaken;
    params.MixDamageTakenCharacter = (float)MixDamageTakenCharacter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::ApplySpellEffectFromPlayer(AActor* Target, USpellToolRecord* SpellToolRecord, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.ApplySpellEffectFromPlayer"));
    struct Params_ApplySpellEffectFromPlayer {
        AActor* Target; // 0x0
        USpellToolRecord* SpellToolRecord; // 0x8
        float Duration; // 0x10
    }; // Size: 0x14
    Params_ApplySpellEffectFromPlayer params{};
    params.Target = (AActor*)Target;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::UpdateSpellCast() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.UpdateSpellCast"));
    struct Params_UpdateSpellCast {
    }; // Size: 0x0
    Params_UpdateSpellCast params{};
    ProcessEvent(func, &params);
}
void ASpellHelper::TriggerReaction(AActor* TargetActor, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, FVector SourceLocation, AActor* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.TriggerReaction"));
    struct Params_TriggerReaction {
        AActor* TargetActor; // 0x0
        FGameplayTagContainer InMunitionTagContainer; // 0x8
        TArray<UInteractionArchitectAsset*> InMunitionDataAssets; // 0x28
        FVector SourceLocation; // 0x38
        char pad_44[0x4];
        AActor* InInstigator; // 0x48
    }; // Size: 0x50
    Params_TriggerReaction params{};
    params.TargetActor = (AActor*)TargetActor;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    params.InMunitionDataAssets = (TArray<UInteractionArchitectAsset*>)InMunitionDataAssets;
    params.SourceLocation = (FVector)SourceLocation;
    params.InInstigator = (AActor*)InInstigator;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::ApplyRadialForceToComponent(UPrimitiveComponent* InComp, FVector Location, float Impulse, float MassScaledImpulse, float Radius, ERadialImpulseFalloff Falloff, bool bVelChange, float Delay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.ApplyRadialForceToComponent"));
    struct Params_ApplyRadialForceToComponent {
        UPrimitiveComponent* InComp; // 0x0
        FVector Location; // 0x8
        float Impulse; // 0x14
        float MassScaledImpulse; // 0x18
        float Radius; // 0x1c
        ERadialImpulseFalloff Falloff; // 0x20
        bool bVelChange; // 0x21
        char pad_22[0x2];
        float Delay; // 0x24
    }; // Size: 0x28
    Params_ApplyRadialForceToComponent params{};
    params.InComp = (UPrimitiveComponent*)InComp;
    params.Location = (FVector)Location;
    params.Impulse = (float)Impulse;
    params.MassScaledImpulse = (float)MassScaledImpulse;
    params.Radius = (float)Radius;
    params.Falloff = (ERadialImpulseFalloff)Falloff;
    params.bVelChange = (bool)bVelChange;
    params.Delay = (float)Delay;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool ASpellHelper::SetOnFire(AActor* Target, AActor* InInstigator, float Amount, FVector Location, float CharacterDuration, float OverrideDamagePerSecond) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.SetOnFire"));
    struct Params_SetOnFire {
        AActor* Target; // 0x0
        AActor* InInstigator; // 0x8
        float Amount; // 0x10
        FVector Location; // 0x14
        float CharacterDuration; // 0x20
        float OverrideDamagePerSecond; // 0x24
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_SetOnFire params{};
    params.Target = (AActor*)Target;
    params.InInstigator = (AActor*)InInstigator;
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    params.CharacterDuration = (float)CharacterDuration;
    params.OverrideDamagePerSecond = (float)OverrideDamagePerSecond;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASpellHelper::SetVelocityTrackerMaxDamage(AActor* InTarget, float MaxDamageDealt, float MaxDamageDealtCharacter, float MaxDamageTaken, float MaxDamageTakenCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.SetVelocityTrackerMaxDamage"));
    struct Params_SetVelocityTrackerMaxDamage {
        AActor* InTarget; // 0x0
        float MaxDamageDealt; // 0x8
        float MaxDamageDealtCharacter; // 0xc
        float MaxDamageTaken; // 0x10
        float MaxDamageTakenCharacter; // 0x14
    }; // Size: 0x18
    Params_SetVelocityTrackerMaxDamage params{};
    params.InTarget = (AActor*)InTarget;
    params.MaxDamageDealt = (float)MaxDamageDealt;
    params.MaxDamageDealtCharacter = (float)MaxDamageDealtCharacter;
    params.MaxDamageTaken = (float)MaxDamageTaken;
    params.MaxDamageTakenCharacter = (float)MaxDamageTakenCharacter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::AddDeflectionComponent(AActor* InTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.AddDeflectionComponent"));
    struct Params_AddDeflectionComponent {
        AActor* InTarget; // 0x0
    }; // Size: 0x8
    Params_AddDeflectionComponent params{};
    params.InTarget = (AActor*)InTarget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::TriggerNpcSpellResponse(AActor* InTarget, AActor* InInstigator, FVector& Location, float Radius, bool bAlwaysUseRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.TriggerNpcSpellResponse"));
    struct Params_TriggerNpcSpellResponse {
        AActor* InTarget; // 0x0
        AActor* InInstigator; // 0x8
        FVector Location; // 0x10
        float Radius; // 0x1c
        bool bAlwaysUseRadius; // 0x20
    }; // Size: 0x21
    Params_TriggerNpcSpellResponse params{};
    params.InTarget = (AActor*)InTarget;
    params.InInstigator = (AActor*)InInstigator;
    params.Location = (FVector)Location;
    params.Radius = (float)Radius;
    params.bAlwaysUseRadius = (bool)bAlwaysUseRadius;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Location = params.Location;
}
bool ASpellHelper::SpellWillKillTarget(AActor* InTarget, AActor* InInstigator, USpellToolRecord* InSpellToolRecord, float& OutDamage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.SpellWillKillTarget"));
    struct Params_SpellWillKillTarget {
        AActor* InTarget; // 0x0
        AActor* InInstigator; // 0x8
        USpellToolRecord* InSpellToolRecord; // 0x10
        float OutDamage; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_SpellWillKillTarget params{};
    params.InTarget = (AActor*)InTarget;
    params.InInstigator = (AActor*)InInstigator;
    params.InSpellToolRecord = (USpellToolRecord*)InSpellToolRecord;
    params.OutDamage = (float)OutDamage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutDamage = params.OutDamage;
    return (bool)params.ReturnValue;
}
bool ASpellHelper::SetFrozen(AActor* Target, AActor* InInstigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.SetFrozen"));
    struct Params_SetFrozen {
        AActor* Target; // 0x0
        AActor* InInstigator; // 0x8
        FVector Location; // 0x10
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_SetFrozen params{};
    params.Target = (AActor*)Target;
    params.InInstigator = (AActor*)InInstigator;
    params.Location = (FVector)Location;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASpellHelper::Repair(AActor* Target, AActor* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.Repair"));
    struct Params_Repair {
        AActor* Target; // 0x0
        AActor* InInstigator; // 0x8
    }; // Size: 0x10
    Params_Repair params{};
    params.Target = (AActor*)Target;
    params.InInstigator = (AActor*)InInstigator;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool ASpellHelper::KillTarget(AActor* InTarget, AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, float InForce, float InDestructionForce, float InRadialDestructionForce, UParticleSystem* InDestroyPieceVFX, float InDestroyPieceVFXRadius, bool bSkipTakeAKnee, bool InNoReaction, bool bAlwaysKill, bool bNoCurseReflection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.KillTarget"));
    struct Params_KillTarget {
        AActor* InTarget; // 0x0
        AActor* InInstigator; // 0x8
        FGameplayTagContainer InMunitionTagContainer; // 0x10
        TArray<UInteractionArchitectAsset*> InMunitionDataAssets; // 0x30
        float InForce; // 0x40
        float InDestructionForce; // 0x44
        float InRadialDestructionForce; // 0x48
        char pad_4c[0x4];
        UParticleSystem* InDestroyPieceVFX; // 0x50
        float InDestroyPieceVFXRadius; // 0x58
        bool bSkipTakeAKnee; // 0x5c
        bool InNoReaction; // 0x5d
        bool bAlwaysKill; // 0x5e
        bool bNoCurseReflection; // 0x5f
        bool ReturnValue; // 0x60
    }; // Size: 0x61
    Params_KillTarget params{};
    params.InTarget = (AActor*)InTarget;
    params.InInstigator = (AActor*)InInstigator;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    params.InMunitionDataAssets = (TArray<UInteractionArchitectAsset*>)InMunitionDataAssets;
    params.InForce = (float)InForce;
    params.InDestructionForce = (float)InDestructionForce;
    params.InRadialDestructionForce = (float)InRadialDestructionForce;
    params.InDestroyPieceVFX = (UParticleSystem*)InDestroyPieceVFX;
    params.InDestroyPieceVFXRadius = (float)InDestroyPieceVFXRadius;
    params.bSkipTakeAKnee = (bool)bSkipTakeAKnee;
    params.InNoReaction = (bool)InNoReaction;
    params.bAlwaysKill = (bool)bAlwaysKill;
    params.bNoCurseReflection = (bool)bNoCurseReflection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASpellHelper::RemoveSpellEffect(AActor* Target, UClass* InRemoveEffect) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.RemoveSpellEffect"));
    struct Params_RemoveSpellEffect {
        AActor* Target; // 0x0
        UClass* InRemoveEffect; // 0x8
    }; // Size: 0x10
    Params_RemoveSpellEffect params{};
    params.Target = (AActor*)Target;
    params.InRemoveEffect = (UClass*)InRemoveEffect;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::RemoveLeviosoCountTracking(AActor* InOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.RemoveLeviosoCountTracking"));
    struct Params_RemoveLeviosoCountTracking {
        AActor* InOwner; // 0x0
    }; // Size: 0x8
    Params_RemoveLeviosoCountTracking params{};
    params.InOwner = (AActor*)InOwner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::RemoveFiniteCountTracking(AActor* InOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.RemoveFiniteCountTracking"));
    struct Params_RemoveFiniteCountTracking {
        AActor* InOwner; // 0x0
    }; // Size: 0x8
    Params_RemoveFiniteCountTracking params{};
    params.InOwner = (AActor*)InOwner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::RemoveDeflectionComponent(AActor* InTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.RemoveDeflectionComponent"));
    struct Params_RemoveDeflectionComponent {
        AActor* InTarget; // 0x0
    }; // Size: 0x8
    Params_RemoveDeflectionComponent params{};
    params.InTarget = (AActor*)InTarget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
AMunitionType_Base* ASpellHelper::FireMunition(USpellToolRecord* SpellToolRecord, FVector SourceLocation, FVector TargetLocation, AActor* InMunitionOwner, AActor* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.FireMunition"));
    struct Params_FireMunition {
        USpellToolRecord* SpellToolRecord; // 0x0
        FVector SourceLocation; // 0x8
        FVector TargetLocation; // 0x14
        AActor* InMunitionOwner; // 0x20
        AActor* InInstigator; // 0x28
        AMunitionType_Base* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_FireMunition params{};
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SourceLocation = (FVector)SourceLocation;
    params.TargetLocation = (FVector)TargetLocation;
    params.InMunitionOwner = (AActor*)InMunitionOwner;
    params.InInstigator = (AActor*)InInstigator;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AMunitionType_Base*)params.ReturnValue;
}
void ASpellHelper::PreloadSpell(USpellToolRecord* SpellToolRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.PreloadSpell"));
    struct Params_PreloadSpell {
        USpellToolRecord* SpellToolRecord; // 0x0
    }; // Size: 0x8
    Params_PreloadSpell params{};
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::ObjectCanDamagePlayer(AActor* InTarget, AActor* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.ObjectCanDamagePlayer"));
    struct Params_ObjectCanDamagePlayer {
        AActor* InTarget; // 0x0
        AActor* InInstigator; // 0x8
    }; // Size: 0x10
    Params_ObjectCanDamagePlayer params{};
    params.InTarget = (AActor*)InTarget;
    params.InInstigator = (AActor*)InInstigator;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool ASpellHelper::Kill(AActor* Target, AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, FHitResult& HitResult, float InDestructionForce, float InRadialDestructionForce, UParticleSystem* InDestroyPieceVFX, float InDestroyPieceVFXRadius, bool bSkipTakeAKnee, bool InNoReaction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.Kill"));
    struct Params_Kill {
        AActor* Target; // 0x0
        AActor* InInstigator; // 0x8
        FGameplayTagContainer InMunitionTagContainer; // 0x10
        TArray<UInteractionArchitectAsset*> InMunitionDataAssets; // 0x30
        FHitResult HitResult; // 0x40
        float InDestructionForce; // 0xc8
        float InRadialDestructionForce; // 0xcc
        UParticleSystem* InDestroyPieceVFX; // 0xd0
        float InDestroyPieceVFXRadius; // 0xd8
        bool bSkipTakeAKnee; // 0xdc
        bool InNoReaction; // 0xdd
        bool ReturnValue; // 0xde
    }; // Size: 0xdf
    Params_Kill params{};
    params.Target = (AActor*)Target;
    params.InInstigator = (AActor*)InInstigator;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    params.InMunitionDataAssets = (TArray<UInteractionArchitectAsset*>)InMunitionDataAssets;
    params.HitResult = (FHitResult)HitResult;
    params.InDestructionForce = (float)InDestructionForce;
    params.InRadialDestructionForce = (float)InRadialDestructionForce;
    params.InDestroyPieceVFX = (UParticleSystem*)InDestroyPieceVFX;
    params.InDestroyPieceVFXRadius = (float)InDestroyPieceVFXRadius;
    params.bSkipTakeAKnee = (bool)bSkipTakeAKnee;
    params.InNoReaction = (bool)InNoReaction;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
void ASpellHelper::Heal(AActor* Target, float Health) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.Heal"));
    struct Params_Heal {
        AActor* Target; // 0x0
        float Health; // 0x8
    }; // Size: 0xc
    Params_Heal params{};
    params.Target = (AActor*)Target;
    params.Health = (float)Health;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool ASpellHelper::FinisherWillKillTarget(AActor* InTarget, AActor* InInstigator, float Damage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.FinisherWillKillTarget"));
    struct Params_FinisherWillKillTarget {
        AActor* InTarget; // 0x0
        AActor* InInstigator; // 0x8
        float Damage; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_FinisherWillKillTarget params{};
    params.InTarget = (AActor*)InTarget;
    params.InInstigator = (AActor*)InInstigator;
    params.Damage = (float)Damage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ASpellHelper::DoDamageTarget(AActor* InTarget, AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, FDamageInfo& OutDamageInfo, float InDamage, float InForce, bool bSendImpact, bool bIgnoreDamageThreshold, float InDestructionForce, float InRadialDestructionForce, UParticleSystem* InDestroyPieceVFX, float InDestroyPieceVFXRadius, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker, UAkAudioEvent* SFX, float InDuration, EImpactTypes InImpactType, bool bNoReaction, bool bForceNoReaction, ASpellTool* InSpellTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.DoDamageTarget"));
    struct Params_DoDamageTarget {
        AActor* InTarget; // 0x0
        AActor* InInstigator; // 0x8
        FGameplayTagContainer InMunitionTagContainer; // 0x10
        TArray<UInteractionArchitectAsset*> InMunitionDataAssets; // 0x30
        FDamageInfo OutDamageInfo; // 0x40
        float InDamage; // 0x208
        float InForce; // 0x20c
        bool bSendImpact; // 0x210
        bool bIgnoreDamageThreshold; // 0x211
        char pad_212[0x2];
        float InDestructionForce; // 0x214
        float InRadialDestructionForce; // 0x218
        char pad_21c[0x4];
        UParticleSystem* InDestroyPieceVFX; // 0x220
        float InDestroyPieceVFXRadius; // 0x228
        bool bPlayerShieldBreaker; // 0x22c
        EEnemyShieldBreaker EnemyShieldBreaker; // 0x22d
        char pad_22e[0x2];
        UAkAudioEvent* SFX; // 0x230
        float InDuration; // 0x238
        EImpactTypes InImpactType; // 0x23c
        bool bNoReaction; // 0x23d
        bool bForceNoReaction; // 0x23e
        char pad_23f[0x1];
        ASpellTool* InSpellTool; // 0x240
        bool ReturnValue; // 0x248
    }; // Size: 0x249
    Params_DoDamageTarget params{};
    params.InTarget = (AActor*)InTarget;
    params.InInstigator = (AActor*)InInstigator;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    params.InMunitionDataAssets = (TArray<UInteractionArchitectAsset*>)InMunitionDataAssets;
    params.OutDamageInfo = (FDamageInfo)OutDamageInfo;
    params.InDamage = (float)InDamage;
    params.InForce = (float)InForce;
    params.bSendImpact = (bool)bSendImpact;
    params.bIgnoreDamageThreshold = (bool)bIgnoreDamageThreshold;
    params.InDestructionForce = (float)InDestructionForce;
    params.InRadialDestructionForce = (float)InRadialDestructionForce;
    params.InDestroyPieceVFX = (UParticleSystem*)InDestroyPieceVFX;
    params.InDestroyPieceVFXRadius = (float)InDestroyPieceVFXRadius;
    params.bPlayerShieldBreaker = (bool)bPlayerShieldBreaker;
    params.EnemyShieldBreaker = (EEnemyShieldBreaker)EnemyShieldBreaker;
    params.SFX = (UAkAudioEvent*)SFX;
    params.InDuration = (float)InDuration;
    params.InImpactType = (EImpactTypes)InImpactType;
    params.bNoReaction = (bool)bNoReaction;
    params.bForceNoReaction = (bool)bForceNoReaction;
    params.InSpellTool = (ASpellTool*)InSpellTool;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutDamageInfo = params.OutDamageInfo;
    return (bool)params.ReturnValue;
}
bool ASpellHelper::DoDamageOverTime(AActor* InTarget, AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, FName InDOTType, UMultiFX2Asset* MultiFX2, float InDamagePerSecond, float DurationInSeconds, float UpdateRate, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.DoDamageOverTime"));
    struct Params_DoDamageOverTime {
        AActor* InTarget; // 0x0
        AActor* InInstigator; // 0x8
        FGameplayTagContainer InMunitionTagContainer; // 0x10
        TArray<UInteractionArchitectAsset*> InMunitionDataAssets; // 0x30
        FName InDOTType; // 0x40
        UMultiFX2Asset* MultiFX2; // 0x48
        float InDamagePerSecond; // 0x50
        float DurationInSeconds; // 0x54
        float UpdateRate; // 0x58
        bool bPlayerShieldBreaker; // 0x5c
        EEnemyShieldBreaker EnemyShieldBreaker; // 0x5d
        bool ReturnValue; // 0x5e
    }; // Size: 0x5f
    Params_DoDamageOverTime params{};
    params.InTarget = (AActor*)InTarget;
    params.InInstigator = (AActor*)InInstigator;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    params.InMunitionDataAssets = (TArray<UInteractionArchitectAsset*>)InMunitionDataAssets;
    params.InDOTType = (FName)InDOTType;
    params.MultiFX2 = (UMultiFX2Asset*)MultiFX2;
    params.InDamagePerSecond = (float)InDamagePerSecond;
    params.DurationInSeconds = (float)DurationInSeconds;
    params.UpdateRate = (float)UpdateRate;
    params.bPlayerShieldBreaker = (bool)bPlayerShieldBreaker;
    params.EnemyShieldBreaker = (EEnemyShieldBreaker)EnemyShieldBreaker;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ASpellHelper::DoDamageLocationDirection(AActor* InTarget, AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, FDamageInfo& OutDamageInfo, float InDamage, FVector InLocation, FVector InDirection, float InForce, bool bSendImpact, bool bIgnoreDamageThreshold, float InDestructionForce, float InRadialDestructionForce, UParticleSystem* InDestroyPieceVFX, float InDestroyPieceVFXRadius, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker, UAkAudioEvent* SFX, float InDuration, bool InNoReaction, EImpactTypes InImpactType, bool bForceNoReaction, ASpellTool* InSpellTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.DoDamageLocationDirection"));
    struct Params_DoDamageLocationDirection {
        AActor* InTarget; // 0x0
        AActor* InInstigator; // 0x8
        FGameplayTagContainer InMunitionTagContainer; // 0x10
        TArray<UInteractionArchitectAsset*> InMunitionDataAssets; // 0x30
        FDamageInfo OutDamageInfo; // 0x40
        float InDamage; // 0x208
        FVector InLocation; // 0x20c
        FVector InDirection; // 0x218
        float InForce; // 0x224
        bool bSendImpact; // 0x228
        bool bIgnoreDamageThreshold; // 0x229
        char pad_22a[0x2];
        float InDestructionForce; // 0x22c
        float InRadialDestructionForce; // 0x230
        char pad_234[0x4];
        UParticleSystem* InDestroyPieceVFX; // 0x238
        float InDestroyPieceVFXRadius; // 0x240
        bool bPlayerShieldBreaker; // 0x244
        EEnemyShieldBreaker EnemyShieldBreaker; // 0x245
        char pad_246[0x2];
        UAkAudioEvent* SFX; // 0x248
        float InDuration; // 0x250
        bool InNoReaction; // 0x254
        EImpactTypes InImpactType; // 0x255
        bool bForceNoReaction; // 0x256
        char pad_257[0x1];
        ASpellTool* InSpellTool; // 0x258
        bool ReturnValue; // 0x260
    }; // Size: 0x261
    Params_DoDamageLocationDirection params{};
    params.InTarget = (AActor*)InTarget;
    params.InInstigator = (AActor*)InInstigator;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    params.InMunitionDataAssets = (TArray<UInteractionArchitectAsset*>)InMunitionDataAssets;
    params.OutDamageInfo = (FDamageInfo)OutDamageInfo;
    params.InDamage = (float)InDamage;
    params.InLocation = (FVector)InLocation;
    params.InDirection = (FVector)InDirection;
    params.InForce = (float)InForce;
    params.bSendImpact = (bool)bSendImpact;
    params.bIgnoreDamageThreshold = (bool)bIgnoreDamageThreshold;
    params.InDestructionForce = (float)InDestructionForce;
    params.InRadialDestructionForce = (float)InRadialDestructionForce;
    params.InDestroyPieceVFX = (UParticleSystem*)InDestroyPieceVFX;
    params.InDestroyPieceVFXRadius = (float)InDestroyPieceVFXRadius;
    params.bPlayerShieldBreaker = (bool)bPlayerShieldBreaker;
    params.EnemyShieldBreaker = (EEnemyShieldBreaker)EnemyShieldBreaker;
    params.SFX = (UAkAudioEvent*)SFX;
    params.InDuration = (float)InDuration;
    params.InNoReaction = (bool)InNoReaction;
    params.InImpactType = (EImpactTypes)InImpactType;
    params.bForceNoReaction = (bool)bForceNoReaction;
    params.InSpellTool = (ASpellTool*)InSpellTool;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutDamageInfo = params.OutDamageInfo;
    return (bool)params.ReturnValue;
}
void ASpellHelper::DoDamageFinisher(AActor* InTarget, AActor* InInstigator, float Damage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.DoDamageFinisher"));
    struct Params_DoDamageFinisher {
        AActor* InTarget; // 0x0
        AActor* InInstigator; // 0x8
        float Damage; // 0x10
    }; // Size: 0x14
    Params_DoDamageFinisher params{};
    params.InTarget = (AActor*)InTarget;
    params.InInstigator = (AActor*)InInstigator;
    params.Damage = (float)Damage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::DoDamageAOE(AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, float InDamage, FVector InLocation, float InRadius, float InForce, bool bSendImpact, bool bIgnoreDamageThreshold, float InRadialDestructionForce, UParticleSystem* InDestroyPieceVFX, float InDestroyPieceVFXRadius, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker, bool bOnlyHitCharacters, bool bIgnoreSameTeam, bool bIgnoreCompanions, bool bRespectInstigatorCanHit, UAkAudioEvent* SFX, float InDuration, EImpactTypes InImpactType, ASpellTool* InSpellTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.DoDamageAOE"));
    struct Params_DoDamageAOE {
        AActor* InInstigator; // 0x0
        FGameplayTagContainer InMunitionTagContainer; // 0x8
        TArray<UInteractionArchitectAsset*> InMunitionDataAssets; // 0x28
        float InDamage; // 0x38
        FVector InLocation; // 0x3c
        float InRadius; // 0x48
        float InForce; // 0x4c
        bool bSendImpact; // 0x50
        bool bIgnoreDamageThreshold; // 0x51
        char pad_52[0x2];
        float InRadialDestructionForce; // 0x54
        UParticleSystem* InDestroyPieceVFX; // 0x58
        float InDestroyPieceVFXRadius; // 0x60
        bool bPlayerShieldBreaker; // 0x64
        EEnemyShieldBreaker EnemyShieldBreaker; // 0x65
        bool bOnlyHitCharacters; // 0x66
        bool bIgnoreSameTeam; // 0x67
        bool bIgnoreCompanions; // 0x68
        bool bRespectInstigatorCanHit; // 0x69
        char pad_6a[0x6];
        UAkAudioEvent* SFX; // 0x70
        float InDuration; // 0x78
        EImpactTypes InImpactType; // 0x7c
        char pad_7d[0x3];
        ASpellTool* InSpellTool; // 0x80
    }; // Size: 0x88
    Params_DoDamageAOE params{};
    params.InInstigator = (AActor*)InInstigator;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    params.InMunitionDataAssets = (TArray<UInteractionArchitectAsset*>)InMunitionDataAssets;
    params.InDamage = (float)InDamage;
    params.InLocation = (FVector)InLocation;
    params.InRadius = (float)InRadius;
    params.InForce = (float)InForce;
    params.bSendImpact = (bool)bSendImpact;
    params.bIgnoreDamageThreshold = (bool)bIgnoreDamageThreshold;
    params.InRadialDestructionForce = (float)InRadialDestructionForce;
    params.InDestroyPieceVFX = (UParticleSystem*)InDestroyPieceVFX;
    params.InDestroyPieceVFXRadius = (float)InDestroyPieceVFXRadius;
    params.bPlayerShieldBreaker = (bool)bPlayerShieldBreaker;
    params.EnemyShieldBreaker = (EEnemyShieldBreaker)EnemyShieldBreaker;
    params.bOnlyHitCharacters = (bool)bOnlyHitCharacters;
    params.bIgnoreSameTeam = (bool)bIgnoreSameTeam;
    params.bIgnoreCompanions = (bool)bIgnoreCompanions;
    params.bRespectInstigatorCanHit = (bool)bRespectInstigatorCanHit;
    params.SFX = (UAkAudioEvent*)SFX;
    params.InDuration = (float)InDuration;
    params.InImpactType = (EImpactTypes)InImpactType;
    params.InSpellTool = (ASpellTool*)InSpellTool;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool ASpellHelper::DoDamage(AActor* Target, AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, float Amount, FHitResult& HitResult, bool bSendImpact, bool bIgnoreDamageThreshold, float InDestructionForce, float InRadialDestructionForce, UParticleSystem* InDestroyPieceVFX, float InDestroyPieceVFXRadius, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker, UAkAudioEvent* SFX, float InDuration, bool InNoReaction, EImpactTypes InImpactType, ASpellTool* InSpellTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.DoDamage"));
    struct Params_DoDamage {
        AActor* Target; // 0x0
        AActor* InInstigator; // 0x8
        FGameplayTagContainer InMunitionTagContainer; // 0x10
        TArray<UInteractionArchitectAsset*> InMunitionDataAssets; // 0x30
        float Amount; // 0x40
        FHitResult HitResult; // 0x44
        bool bSendImpact; // 0xcc
        bool bIgnoreDamageThreshold; // 0xcd
        char pad_ce[0x2];
        float InDestructionForce; // 0xd0
        float InRadialDestructionForce; // 0xd4
        UParticleSystem* InDestroyPieceVFX; // 0xd8
        float InDestroyPieceVFXRadius; // 0xe0
        bool bPlayerShieldBreaker; // 0xe4
        EEnemyShieldBreaker EnemyShieldBreaker; // 0xe5
        char pad_e6[0x2];
        UAkAudioEvent* SFX; // 0xe8
        float InDuration; // 0xf0
        bool InNoReaction; // 0xf4
        EImpactTypes InImpactType; // 0xf5
        char pad_f6[0x2];
        ASpellTool* InSpellTool; // 0xf8
        bool ReturnValue; // 0x100
    }; // Size: 0x101
    Params_DoDamage params{};
    params.Target = (AActor*)Target;
    params.InInstigator = (AActor*)InInstigator;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    params.InMunitionDataAssets = (TArray<UInteractionArchitectAsset*>)InMunitionDataAssets;
    params.Amount = (float)Amount;
    params.HitResult = (FHitResult)HitResult;
    params.bSendImpact = (bool)bSendImpact;
    params.bIgnoreDamageThreshold = (bool)bIgnoreDamageThreshold;
    params.InDestructionForce = (float)InDestructionForce;
    params.InRadialDestructionForce = (float)InRadialDestructionForce;
    params.InDestroyPieceVFX = (UParticleSystem*)InDestroyPieceVFX;
    params.InDestroyPieceVFXRadius = (float)InDestroyPieceVFXRadius;
    params.bPlayerShieldBreaker = (bool)bPlayerShieldBreaker;
    params.EnemyShieldBreaker = (EEnemyShieldBreaker)EnemyShieldBreaker;
    params.SFX = (UAkAudioEvent*)SFX;
    params.InDuration = (float)InDuration;
    params.InNoReaction = (bool)InNoReaction;
    params.InImpactType = (EImpactTypes)InImpactType;
    params.InSpellTool = (ASpellTool*)InSpellTool;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
float ASpellHelper::CalculateTimeToReachDestination(USpellToolRecord* SpellToolRecord, FVector SourceLocation, FVector TargetLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.CalculateTimeToReachDestination"));
    struct Params_CalculateTimeToReachDestination {
        USpellToolRecord* SpellToolRecord; // 0x0
        FVector SourceLocation; // 0x8
        FVector TargetLocation; // 0x14
        float ReturnValue; // 0x20
    }; // Size: 0x24
    Params_CalculateTimeToReachDestination params{};
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SourceLocation = (FVector)SourceLocation;
    params.TargetLocation = (FVector)TargetLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ASpellTool* ASpellHelper::CastSpellImmediate(AActor* Target, FVector SourceLocation, USpellToolRecord* SpellToolRecord, FVector TargetLocation, AActor* InInstigator, bool bCharged, float Duration, bool bPlayMuzzleFX, bool bPlayImpactFX, bool bHideProjectile, bool bInDebug, int32_t SpellLevel, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker, bool bTriggerCastAnim, bool bOnlyHitTarget, bool bHoming, bool bRespectLock, float damageOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.CastSpellImmediate"));
    struct Params_CastSpellImmediate {
        AActor* Target; // 0x0
        FVector SourceLocation; // 0x8
        char pad_14[0x4];
        USpellToolRecord* SpellToolRecord; // 0x18
        FVector TargetLocation; // 0x20
        char pad_2c[0x4];
        AActor* InInstigator; // 0x30
        bool bCharged; // 0x38
        char pad_39[0x3];
        float Duration; // 0x3c
        bool bPlayMuzzleFX; // 0x40
        bool bPlayImpactFX; // 0x41
        bool bHideProjectile; // 0x42
        bool bInDebug; // 0x43
        int32_t SpellLevel; // 0x44
        bool bPlayerShieldBreaker; // 0x48
        EEnemyShieldBreaker EnemyShieldBreaker; // 0x49
        bool bTriggerCastAnim; // 0x4a
        bool bOnlyHitTarget; // 0x4b
        bool bHoming; // 0x4c
        bool bRespectLock; // 0x4d
        char pad_4e[0x2];
        float damageOverride; // 0x50
        char pad_54[0x4];
        ASpellTool* ReturnValue; // 0x58
    }; // Size: 0x60
    Params_CastSpellImmediate params{};
    params.Target = (AActor*)Target;
    params.SourceLocation = (FVector)SourceLocation;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.TargetLocation = (FVector)TargetLocation;
    params.InInstigator = (AActor*)InInstigator;
    params.bCharged = (bool)bCharged;
    params.Duration = (float)Duration;
    params.bPlayMuzzleFX = (bool)bPlayMuzzleFX;
    params.bPlayImpactFX = (bool)bPlayImpactFX;
    params.bHideProjectile = (bool)bHideProjectile;
    params.bInDebug = (bool)bInDebug;
    params.SpellLevel = (int32_t)SpellLevel;
    params.bPlayerShieldBreaker = (bool)bPlayerShieldBreaker;
    params.EnemyShieldBreaker = (EEnemyShieldBreaker)EnemyShieldBreaker;
    params.bTriggerCastAnim = (bool)bTriggerCastAnim;
    params.bOnlyHitTarget = (bool)bOnlyHitTarget;
    params.bHoming = (bool)bHoming;
    params.bRespectLock = (bool)bRespectLock;
    params.damageOverride = (float)damageOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ASpellTool*)params.ReturnValue;
}
bool ASpellHelper::CastSpell(AActor* Target, FVector SourceLocation, USpellToolRecord* SpellToolRecord, FVector TargetLocation, AActor* InInstigator, bool bCharged, float Duration, bool bPlayMuzzleFX, bool bPlayImpactFX, bool bHideProjectile, bool bInDebug, int32_t SpellLevel, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker, bool bTriggerCastAnim, bool bOnlyHitTarget, bool bHoming, bool bRespectLock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.CastSpell"));
    struct Params_CastSpell {
        AActor* Target; // 0x0
        FVector SourceLocation; // 0x8
        char pad_14[0x4];
        USpellToolRecord* SpellToolRecord; // 0x18
        FVector TargetLocation; // 0x20
        char pad_2c[0x4];
        AActor* InInstigator; // 0x30
        bool bCharged; // 0x38
        char pad_39[0x3];
        float Duration; // 0x3c
        bool bPlayMuzzleFX; // 0x40
        bool bPlayImpactFX; // 0x41
        bool bHideProjectile; // 0x42
        bool bInDebug; // 0x43
        int32_t SpellLevel; // 0x44
        bool bPlayerShieldBreaker; // 0x48
        EEnemyShieldBreaker EnemyShieldBreaker; // 0x49
        bool bTriggerCastAnim; // 0x4a
        bool bOnlyHitTarget; // 0x4b
        bool bHoming; // 0x4c
        bool bRespectLock; // 0x4d
        bool ReturnValue; // 0x4e
    }; // Size: 0x4f
    Params_CastSpell params{};
    params.Target = (AActor*)Target;
    params.SourceLocation = (FVector)SourceLocation;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.TargetLocation = (FVector)TargetLocation;
    params.InInstigator = (AActor*)InInstigator;
    params.bCharged = (bool)bCharged;
    params.Duration = (float)Duration;
    params.bPlayMuzzleFX = (bool)bPlayMuzzleFX;
    params.bPlayImpactFX = (bool)bPlayImpactFX;
    params.bHideProjectile = (bool)bHideProjectile;
    params.bInDebug = (bool)bInDebug;
    params.SpellLevel = (int32_t)SpellLevel;
    params.bPlayerShieldBreaker = (bool)bPlayerShieldBreaker;
    params.EnemyShieldBreaker = (EEnemyShieldBreaker)EnemyShieldBreaker;
    params.bTriggerCastAnim = (bool)bTriggerCastAnim;
    params.bOnlyHitTarget = (bool)bOnlyHitTarget;
    params.bHoming = (bool)bHoming;
    params.bRespectLock = (bool)bRespectLock;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UVelocityTrackerComponent* ASpellHelper::AddVelocityTracker(AActor* Target, AActor* InInstigator, float InLifetime, bool InRemoveWhenStopped, bool InFalling) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.AddVelocityTracker"));
    struct Params_AddVelocityTracker {
        AActor* Target; // 0x0
        AActor* InInstigator; // 0x8
        float InLifetime; // 0x10
        bool InRemoveWhenStopped; // 0x14
        bool InFalling; // 0x15
        char pad_16[0x2];
        UVelocityTrackerComponent* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_AddVelocityTracker params{};
    params.Target = (AActor*)Target;
    params.InInstigator = (AActor*)InInstigator;
    params.InLifetime = (float)InLifetime;
    params.InRemoveWhenStopped = (bool)InRemoveWhenStopped;
    params.InFalling = (bool)InFalling;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UVelocityTrackerComponent*)params.ReturnValue;
}
bool ASpellHelper::ApplyWetness(AActor* Target, AActor* InInstigator, float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.ApplyWetness"));
    struct Params_ApplyWetness {
        AActor* Target; // 0x0
        AActor* InInstigator; // 0x8
        float Amount; // 0x10
        FVector Location; // 0x14
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_ApplyWetness params{};
    params.Target = (AActor*)Target;
    params.InInstigator = (AActor*)InInstigator;
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASpellHelper::ApplyRadialForceWithIgnore(FVector Location, float Impulse, TArray<AActor*>& ActorsToIgnore, float MassScaledImpulse, float Radius, ERadialImpulseFalloff Falloff, bool bVelChange, float Delay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.ApplyRadialForceWithIgnore"));
    struct Params_ApplyRadialForceWithIgnore {
        FVector Location; // 0x0
        float Impulse; // 0xc
        TArray<AActor*> ActorsToIgnore; // 0x10
        float MassScaledImpulse; // 0x20
        float Radius; // 0x24
        ERadialImpulseFalloff Falloff; // 0x28
        bool bVelChange; // 0x29
        char pad_2a[0x2];
        float Delay; // 0x2c
    }; // Size: 0x30
    Params_ApplyRadialForceWithIgnore params{};
    params.Location = (FVector)Location;
    params.Impulse = (float)Impulse;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.MassScaledImpulse = (float)MassScaledImpulse;
    params.Radius = (float)Radius;
    params.Falloff = (ERadialImpulseFalloff)Falloff;
    params.bVelChange = (bool)bVelChange;
    params.Delay = (float)Delay;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActorsToIgnore = params.ActorsToIgnore;
}
void ASpellHelper::ApplyRadialForceToActor(AActor* InActor, FVector Location, float Impulse, float MassScaledImpulse, float Radius, ERadialImpulseFalloff Falloff, bool bVelChange, float Delay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.ApplyRadialForceToActor"));
    struct Params_ApplyRadialForceToActor {
        AActor* InActor; // 0x0
        FVector Location; // 0x8
        float Impulse; // 0x14
        float MassScaledImpulse; // 0x18
        float Radius; // 0x1c
        ERadialImpulseFalloff Falloff; // 0x20
        bool bVelChange; // 0x21
        char pad_22[0x2];
        float Delay; // 0x24
    }; // Size: 0x28
    Params_ApplyRadialForceToActor params{};
    params.InActor = (AActor*)InActor;
    params.Location = (FVector)Location;
    params.Impulse = (float)Impulse;
    params.MassScaledImpulse = (float)MassScaledImpulse;
    params.Radius = (float)Radius;
    params.Falloff = (ERadialImpulseFalloff)Falloff;
    params.bVelChange = (bool)bVelChange;
    params.Delay = (float)Delay;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::ApplyRadialForce(FVector Location, float Impulse, float MassScaledImpulse, float Radius, ERadialImpulseFalloff Falloff, bool bVelChange, float Delay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.ApplyRadialForce"));
    struct Params_ApplyRadialForce {
        FVector Location; // 0x0
        float Impulse; // 0xc
        float MassScaledImpulse; // 0x10
        float Radius; // 0x14
        ERadialImpulseFalloff Falloff; // 0x18
        bool bVelChange; // 0x19
        char pad_1a[0x2];
        float Delay; // 0x1c
    }; // Size: 0x20
    Params_ApplyRadialForce params{};
    params.Location = (FVector)Location;
    params.Impulse = (float)Impulse;
    params.MassScaledImpulse = (float)MassScaledImpulse;
    params.Radius = (float)Radius;
    params.Falloff = (ERadialImpulseFalloff)Falloff;
    params.bVelChange = (bool)bVelChange;
    params.Delay = (float)Delay;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::AddVelocityTrackerTag(AActor* InTarget, FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.AddVelocityTrackerTag"));
    struct Params_AddVelocityTrackerTag {
        AActor* InTarget; // 0x0
        FName Tag; // 0x8
    }; // Size: 0x10
    Params_AddVelocityTrackerTag params{};
    params.InTarget = (AActor*)InTarget;
    params.Tag = (FName)Tag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ASpellHelper::AddCombatCursed(AActor* InTarget, AActor* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellHelper.AddCombatCursed"));
    struct Params_AddCombatCursed {
        AActor* InTarget; // 0x0
        AActor* InInstigator; // 0x8
    }; // Size: 0x10
    Params_AddCombatCursed params{};
    params.InTarget = (AActor*)InTarget;
    params.InInstigator = (AActor*)InInstigator;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
