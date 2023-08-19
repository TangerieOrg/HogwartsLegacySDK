#include "AInstancedFoliageActor.hpp"
#include "ALandscapeProxy.hpp"
#include "UFoliageRemoverBoundsComponent.hpp"
#include "UFoliageRemoverContainer.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UWorld.hpp"
UFoliageRemoverContainer* UFoliageRemoverContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FoliageRemoverContainer");
    return (UFoliageRemoverContainer*)res;
}
void UFoliageRemoverContainer::UnregisterFoliageRemoverBoundsComponent(UFoliageRemoverBoundsComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoliageRemoverContainer.UnregisterFoliageRemoverBoundsComponent"));
    struct Params_UnregisterFoliageRemoverBoundsComponent {
        UFoliageRemoverBoundsComponent* Component; // 0x0
    }; // Size: 0x8
    Params_UnregisterFoliageRemoverBoundsComponent params{};
    params.Component = (UFoliageRemoverBoundsComponent*)Component;
    ProcessEvent(func, &params);
}
void UFoliageRemoverContainer::RegisterFoliageRemoverBoundsComponent(UFoliageRemoverBoundsComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoliageRemoverContainer.RegisterFoliageRemoverBoundsComponent"));
    struct Params_RegisterFoliageRemoverBoundsComponent {
        UFoliageRemoverBoundsComponent* Component; // 0x0
    }; // Size: 0x8
    Params_RegisterFoliageRemoverBoundsComponent params{};
    params.Component = (UFoliageRemoverBoundsComponent*)Component;
    ProcessEvent(func, &params);
}
void UFoliageRemoverContainer::OnAnyLevelLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoliageRemoverContainer.OnAnyLevelLoaded"));
    struct Params_OnAnyLevelLoaded {
    }; // Size: 0x0
    Params_OnAnyLevelLoaded params{};
    ProcessEvent(func, &params);
}
