#include "ANiagaraPerfBaselineActor.hpp"
#include "FNiagaraPerfBaselineStats.hpp"
#include "UFunction.hpp"
#include "UNiagaraBaselineController.hpp"
#include "UNiagaraEffectType.hpp"
#include "UNiagaraSystem.hpp"
#include "UObject.hpp"
UNiagaraBaselineController* UNiagaraBaselineController::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraBaselineController");
    return (UNiagaraBaselineController*)res;
}
bool UNiagaraBaselineController::OnTickTest() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraBaselineController.OnTickTest"));
    struct Params_OnTickTest {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_OnTickTest params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNiagaraBaselineController::OnBeginTest() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraBaselineController.OnBeginTest"));
    struct Params_OnBeginTest {
    }; // Size: 0x0
    Params_OnBeginTest params{};
    ProcessEvent(func, &params);
}
void UNiagaraBaselineController::OnOwnerTick(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraBaselineController.OnOwnerTick"));
    struct Params_OnOwnerTick {
        float DeltaTime; // 0x0
    }; // Size: 0x4
    Params_OnOwnerTick params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
void UNiagaraBaselineController::OnEndTest(FNiagaraPerfBaselineStats Stats) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraBaselineController.OnEndTest"));
    struct Params_OnEndTest {
        FNiagaraPerfBaselineStats Stats; // 0x0
    }; // Size: 0x10
    Params_OnEndTest params{};
    params.Stats = (FNiagaraPerfBaselineStats)Stats;
    ProcessEvent(func, &params);
}
UNiagaraSystem* UNiagaraBaselineController::GetSystem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraBaselineController.GetSystem"));
    struct Params_GetSystem {
        UNiagaraSystem* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSystem params{};
    ProcessEvent(func, &params);
    return (UNiagaraSystem*)params.ReturnValue;
}
