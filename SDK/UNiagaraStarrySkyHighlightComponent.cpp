#include "FStarrySkyHighlightParameters.hpp"
#include "FStarrySkyHighlights.hpp"
#include "UFunction.hpp"
#include "UNiagaraStarrySkyComponent.hpp"
#include "UNiagaraStarrySkyHighlightComponent.hpp"
#include "UStarCatalog.hpp"
void UNiagaraStarrySkyHighlightComponent::SetHighlightConstellation(FName ConstellationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkyHighlightComponent.SetHighlightConstellation"));
    struct Params_SetHighlightConstellation {
        FName ConstellationName; // 0x0
    }; // Size: 0x8
    Params_SetHighlightConstellation params{};
    params.ConstellationName = (FName)ConstellationName;
    ProcessEvent(func, &params);
}
UNiagaraStarrySkyHighlightComponent* UNiagaraStarrySkyHighlightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.NiagaraStarrySkyHighlightComponent");
    return (UNiagaraStarrySkyHighlightComponent*)res;
}
void UNiagaraStarrySkyHighlightComponent::SupportedHighlightConstellations(int32_t& Constellations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkyHighlightComponent.SupportedHighlightConstellations"));
    struct Params_SupportedHighlightConstellations {
        int32_t Constellations; // 0x0
    }; // Size: 0x4
    Params_SupportedHighlightConstellations params{};
    params.Constellations = (int32_t)Constellations;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Constellations = params.Constellations;
}
void UNiagaraStarrySkyHighlightComponent::SetHighlightStar(FName StarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkyHighlightComponent.SetHighlightStar"));
    struct Params_SetHighlightStar {
        FName StarName; // 0x0
    }; // Size: 0x8
    Params_SetHighlightStar params{};
    params.StarName = (FName)StarName;
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkyHighlightComponent::SetHighlights(TArray<FName> ConstellationNames, FName StarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkyHighlightComponent.SetHighlights"));
    struct Params_SetHighlights {
        TArray<FName> ConstellationNames; // 0x0
        FName StarName; // 0x10
    }; // Size: 0x18
    Params_SetHighlights params{};
    params.ConstellationNames = (TArray<FName>)ConstellationNames;
    params.StarName = (FName)StarName;
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkyHighlightComponent::SetHighlightConstellations(TArray<FName> ConstellationNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkyHighlightComponent.SetHighlightConstellations"));
    struct Params_SetHighlightConstellations {
        TArray<FName> ConstellationNames; // 0x0
    }; // Size: 0x10
    Params_SetHighlightConstellations params{};
    params.ConstellationNames = (TArray<FName>)ConstellationNames;
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkyHighlightComponent::ClearHighlights() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkyHighlightComponent.ClearHighlights"));
    struct Params_ClearHighlights {
    }; // Size: 0x0
    Params_ClearHighlights params{};
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkyHighlightComponent::SetHighlight(FName ConstellationName, FName StarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkyHighlightComponent.SetHighlight"));
    struct Params_SetHighlight {
        FName ConstellationName; // 0x0
        FName StarName; // 0x8
    }; // Size: 0x10
    Params_SetHighlight params{};
    params.ConstellationName = (FName)ConstellationName;
    params.StarName = (FName)StarName;
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkyHighlightComponent::ClearHighlightConstellations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkyHighlightComponent.ClearHighlightConstellations"));
    struct Params_ClearHighlightConstellations {
    }; // Size: 0x0
    Params_ClearHighlightConstellations params{};
    ProcessEvent(func, &params);
}
