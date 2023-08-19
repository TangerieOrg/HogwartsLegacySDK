#pragma once
#include <cstdint>
#include "AMunitionType_AOESpell.hpp"
#include "FGameplayTagContainer.hpp"
class UInteractionArchitectAsset;
class USphereComponent;
class UClass;
class ADraingingDraughtOrb;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class ADrainingDraughtEffect : public AMunitionType_AOESpell {
public:
    float m_CloudRadius; // 0x4c8
    float m_AOEDamage; // 0x4cc
    float m_AOEDamageRate; // 0x4d0
    float m_SeekRadius; // 0x4d4
    float m_SeekTime; // 0x4d8
    float m_OrbDistance; // 0x4dc
    float m_OrbGroundDist; // 0x4e0
    float m_OrbRotationRate; // 0x4e4
    int32_t m_NumOrbs; // 0x4e8
    float m_OrbDamage; // 0x4ec
    bool m_bTimingBasedOnOrbAmt; // 0x4f0
    char pad_4f1[0x3];
    float m_BufferTime; // 0x4f4
    int32_t m_OrbIncreaseAmt; // 0x4f8
    char pad_4fc[0x4];
    TArray<UInteractionArchitectAsset*> m_AOEInteractionArchitectMunitionAssets; // 0x500
    FGameplayTagContainer m_AOEInteractionArchitectMunitionTags; // 0x510
    UClass* m_OrbMunition; // 0x530
    USphereComponent* m_OrbSeekSphere; // 0x538
    USphereComponent* m_CloudDamageSphere; // 0x540
    TArray<ADraingingDraughtOrb*> m_ActiveOrbs; // 0x548
    char pad_558[0x20];
    static ADrainingDraughtEffect* StaticClass();
    void Tick(float DeltaSeconds);
    void SpawnOrbs();
    void SetNumberOrbs(int32_t NumOrbs);
    void SendOutOrb();
    void OnOverlapEndSeekSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapEndCloudSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBeginSeekSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnOverlapBeginCloudSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    ADraingingDraughtOrb* GetBestAvailableOrb(AActor* Target);
    void DoAOECloudDamageCallback();
    void BeginPlay();
}; // Size: 0x578
#pragma pack(pop)
