#include "AActor.hpp"
#include "FBoxSphereBounds.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UObjectBuoyancyComponent.hpp"
#include "UStaticMeshComponent.hpp"
UObjectBuoyancyComponent* UObjectBuoyancyComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ObjectBuoyancyComponent");
    return (UObjectBuoyancyComponent*)res;
}
void UObjectBuoyancyComponent::ToggleOn(bool bToggle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectBuoyancyComponent.ToggleOn"));
    struct Params_ToggleOn {
        bool bToggle; // 0x0
    }; // Size: 0x1
    Params_ToggleOn params{};
    params.bToggle = (bool)bToggle;
    ProcessEvent(func, &params);
}
