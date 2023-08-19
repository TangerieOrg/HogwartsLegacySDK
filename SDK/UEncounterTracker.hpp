#pragma once
#include <cstdint>
#include "UObject.hpp"
class UCombatVolumeGroup;
class AActor;
class UDuelTechniquesController;
class ACombatVolume;
#pragma pack(push, 1)
class UEncounterTracker : public UObject {
public:
    char pad_28[0x1a8];
    UCombatVolumeGroup* m_currentCombatVolumeGroup; // 0x1d0
    char pad_1d8[0x18];
    UDuelTechniquesController* DuelTechniquesController; // 0x1f0
    static UEncounterTracker* StaticClass();
    void TryEndEncounter();
    static bool StartEncounterForPlayersCombatVolume();
    void ResetTryEndEncounterTimer();
    void OnCurtainRaised();
    void OnCombatVolumeDeath(ACombatVolume* CombatVolume, AActor* DeadActor);
    void OnCombatVolumeActorSpawned(ACombatVolume* CombatVolume, AActor* SpawnedActor);
    static bool IsPlayerInAnEncounter();
}; // Size: 0x1f8
#pragma pack(pop)
