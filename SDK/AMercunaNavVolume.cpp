#include "AMercunaNavOctree.hpp"
#include "AMercunaNavVolume.hpp"
#include "AVolume.hpp"
#include "EMercunaLevelOfDetail.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
AMercunaNavVolume* AMercunaNavVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaNavVolume");
    return (AMercunaNavVolume*)res;
}
void AMercunaNavVolume::SetSize(FVector Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavVolume.SetSize"));
    struct Params_SetSize {
        FVector Size; // 0x0
    }; // Size: 0xc
    Params_SetSize params{};
    params.Size = (FVector)Size;
    ProcessEvent(func, &params);
}
void AMercunaNavVolume::SetNavigationRotation(FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavVolume.SetNavigationRotation"));
    struct Params_SetNavigationRotation {
        FRotator Rotation; // 0x0
    }; // Size: 0xc
    Params_SetNavigationRotation params{};
    params.Rotation = (FRotator)Rotation;
    ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void AMercunaNavVolume::AddToOctree(AMercunaNavOctree* NavOctree) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavVolume.AddToOctree"));
    struct Params_AddToOctree {
        AMercunaNavOctree* NavOctree; // 0x0
    }; // Size: 0x8
    Params_AddToOctree params{};
    params.NavOctree = (AMercunaNavOctree*)NavOctree;
    ProcessEvent(func, &params);
}
