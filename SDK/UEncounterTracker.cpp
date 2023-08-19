#include "AActor.hpp"
#include "ACombatVolume.hpp"
#include "UCombatVolumeGroup.hpp"
#include "UDuelTechniquesController.hpp"
#include "UEncounterTracker.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UEncounterTracker* UEncounterTracker::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EncounterTracker");
    return (UEncounterTracker*)res;
}
void UEncounterTracker::TryEndEncounter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterTracker.TryEndEncounter"));
    struct Params_TryEndEncounter {
    }; // Size: 0x0
    Params_TryEndEncounter params{};
    ProcessEvent(func, &params);
}
void UEncounterTracker::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterTracker.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
bool UEncounterTracker::StartEncounterForPlayersCombatVolume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterTracker.StartEncounterForPlayersCombatVolume"));
    struct Params_StartEncounterForPlayersCombatVolume {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StartEncounterForPlayersCombatVolume params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEncounterTracker::ResetTryEndEncounterTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterTracker.ResetTryEndEncounterTimer"));
    struct Params_ResetTryEndEncounterTimer {
    }; // Size: 0x0
    Params_ResetTryEndEncounterTimer params{};
    ProcessEvent(func, &params);
}
bool UEncounterTracker::IsPlayerInAnEncounter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterTracker.IsPlayerInAnEncounter"));
    struct Params_IsPlayerInAnEncounter {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayerInAnEncounter params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEncounterTracker::OnCombatVolumeDeath(ACombatVolume* CombatVolume, AActor* DeadActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterTracker.OnCombatVolumeDeath"));
    struct Params_OnCombatVolumeDeath {
        ACombatVolume* CombatVolume; // 0x0
        AActor* DeadActor; // 0x8
    }; // Size: 0x10
    Params_OnCombatVolumeDeath params{};
    params.CombatVolume = (ACombatVolume*)CombatVolume;
    params.DeadActor = (AActor*)DeadActor;
    ProcessEvent(func, &params);
}
void UEncounterTracker::OnCombatVolumeActorSpawned(ACombatVolume* CombatVolume, AActor* SpawnedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterTracker.OnCombatVolumeActorSpawned"));
    struct Params_OnCombatVolumeActorSpawned {
        ACombatVolume* CombatVolume; // 0x0
        AActor* SpawnedActor; // 0x8
    }; // Size: 0x10
    Params_OnCombatVolumeActorSpawned params{};
    params.CombatVolume = (ACombatVolume*)CombatVolume;
    params.SpawnedActor = (AActor*)SpawnedActor;
    ProcessEvent(func, &params);
}
