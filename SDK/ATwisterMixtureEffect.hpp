#pragma once
#include <cstdint>
#include "AMunitionType_AOESpell.hpp"
#include "FGameplayTag.hpp"
#include "FVector.hpp"
class USphereComponent;
class UPrimitiveComponent;
class AActor;
class AMunitionType_Base;
struct FHitResult;
#pragma pack(push, 1)
class ATwisterMixtureEffect : public AMunitionType_AOESpell {
public:
    float m_PullRadius; // 0x4c8
    float m_StopRadius; // 0x4cc
    float m_PullTime; // 0x4d0
    float m_PullDelay; // 0x4d4
    FVector m_Offset; // 0x4d8
    float m_TwisterImpulseMultiplier; // 0x4e4
    float m_UpgradeRadiusMultiplier; // 0x4e8
    FGameplayTag m_TwisterUpgradeAbilityTag; // 0x4ec
    char pad_4f4[0x4];
    USphereComponent* m_TwisterEffectSphere; // 0x4f8
    USphereComponent* m_TwisterStoppingSphere; // 0x500
    char pad_508[0x28];
    static ATwisterMixtureEffect* StaticClass();
    void Tick(float DeltaSeconds);
    void OnOverlapEndStoppingSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnCharacterLand(FHitResult& Hit);
    void Cleanup(AMunitionType_Base* MunitionInstance);
    void BeginPull();
    void BeginPlay();
}; // Size: 0x530
#pragma pack(pop)
