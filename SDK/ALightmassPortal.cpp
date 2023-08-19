#include "AActor.hpp"
#include "ALightmassPortal.hpp"
#include "ULightmassPortalComponent.hpp"
ALightmassPortal* ALightmassPortal::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightmassPortal");
    return (ALightmassPortal*)res;
}
