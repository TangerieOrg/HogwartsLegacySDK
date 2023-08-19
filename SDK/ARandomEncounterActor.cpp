#include "AActor.hpp"
#include "ARandomEncounterActor.hpp"
#include "UFunction.hpp"
ARandomEncounterActor* ARandomEncounterActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RandomEncounterActor");
    return (ARandomEncounterActor*)res;
}
bool ARandomEncounterActor::IsActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RandomEncounterActor.IsActive"));
    struct Params_IsActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ARandomEncounterActor::ForceDeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RandomEncounterActor.ForceDeactivate"));
    struct Params_ForceDeactivate {
    }; // Size: 0x0
    Params_ForceDeactivate params{};
    ProcessEvent(func, &params);
}
void ARandomEncounterActor::ForceActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RandomEncounterActor.ForceActivate"));
    struct Params_ForceActivate {
    }; // Size: 0x0
    Params_ForceActivate params{};
    ProcessEvent(func, &params);
}
