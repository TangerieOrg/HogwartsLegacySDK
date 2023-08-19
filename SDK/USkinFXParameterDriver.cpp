#include "UObject.hpp"
#include "USkinFXParameterDriver.hpp"
USkinFXParameterDriver* USkinFXParameterDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXParameterDriver");
    return (USkinFXParameterDriver*)res;
}
