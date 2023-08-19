#include "UPointAtActorBaseComponent.hpp"
#include "UPointAtPlayerComponent.hpp"
UPointAtPlayerComponent* UPointAtPlayerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PointAtPlayerComponent");
    return (UPointAtPlayerComponent*)res;
}
