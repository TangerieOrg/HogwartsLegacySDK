#include "ULightComponentStateContactShadowLength.hpp"
#include "ULightComponentStateFloatMap.hpp"
ULightComponentStateContactShadowLength* ULightComponentStateContactShadowLength::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateContactShadowLength");
    return (ULightComponentStateContactShadowLength*)res;
}
