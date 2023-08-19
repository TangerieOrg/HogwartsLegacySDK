#include "AActor.hpp"
#include "ACombatVolume.hpp"
#include "EEncounterEndReason.hpp"
#include "FEncounterDuelTechniqueOverride.hpp"
#include "UCombatVolumeGroup.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UCombatVolumeGroup::GetVolumes() {}
UCombatVolumeGroup* UCombatVolumeGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CombatVolumeGroup");
    return (UCombatVolumeGroup*)res;
}
void UCombatVolumeGroup::EncounterEndedEvent__DelegateSignature(EEncounterEndReason EndReason) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.CombatVolumeGroup.EncounterEndedEvent__DelegateSignature"));
    struct Params_EncounterEndedEvent__DelegateSignature {
        EEncounterEndReason EndReason; // 0x0
    }; // Size: 0x1
    Params_EncounterEndedEvent__DelegateSignature params{};
    params.EndReason = (EEncounterEndReason)EndReason;
    ProcessEvent(func, &params);
}
bool UCombatVolumeGroup::TryStartEncounter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatVolumeGroup.TryStartEncounter"));
    struct Params_TryStartEncounter {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_TryStartEncounter params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCombatVolumeGroup::IsActiveForCurrentEncounter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatVolumeGroup.IsActiveForCurrentEncounter"));
    struct Params_IsActiveForCurrentEncounter {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActiveForCurrentEncounter params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCombatVolumeGroup::EncounterStartedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.CombatVolumeGroup.EncounterStartedEvent__DelegateSignature"));
    struct Params_EncounterStartedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_EncounterStartedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UCombatVolumeGroup::CombatVolumeGroupDeathDelegate__DelegateSignature(ACombatVolume* CombatVolume, AActor* DeadActor) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.CombatVolumeGroup.CombatVolumeGroupDeathDelegate__DelegateSignature"));
    struct Params_CombatVolumeGroupDeathDelegate__DelegateSignature {
        ACombatVolume* CombatVolume; // 0x0
        AActor* DeadActor; // 0x8
    }; // Size: 0x10
    Params_CombatVolumeGroupDeathDelegate__DelegateSignature params{};
    params.CombatVolume = (ACombatVolume*)CombatVolume;
    params.DeadActor = (AActor*)DeadActor;
    ProcessEvent(func, &params);
}
void UCombatVolumeGroup::CombatVolumeGroupDestroyed__DelegateSignature(UCombatVolumeGroup* Group) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.CombatVolumeGroup.CombatVolumeGroupDestroyed__DelegateSignature"));
    struct Params_CombatVolumeGroupDestroyed__DelegateSignature {
        UCombatVolumeGroup* Group; // 0x0
    }; // Size: 0x8
    Params_CombatVolumeGroupDestroyed__DelegateSignature params{};
    params.Group = (UCombatVolumeGroup*)Group;
    ProcessEvent(func, &params);
}
void UCombatVolumeGroup::CombatVolumeGroupActorSpawnedDelegate__DelegateSignature(ACombatVolume* CombatVolume, AActor* SpawnedActor) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.CombatVolumeGroup.CombatVolumeGroupActorSpawnedDelegate__DelegateSignature"));
    struct Params_CombatVolumeGroupActorSpawnedDelegate__DelegateSignature {
        ACombatVolume* CombatVolume; // 0x0
        AActor* SpawnedActor; // 0x8
    }; // Size: 0x10
    Params_CombatVolumeGroupActorSpawnedDelegate__DelegateSignature params{};
    params.CombatVolume = (ACombatVolume*)CombatVolume;
    params.SpawnedActor = (AActor*)SpawnedActor;
    ProcessEvent(func, &params);
}
