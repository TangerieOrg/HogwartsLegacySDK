#include "UManualNavigationInvokerComponent.hpp"
#include "UNavigationInvokerComponent.hpp"
UManualNavigationInvokerComponent* UManualNavigationInvokerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ManualNavigationInvokerComponent");
    return (UManualNavigationInvokerComponent*)res;
}
