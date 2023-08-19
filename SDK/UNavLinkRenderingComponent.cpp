#include "UNavLinkRenderingComponent.hpp"
#include "UPrimitiveComponent.hpp"
UNavLinkRenderingComponent* UNavLinkRenderingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavLinkRenderingComponent");
    return (UNavLinkRenderingComponent*)res;
}
