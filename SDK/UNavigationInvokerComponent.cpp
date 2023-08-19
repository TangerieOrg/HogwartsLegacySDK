#include "UActorComponent.hpp"
#include "UNavigationInvokerComponent.hpp"
UNavigationInvokerComponent* UNavigationInvokerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavigationInvokerComponent");
    return (UNavigationInvokerComponent*)res;
}
