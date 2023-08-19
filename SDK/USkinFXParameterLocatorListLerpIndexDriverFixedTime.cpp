#include "USkinFXParameterLocatorListLerpIndexDriver.hpp"
#include "USkinFXParameterLocatorListLerpIndexDriverFixedTime.hpp"
USkinFXParameterLocatorListLerpIndexDriverFixedTime* USkinFXParameterLocatorListLerpIndexDriverFixedTime::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXParameterLocatorListLerpIndexDriverFixedTime");
    return (USkinFXParameterLocatorListLerpIndexDriverFixedTime*)res;
}
