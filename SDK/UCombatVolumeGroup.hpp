#pragma once
#include <cstdint>
#include "EEncounterEndReason.hpp"
#include "FEncounterDuelTechniqueOverride.hpp"
#include "UObject.hpp"
class ACombatVolume;
class AActor;
#pragma pack(push, 1)
class UCombatVolumeGroup : public UObject {
public:
    char pad_28[0xa8];
    bool bEnableDuelTechniques; // 0xd0
    char pad_d1[0x7];
    TArray<FEncounterDuelTechniqueOverride> DuelTechniqueOverrides; // 0xd8
    char pad_e8[0x50];
    static UCombatVolumeGroup* StaticClass();
    bool TryStartEncounter();
    bool IsActiveForCurrentEncounter();
    void GetVolumes();
    void EncounterStartedEvent__DelegateSignature();
    void EncounterEndedEvent__DelegateSignature(EEncounterEndReason EndReason);
    void CombatVolumeGroupDestroyed__DelegateSignature(UCombatVolumeGroup* Group);
    void CombatVolumeGroupDeathDelegate__DelegateSignature(ACombatVolume* CombatVolume, AActor* DeadActor);
    void CombatVolumeGroupActorSpawnedDelegate__DelegateSignature(ACombatVolume* CombatVolume, AActor* SpawnedActor);
}; // Size: 0x138
#pragma pack(pop)
