#include "UActorComponent.hpp"
#include "UWindSourceDebugUpdateComponent.hpp"
UWindSourceDebugUpdateComponent* UWindSourceDebugUpdateComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindSourceDebugUpdateComponent");
    return (UWindSourceDebugUpdateComponent*)res;
}
