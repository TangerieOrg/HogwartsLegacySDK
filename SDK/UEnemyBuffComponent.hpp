#pragma once
#include <cstdint>
#include "EEnemyBuffTypeEnum.hpp"
#include "FEBC_BoneRadiusVelocity.hpp"
#include "UActorComponent.hpp"
class UParticleSystem;
class UParticleSystemComponent;
class AActor;
#pragma pack(push, 1)
class UEnemyBuffComponent : public UActorComponent {
public:
    bool bIsMaster; // 0xc8
    char pad_c9[0x3];
    float validTargetRadius; // 0xcc
    float healRatePercentagePerSec; // 0xd0
    EEnemyBuffTypeEnum buffTypeEnum; // 0xd4
    char pad_d5[0x3];
    float BuffMaxActiveTime; // 0xd8
    bool bAllowHealthBuff; // 0xdc
    bool bAllowWeaponBuff; // 0xdd
    char pad_de[0x2];
    UParticleSystem* pBeamFX; // 0xe0
    UParticleSystem* pBuffEmitterFX; // 0xe8
    UParticleSystem* pBuffEmitterFX2; // 0xf0
    UParticleSystem* pBuffEmitterFX3; // 0xf8
    UParticleSystem* pBuffEmitterFX4; // 0x100
    FName BeamAttachBoneName; // 0x108
    TArray<UParticleSystemComponent*> pBuffEmitterFXObj; // 0x110
    TArray<UParticleSystemComponent*> pBuffEmitterFX2Obj; // 0x120
    TArray<FEBC_BoneRadiusVelocity> m_boneList; // 0x130
    bool bIsDisabled; // 0x140
    char pad_141[0x97];
    static UEnemyBuffComponent* StaticClass();
    void EnableBuff(AActor* pActorMaster);
}; // Size: 0x1d8
#pragma pack(pop)
