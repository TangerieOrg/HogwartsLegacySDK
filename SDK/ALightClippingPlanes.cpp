#include "AActor.hpp"
#include "ALightClippingPlanes.hpp"
#include "ULightClippingPlanesComponent.hpp"
ALightClippingPlanes* ALightClippingPlanes::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightClippingPlanes");
    return (ALightClippingPlanes*)res;
}
