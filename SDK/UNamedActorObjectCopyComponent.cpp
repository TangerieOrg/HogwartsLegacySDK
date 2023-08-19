#include "UBaseObjectCopyComponent.hpp"
#include "UNamedActorObjectCopyComponent.hpp"
UNamedActorObjectCopyComponent* UNamedActorObjectCopyComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NamedActorObjectCopyComponent");
    return (UNamedActorObjectCopyComponent*)res;
}
