#include "AActor.hpp"
#include "ACreaturePen.hpp"
#include "ATransfigurationObjectBase.hpp"
#include "ATriggerBase.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
void ACreaturePen::OnBreedingFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePen.OnBreedingFinished"));
    struct Params_OnBreedingFinished {
    }; // Size: 0x0
    Params_OnBreedingFinished params{};
    ProcessEvent(func, &params);
}
void ACreaturePen::UpdateCallout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePen.UpdateCallout"));
    struct Params_UpdateCallout {
    }; // Size: 0x0
    Params_UpdateCallout params{};
    ProcessEvent(func, &params);
}
ACreaturePen* ACreaturePen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreaturePen");
    return (ACreaturePen*)res;
}
void ACreaturePen::OnDressingReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePen.OnDressingReady"));
    struct Params_OnDressingReady {
    }; // Size: 0x0
    Params_OnDressingReady params{};
    ProcessEvent(func, &params);
}
void ACreaturePen::OnCreatureSpawned(UCreatureState* CreatureState, AActor* CreatureActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePen.OnCreatureSpawned"));
    struct Params_OnCreatureSpawned {
        UCreatureState* CreatureState; // 0x0
        AActor* CreatureActor; // 0x8
    }; // Size: 0x10
    Params_OnCreatureSpawned params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    params.CreatureActor = (AActor*)CreatureActor;
    ProcessEvent(func, &params);
}
void ACreaturePen::OnBreedingStarted(UCreatureState* OffspringState, UCreatureState* MotherState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePen.OnBreedingStarted"));
    struct Params_OnBreedingStarted {
        UCreatureState* OffspringState; // 0x0
        UCreatureState* MotherState; // 0x8
    }; // Size: 0x10
    Params_OnBreedingStarted params{};
    params.OffspringState = (UCreatureState*)OffspringState;
    params.MotherState = (UCreatureState*)MotherState;
    ProcessEvent(func, &params);
}
bool ACreaturePen::IsOccupied() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePen.IsOccupied"));
    struct Params_IsOccupied {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOccupied params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ACreaturePen::IsReadyToSlotCreature() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePen.IsReadyToSlotCreature"));
    struct Params_IsReadyToSlotCreature {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReadyToSlotCreature params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
