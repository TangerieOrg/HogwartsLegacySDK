#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
class UInteractionArchitectAsset;
struct FGameplayTag;
struct FMunitionImpactData;
#pragma pack(push, 1)
class AMunitionType_Base : public AActor {
public:
    float m_damage; // 0x248
    float m_minLifeTime; // 0x24c
    float m_maxLifeTime; // 0x250
    char pad_254[0x4];
    FGameplayTagContainer MunitionImpactTags; // 0x258
    TArray<UInteractionArchitectAsset*> MunitionDataAssets; // 0x278
    char pad_288[0x40];
    bool bDOAOnParrySuccess; // 0x2c8
    char pad_2c9[0x97];
    static AMunitionType_Base* StaticClass();
    void TargetDestroyed();
    void SetVelocityIncludeTarget(bool bInFlag);
    void SetTarget(AActor* i_pActor);
    void SetStartingVelocity(FVector InVelocity);
    void SetSourcePosition(FVector i_sourcePos);
    void SetRemainingLifeTime(float InRemaningTime);
    void SetRecomputeVelocity(bool bInFlag);
    void SetMunitionOwner(AActor* i_pActor);
    void SetMunitionImpactType(FName InMunitionImpactType);
    void SetMunitionDataAssets(TArray<UInteractionArchitectAsset*>& InMunitionDataAssets);
    void SetMaxRange(float Range);
    void SetMaxDamage(float InMaxDamage);
    void SetLifeTime(float InMaxTime);
    void SetInstigator(AActor* i_pActor);
    void SetFromAimMode(bool bInFlag);
    void SetDestinationPosition(FVector i_destPos);
    void SetDamage(float InDamage);
    void ResetMunitionTagContainer();
    void ResetMunitionDataAssets();
    void RemoveMunitionTagContainer(FGameplayTagContainer& InMunitionTagContainer);
    void RemoveMunitionTag(FGameplayTag& InMunitionTag);
    void RemoveMunitionDataAsset(UInteractionArchitectAsset* InMunitionDataAsset);
    void OnOverlap__DelegateSignature(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData);
    void OnImpactDamage__DelegateSignature(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData);
    void OnImpact__DelegateSignature(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData);
    void OnDestroyed__DelegateSignature(AMunitionType_Base* MunitionInstance);
    void MunitionIgnored();
    void MunitionFailed();
    void MunitionDOA();
    void MunitionDeflected();
    void MunitionBlocked();
    bool K2_WasMunitionDeflected();
    bool IsDeflectedMunition_K2();
    void IgnoreActor(AActor* InActor);
    bool GetVelocityIncludeTarget();
    AActor* GetTarget();
    FVector GetStartingVelocity();
    FVector GetSourcePosition();
    float GetRemainingLifeTime();
    bool GetRecomputeVelocity();
    FGameplayTagContainer GetMunitionTagContainer();
    AActor* GetMunitionOwner();
    FName GetMunitionImpactType();
    TArray<UInteractionArchitectAsset*> GetMunitionDataAssets();
    float GetMaxRange();
    float GetMaxDamage();
    bool GetFromAimMode();
    FVector GetDestinationPosition();
    float GetDamage();
    void Fire();
    static FVector ComputeVelocity_NoGravity(FVector i_sourcePos, FVector i_destPos, FVector i_destVel, float i_speed, float& o_time);
    static FVector ComputeVelocity(FVector i_sourcePos, FVector i_destPos, FVector i_destVel, float i_speed, float i_gravity, float& o_time, bool assertOnError);
    void AddMunitionTagContainer(FGameplayTagContainer& InMunitionTagContainer);
    void AddMunitionTag(FGameplayTag& InMunitionTag);
    void AddMunitionDataAsset(UInteractionArchitectAsset* InMunitionDataAsset);
}; // Size: 0x360
#pragma pack(pop)
