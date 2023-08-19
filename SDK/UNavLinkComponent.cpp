#include "FNavigationLink.hpp"
#include "UNavLinkComponent.hpp"
#include "UPrimitiveComponent.hpp"
UNavLinkComponent* UNavLinkComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavLinkComponent");
    return (UNavLinkComponent*)res;
}
