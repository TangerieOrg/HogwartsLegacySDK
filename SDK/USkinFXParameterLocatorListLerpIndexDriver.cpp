#include "UObject.hpp"
#include "USkinFXParameterLocatorListLerpIndexDriver.hpp"
USkinFXParameterLocatorListLerpIndexDriver* USkinFXParameterLocatorListLerpIndexDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXParameterLocatorListLerpIndexDriver");
    return (USkinFXParameterLocatorListLerpIndexDriver*)res;
}
