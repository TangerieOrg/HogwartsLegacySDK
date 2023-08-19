#include "USceneComponent.hpp"
#include "UWindMapComponent.hpp"
UWindMapComponent* UWindMapComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindMapComponent");
    return (UWindMapComponent*)res;
}
