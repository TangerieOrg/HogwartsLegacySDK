#include "FVector.hpp"
#include "UFunction.hpp"
#include "UOdcNavLinkComponent.hpp"
#include "USplineComponent.hpp"
#include "USplineNavLinkComponent.hpp"
USplineNavLinkComponent* USplineNavLinkComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SplineNavLinkComponent");
    return (USplineNavLinkComponent*)res;
}
void USplineNavLinkComponent::RegisterNavLink() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SplineNavLinkComponent.RegisterNavLink"));
    struct Params_RegisterNavLink {
    }; // Size: 0x0
    Params_RegisterNavLink params{};
    ProcessEvent(func, &params);
}
