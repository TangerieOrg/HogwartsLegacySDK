#include "AActor.hpp"
#include "ANiagaraPreviewGrid.hpp"
#include "ENiagaraPreviewGridResetMode.hpp"
#include "UChildActorComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraPreviewAxis.hpp"
#include "UNiagaraSystem.hpp"
ANiagaraPreviewGrid* ANiagaraPreviewGrid::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraPreviewGrid");
    return (ANiagaraPreviewGrid*)res;
}
void ANiagaraPreviewGrid::SetPaused(bool bPaused) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraPreviewGrid.SetPaused"));
    struct Params_SetPaused {
        bool bPaused; // 0x0
    }; // Size: 0x1
    Params_SetPaused params{};
    params.bPaused = (bool)bPaused;
    ProcessEvent(func, &params);
}
void ANiagaraPreviewGrid::GetPreviews(TArray<UNiagaraComponent*>& OutPreviews) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews"));
    struct Params_GetPreviews {
        TArray<UNiagaraComponent*> OutPreviews; // 0x0
    }; // Size: 0x10
    Params_GetPreviews params{};
    params.OutPreviews = (TArray<UNiagaraComponent*>)OutPreviews;
    ProcessEvent(func, &params);
    OutPreviews = params.OutPreviews;
}
void ANiagaraPreviewGrid::DeactivatePreviews() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews"));
    struct Params_DeactivatePreviews {
    }; // Size: 0x0
    Params_DeactivatePreviews params{};
    ProcessEvent(func, &params);
}
void ANiagaraPreviewGrid::ActivatePreviews(bool bReset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews"));
    struct Params_ActivatePreviews {
        bool bReset; // 0x0
    }; // Size: 0x1
    Params_ActivatePreviews params{};
    params.bReset = (bool)bReset;
    ProcessEvent(func, &params);
}
