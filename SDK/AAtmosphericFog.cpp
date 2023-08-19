#include "AAtmosphericFog.hpp"
#include "AInfo.hpp"
#include "UAtmosphericFogComponent.hpp"
AAtmosphericFog* AAtmosphericFog::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AtmosphericFog");
    return (AAtmosphericFog*)res;
}
