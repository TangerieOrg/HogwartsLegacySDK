#include "FNavSlideInfo.hpp"
#include "FSelectableSubobjectName.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UOdcNavLinkComponent.hpp"
#include "USlideNavLinkComponent.hpp"
bool USlideNavLinkComponent::HasValidLinks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SlideNavLinkComponent.HasValidLinks"));
    struct Params_HasValidLinks {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasValidLinks params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
USlideNavLinkComponent* USlideNavLinkComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SlideNavLinkComponent");
    return (USlideNavLinkComponent*)res;
}
void USlideNavLinkComponent::UpdateNavLink(FNavSlideInfo& Info) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SlideNavLinkComponent.UpdateNavLink"));
    struct Params_UpdateNavLink {
        FNavSlideInfo Info; // 0x0
    }; // Size: 0x18
    Params_UpdateNavLink params{};
    params.Info = (FNavSlideInfo)Info;
    ProcessEvent(func, &params);
    Info = params.Info;
}
void USlideNavLinkComponent::RegisterNavLink() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SlideNavLinkComponent.RegisterNavLink"));
    struct Params_RegisterNavLink {
    }; // Size: 0x0
    Params_RegisterNavLink params{};
    ProcessEvent(func, &params);
}
