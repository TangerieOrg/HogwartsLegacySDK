#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleEventReceiverBase.hpp"
class UPhysicalMaterial;
#pragma pack(push, 1)
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase {
public:
    FRawDistributionFloat SpawnCount; // 0x40
    uint8_t bUseParticleTime : 1; // 0x70
    uint8_t bUsePSysLocation : 1; // 0x70
    uint8_t bInheritVelocity : 1; // 0x70
    uint8_t pad_bitfield_70_3 : 5;
    char pad_71[0x7];
    FRawDistributionVector InheritVelocityScale; // 0x78
    TArray<UPhysicalMaterial*> PhysicalMaterials; // 0xc0
    uint8_t bBanPhysicalMaterials : 1; // 0xd0
    uint8_t pad_bitfield_d0_1 : 7;
    char pad_d1[0x7];
    static UParticleModuleEventReceiverSpawn* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
