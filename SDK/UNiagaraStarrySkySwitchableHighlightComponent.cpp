#include "ESwitchableStarrySkyMode.hpp"
#include "FStarrySkyHighlightParameters.hpp"
#include "FStarrySkyHighlights.hpp"
#include "UFunction.hpp"
#include "UNiagaraStarrySkyComponent.hpp"
#include "UNiagaraStarrySkySwitchableHighlightComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UObject.hpp"
#include "UStarCatalog.hpp"
UNiagaraStarrySkySwitchableHighlightComponent* UNiagaraStarrySkySwitchableHighlightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent");
    return (UNiagaraStarrySkySwitchableHighlightComponent*)res;
}
bool UNiagaraStarrySkySwitchableHighlightComponent::StarrySkySetHighlightParameters(UObject* WorldContextObject, FStarrySkyHighlightParameters Parameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.StarrySkySetHighlightParameters"));
    struct Params_StarrySkySetHighlightParameters {
        UObject* WorldContextObject; // 0x0
        FStarrySkyHighlightParameters Parameters; // 0x8
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_StarrySkySetHighlightParameters params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Parameters = (FStarrySkyHighlightParameters)Parameters;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNiagaraStarrySkySwitchableHighlightComponent::ClearHighlightConstellations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.ClearHighlightConstellations"));
    struct Params_ClearHighlightConstellations {
    }; // Size: 0x0
    Params_ClearHighlightConstellations params{};
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkySwitchableHighlightComponent::SupportedHighlightConstellations(int32_t& Constellations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.SupportedHighlightConstellations"));
    struct Params_SupportedHighlightConstellations {
        int32_t Constellations; // 0x0
    }; // Size: 0x4
    Params_SupportedHighlightConstellations params{};
    params.Constellations = (int32_t)Constellations;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Constellations = params.Constellations;
}
bool UNiagaraStarrySkySwitchableHighlightComponent::StarrySkyStartHighlightings(UObject* WorldContextObject, TArray<FName> HighlightConstellationNames, FName HighlightStarName, float InitialModulate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.StarrySkyStartHighlightings"));
    struct Params_StarrySkyStartHighlightings {
        UObject* WorldContextObject; // 0x0
        TArray<FName> HighlightConstellationNames; // 0x8
        FName HighlightStarName; // 0x18
        float InitialModulate; // 0x20
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_StarrySkyStartHighlightings params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.HighlightConstellationNames = (TArray<FName>)HighlightConstellationNames;
    params.HighlightStarName = (FName)HighlightStarName;
    params.InitialModulate = (float)InitialModulate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNiagaraStarrySkySwitchableHighlightComponent::StarrySkyStartHighlighting(UObject* WorldContextObject, FName HighlightConstellationName, FName HighlightStarName, float InitialModulate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.StarrySkyStartHighlighting"));
    struct Params_StarrySkyStartHighlighting {
        UObject* WorldContextObject; // 0x0
        FName HighlightConstellationName; // 0x8
        FName HighlightStarName; // 0x10
        float InitialModulate; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_StarrySkyStartHighlighting params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.HighlightConstellationName = (FName)HighlightConstellationName;
    params.HighlightStarName = (FName)HighlightStarName;
    params.InitialModulate = (float)InitialModulate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNiagaraStarrySkySwitchableHighlightComponent::SetMode(ESwitchableStarrySkyMode Mode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetMode"));
    struct Params_SetMode {
        ESwitchableStarrySkyMode Mode; // 0x0
    }; // Size: 0x1
    Params_SetMode params{};
    params.Mode = (ESwitchableStarrySkyMode)Mode;
    ProcessEvent(func, &params);
}
bool UNiagaraStarrySkySwitchableHighlightComponent::StarrySkySetHighlightModulate(UObject* WorldContextObject, float Modulate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.StarrySkySetHighlightModulate"));
    struct Params_StarrySkySetHighlightModulate {
        UObject* WorldContextObject; // 0x0
        float Modulate; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_StarrySkySetHighlightModulate params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Modulate = (float)Modulate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNiagaraStarrySkySwitchableHighlightComponent::StarrySkyEndHighlighting(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.StarrySkyEndHighlighting"));
    struct Params_StarrySkyEndHighlighting {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_StarrySkyEndHighlighting params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNiagaraStarrySkySwitchableHighlightComponent::SetHighlightSystem(UNiagaraSystem* NiagaraSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetHighlightSystem"));
    struct Params_SetHighlightSystem {
        UNiagaraSystem* NiagaraSystem; // 0x0
    }; // Size: 0x8
    Params_SetHighlightSystem params{};
    params.NiagaraSystem = (UNiagaraSystem*)NiagaraSystem;
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkySwitchableHighlightComponent::SetHighlightStar(FName StarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetHighlightStar"));
    struct Params_SetHighlightStar {
        FName StarName; // 0x0
    }; // Size: 0x8
    Params_SetHighlightStar params{};
    params.StarName = (FName)StarName;
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkySwitchableHighlightComponent::SetHighlights(TArray<FName> ConstellationNames, FName StarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetHighlights"));
    struct Params_SetHighlights {
        TArray<FName> ConstellationNames; // 0x0
        FName StarName; // 0x10
    }; // Size: 0x18
    Params_SetHighlights params{};
    params.ConstellationNames = (TArray<FName>)ConstellationNames;
    params.StarName = (FName)StarName;
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkySwitchableHighlightComponent::IsHighlightLoadedSystem() {}
void UNiagaraStarrySkySwitchableHighlightComponent::SetHighlightConstellations(TArray<FName> ConstellationNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetHighlightConstellations"));
    struct Params_SetHighlightConstellations {
        TArray<FName> ConstellationNames; // 0x0
    }; // Size: 0x10
    Params_SetHighlightConstellations params{};
    params.ConstellationNames = (TArray<FName>)ConstellationNames;
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkySwitchableHighlightComponent::SetHighlightConstellation(FName ConstellationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetHighlightConstellation"));
    struct Params_SetHighlightConstellation {
        FName ConstellationName; // 0x0
    }; // Size: 0x8
    Params_SetHighlightConstellation params{};
    params.ConstellationName = (FName)ConstellationName;
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkySwitchableHighlightComponent::SetHighlight(FName ConstellationName, FName StarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.SetHighlight"));
    struct Params_SetHighlight {
        FName ConstellationName; // 0x0
        FName StarName; // 0x8
    }; // Size: 0x10
    Params_SetHighlight params{};
    params.ConstellationName = (FName)ConstellationName;
    params.StarName = (FName)StarName;
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkySwitchableHighlightComponent::LoadHighlightSystem() {}
void UNiagaraStarrySkySwitchableHighlightComponent::GetMode(ESwitchableStarrySkyMode& Mode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.GetMode"));
    struct Params_GetMode {
        ESwitchableStarrySkyMode Mode; // 0x0
    }; // Size: 0x1
    Params_GetMode params{};
    params.Mode = (ESwitchableStarrySkyMode)Mode;
    ProcessEvent(func, &params);
    Mode = params.Mode;
}
void UNiagaraStarrySkySwitchableHighlightComponent::ClearHighlights() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkySwitchableHighlightComponent.ClearHighlights"));
    struct Params_ClearHighlights {
    }; // Size: 0x0
    Params_ClearHighlights params{};
    ProcessEvent(func, &params);
}
