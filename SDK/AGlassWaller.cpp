#include "AActor.hpp"
#include "AGlassWaller.hpp"
#include "EComponentMobility\Type.hpp"
#include "ENavDataGatheringMode.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "USplineComponent.hpp"
AGlassWaller* AGlassWaller::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GlassWaller");
    return (AGlassWaller*)res;
}
bool AGlassWaller::WithEditor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GlassWaller.WithEditor"));
    struct Params_WithEditor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_WithEditor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AGlassWaller::SetMobility(EComponentMobility::Type InMobility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GlassWaller.SetMobility"));
    struct Params_SetMobility {
        EComponentMobility::Type InMobility; // 0x0
    }; // Size: 0x1
    Params_SetMobility params{};
    params.InMobility = (EComponentMobility::Type)InMobility;
    ProcessEvent(func, &params);
}
