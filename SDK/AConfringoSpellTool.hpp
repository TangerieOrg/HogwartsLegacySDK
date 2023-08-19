#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
#include "FGameplayTagContainer.hpp"
class UInteractionArchitectAsset;
class UClass;
class AActor;
#pragma pack(push, 1)
class AConfringoSpellTool : public AFireOnceSpellTool {
public:
    float CharacterThrowRadius; // 0x870
    float TargetPhysicsImpulse; // 0x874
    float BasePhysicsImpulse; // 0x878
    float MassScaledPhysicsImpulse; // 0x87c
    float BaseTorque; // 0x880
    float MassScaleTorque; // 0x884
    float CharacterBasePhysicsImpulse; // 0x888
    float CharacterMassScaledPhysicsImpulse; // 0x88c
    float CharacterBaseTorque; // 0x890
    float CharacterMassScaleTorque; // 0x894
    int32_t ObjectTargetingPercent; // 0x898
    float ObjectMaxVelocity; // 0x89c
    float AOECharacterDamage; // 0x8a0
    float AOEObjectDamage; // 0x8a4
    float UpgradeCharacterDamage; // 0x8a8
    float UpgradeObjectDamage; // 0x8ac
    float UpgradeCharacterThrowRadius; // 0x8b0
    float UpgradeTargetPhysicsImpulse; // 0x8b4
    float UpgradeBasePhysicsImpulse; // 0x8b8
    float UpgradeMassScaledPhysicsImpulse; // 0x8bc
    float UpgradeCharacterBasePhysicsImpulse; // 0x8c0
    float UpgradeCharacterMassScaledPhysicsImpulse; // 0x8c4
    int32_t UpgradeObjectTargetingPercent; // 0x8c8
    float UpgradeObjectMaxVelocity; // 0x8cc
    float UpgradeAOECharacterDamage; // 0x8d0
    float UpgradeAOEObjectDamage; // 0x8d4
    bool DamageCaster; // 0x8d8
    bool bCurseTarget; // 0x8d9
    char pad_8da[0x6];
    FGameplayTagContainer AOEMunitionTagContainer; // 0x8e0
    UInteractionArchitectAsset* AOEMunitionDataAsset; // 0x900
    UClass* DecalComponent; // 0x908
    float ThrowTargetHalfAngle; // 0x910
    float ThrowTargetAngleZ; // 0x914
    bool Taboo; // 0x918
    char pad_919[0x3];
    float ThrowMinZThreshold; // 0x91c
    float ThrowMaxZThreshold; // 0x920
    float BurnRateScale; // 0x924
    float TalentBombardaCooldownRecovery; // 0x928
    int32_t TalentRecoveryCharacterNum; // 0x92c
    float TalentProjectileDistance; // 0x930
    float TalentProjectileIgnoreNearDistance; // 0x934
    float TalentProjectileDelay; // 0x938
    float TalentProjectileDamage; // 0x93c
    int32_t TalentProjectileCount; // 0x940
    int32_t TalentProjectileTargetHalfAngleXY; // 0x944
    UClass* TalentProjectileMunition; // 0x948
    float MinDamageDealt; // 0x950
    float MaxDamageDealt; // 0x954
    float MinDamageDealtCharacter; // 0x958
    float MaxDamageDealtCharacter; // 0x95c
    float MinDamageTaken; // 0x960
    float MaxDamageTaken; // 0x964
    float MinDamageTakenCharacter; // 0x968
    float MaxDamageTakenCharacter; // 0x96c
    UClass* OpportunityWindowAOEMunition; // 0x970
    char pad_978[0x20];
    static AConfringoSpellTool* StaticClass();
    float GetExplosionRadius();
    void AddOnFireDoT(AActor* Target);
}; // Size: 0x998
#pragma pack(pop)
