#include "USceneComponent.hpp"
#include "UWindTrueNorthComponent.hpp"
UWindTrueNorthComponent* UWindTrueNorthComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindTrueNorthComponent");
    return (UWindTrueNorthComponent*)res;
}
