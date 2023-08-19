#include "UInteractionMechanic.hpp"
#include "UPlaneDistanceFromHitMechanic.hpp"
UPlaneDistanceFromHitMechanic* UPlaneDistanceFromHitMechanic::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.PlaneDistanceFromHitMechanic");
    return (UPlaneDistanceFromHitMechanic*)res;
}
