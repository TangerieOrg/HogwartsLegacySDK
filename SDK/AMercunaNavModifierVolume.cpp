#include "AMercunaNavModifierVolume.hpp"
#include "AMercunaNavOctree.hpp"
#include "AVolume.hpp"
#include "FMercunaNavUsageTypes.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
AMercunaNavModifierVolume* AMercunaNavModifierVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaNavModifierVolume");
    return (AMercunaNavModifierVolume*)res;
}
void AMercunaNavModifierVolume::AddToOctree(AMercunaNavOctree* NavOctree) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavModifierVolume.AddToOctree"));
    struct Params_AddToOctree {
        AMercunaNavOctree* NavOctree; // 0x0
    }; // Size: 0x8
    Params_AddToOctree params{};
    params.NavOctree = (AMercunaNavOctree*)NavOctree;
    ProcessEvent(func, &params);
}
void AMercunaNavModifierVolume::SetUsageTypes(FMercunaNavUsageTypes& NewUsageTypes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavModifierVolume.SetUsageTypes"));
    struct Params_SetUsageTypes {
        FMercunaNavUsageTypes NewUsageTypes; // 0x0
    }; // Size: 0x4
    Params_SetUsageTypes params{};
    params.NewUsageTypes = (FMercunaNavUsageTypes)NewUsageTypes;
    ProcessEvent(func, &params);
    NewUsageTypes = params.NewUsageTypes;
}
void AMercunaNavModifierVolume::SetSize(FVector Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavModifierVolume.SetSize"));
    struct Params_SetSize {
        FVector Size; // 0x0
    }; // Size: 0xc
    Params_SetSize params{};
    params.Size = (FVector)Size;
    ProcessEvent(func, &params);
}
void AMercunaNavModifierVolume::SetCostMultiplier(float NewCostMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavModifierVolume.SetCostMultiplier"));
    struct Params_SetCostMultiplier {
        float NewCostMultiplier; // 0x0
    }; // Size: 0x4
    Params_SetCostMultiplier params{};
    params.NewCostMultiplier = (float)NewCostMultiplier;
    ProcessEvent(func, &params);
}
void AMercunaNavModifierVolume::SetLocationAndSize(FVector Location, FVector Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavModifierVolume.SetLocationAndSize"));
    struct Params_SetLocationAndSize {
        FVector Location; // 0x0
        FVector Size; // 0xc
    }; // Size: 0x18
    Params_SetLocationAndSize params{};
    params.Location = (FVector)Location;
    params.Size = (FVector)Size;
    ProcessEvent(func, &params);
}
void AMercunaNavModifierVolume::SetLocation(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavModifierVolume.SetLocation"));
    struct Params_SetLocation {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_SetLocation params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
void AMercunaNavModifierVolume::SetEnabled(bool Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavModifierVolume.SetEnabled"));
    struct Params_SetEnabled {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
}
