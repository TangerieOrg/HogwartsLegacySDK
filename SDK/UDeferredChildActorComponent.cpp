#include "UChildActorComponent.hpp"
#include "UDeferredChildActorComponent.hpp"
UDeferredChildActorComponent* UDeferredChildActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DeferredChildActorComponent");
    return (UDeferredChildActorComponent*)res;
}
