#include "USkinFXParameterLocatorListLerpIndexDriver.hpp"
#include "USkinFXParameterLocatorListLerpIndexDriverPerLocatorTime.hpp"
USkinFXParameterLocatorListLerpIndexDriverPerLocatorTime* USkinFXParameterLocatorListLerpIndexDriverPerLocatorTime::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXParameterLocatorListLerpIndexDriverPerLocatorTime");
    return (USkinFXParameterLocatorListLerpIndexDriverPerLocatorTime*)res;
}
