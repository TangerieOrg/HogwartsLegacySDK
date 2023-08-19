#include "ULightClippingProvider.hpp"
#include "UObject.hpp"
ULightClippingProvider* ULightClippingProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightClippingProvider");
    return (ULightClippingProvider*)res;
}
