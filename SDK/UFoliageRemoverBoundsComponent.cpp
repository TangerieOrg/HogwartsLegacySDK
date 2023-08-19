#include "UBoxComponent.hpp"
#include "UFoliageRemoverBoundsComponent.hpp"
#include "UFunction.hpp"
void UFoliageRemoverBoundsComponent::RemoveVegetationInsideBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoliageRemoverBoundsComponent.RemoveVegetationInsideBounds"));
    struct Params_RemoveVegetationInsideBounds {
    }; // Size: 0x0
    Params_RemoveVegetationInsideBounds params{};
    ProcessEvent(func, &params);
}
UFoliageRemoverBoundsComponent* UFoliageRemoverBoundsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FoliageRemoverBoundsComponent");
    return (UFoliageRemoverBoundsComponent*)res;
}
