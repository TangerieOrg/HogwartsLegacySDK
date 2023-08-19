#include "AActor.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UCreatureFeedFloatingComponent.hpp"
#include "UFunction.hpp"
FVector UCreatureFeedFloatingComponent::GetAveragePelletLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedFloatingComponent.GetAveragePelletLocation"));
    struct Params_GetAveragePelletLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetAveragePelletLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
UCreatureFeedFloatingComponent* UCreatureFeedFloatingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureFeedFloatingComponent");
    return (UCreatureFeedFloatingComponent*)res;
}
