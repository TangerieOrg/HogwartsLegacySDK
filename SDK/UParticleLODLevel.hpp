#pragma once
#include <cstdint>
#include "UObject.hpp"
class UParticleModuleRequired;
class UParticleModule;
class UParticleModuleTypeDataBase;
class UParticleModuleSpawn;
class UParticleModuleEventGenerator;
class UParticleModuleSpawnBase;
class UParticleModuleEventReceiverBase;
class UParticleModuleOrbit;
#pragma pack(push, 1)
class UParticleLODLevel : public UObject {
public:
    int32_t Level; // 0x28
    uint8_t bEnabled : 1; // 0x2c
    uint8_t pad_bitfield_2c_1 : 7;
    char pad_2d[0x3];
    UParticleModuleRequired* RequiredModule; // 0x30
    TArray<UParticleModule*> Modules; // 0x38
    UParticleModuleTypeDataBase* TypeDataModule; // 0x48
    UParticleModuleSpawn* SpawnModule; // 0x50
    UParticleModuleEventGenerator* EventGenerator; // 0x58
    TArray<UParticleModuleSpawnBase*> SpawningModules; // 0x60
    TArray<UParticleModule*> SpawnModules; // 0x70
    TArray<UParticleModule*> UpdateModules; // 0x80
    TArray<UParticleModuleOrbit*> OrbitModules; // 0x90
    TArray<UParticleModuleEventReceiverBase*> EventReceiverModules; // 0xa0
    uint8_t ConvertedModules : 1; // 0xb0
    uint8_t pad_bitfield_b0_1 : 7;
    char pad_b1[0x3];
    int32_t PeakActiveParticles; // 0xb4
    static UParticleLODLevel* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
