#include "UDuelTechnique.hpp"
#include "UDuelTechnique_TimedEncounter.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UDuelTechnique_TimedEncounter* UDuelTechnique_TimedEncounter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_TimedEncounter");
    return (UDuelTechnique_TimedEncounter*)res;
}
void UDuelTechnique_TimedEncounter::TimerTick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DuelTechnique_TimedEncounter.TimerTick"));
    struct Params_TimerTick {
    }; // Size: 0x0
    Params_TimerTick params{};
    ProcessEvent(func, &params);
}
bool UDuelTechnique_TimedEncounter::InitializeImpl() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DuelTechnique_TimedEncounter.InitializeImpl"));
    struct Params_InitializeImpl {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InitializeImpl params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
