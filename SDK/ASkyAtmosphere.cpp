#include "AInfo.hpp"
#include "ASkyAtmosphere.hpp"
#include "USkyAtmosphereComponent.hpp"
ASkyAtmosphere* ASkyAtmosphere::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkyAtmosphere");
    return (ASkyAtmosphere*)res;
}
