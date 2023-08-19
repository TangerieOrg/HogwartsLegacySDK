#include "AInfo.hpp"
#include "ASkyOnly.hpp"
#include "FSkyAtmosphereSkyOnlyParameters.hpp"
#include "USkyOnlyComponent.hpp"
ASkyOnly* ASkyOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyOnly");
    return (ASkyOnly*)res;
}
