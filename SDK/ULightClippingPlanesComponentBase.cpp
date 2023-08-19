#include "ULightClippingComponent.hpp"
#include "ULightClippingPlanesComponentBase.hpp"
ULightClippingPlanesComponentBase* ULightClippingPlanesComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightClippingPlanesComponentBase");
    return (ULightClippingPlanesComponentBase*)res;
}
