#include "AActor.hpp"
#include "ACreatureGrowthHandler.hpp"
#include "UFunction.hpp"
ACreatureGrowthHandler* ACreatureGrowthHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureGrowthHandler");
    return (ACreatureGrowthHandler*)res;
}
void ACreatureGrowthHandler::TickFX(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureGrowthHandler.TickFX"));
    struct Params_TickFX {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_TickFX params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ACreatureGrowthHandler::StartFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureGrowthHandler.StartFX"));
    struct Params_StartFX {
    }; // Size: 0x0
    Params_StartFX params{};
    ProcessEvent(func, &params);
}
void ACreatureGrowthHandler::Finish() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureGrowthHandler.Finish"));
    struct Params_Finish {
    }; // Size: 0x0
    Params_Finish params{};
    ProcessEvent(func, &params);
}
void ACreatureGrowthHandler::ShowNewCreature() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureGrowthHandler.ShowNewCreature"));
    struct Params_ShowNewCreature {
    }; // Size: 0x0
    Params_ShowNewCreature params{};
    ProcessEvent(func, &params);
}
bool ACreatureGrowthHandler::IsNewCreatureReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureGrowthHandler.IsNewCreatureReady"));
    struct Params_IsNewCreatureReady {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsNewCreatureReady params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACreatureGrowthHandler::OnNewCreatureReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureGrowthHandler.OnNewCreatureReady"));
    struct Params_OnNewCreatureReady {
    }; // Size: 0x0
    Params_OnNewCreatureReady params{};
    ProcessEvent(func, &params);
}
