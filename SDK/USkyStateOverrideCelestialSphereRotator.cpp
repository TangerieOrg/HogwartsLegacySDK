#include "FRotator.hpp"
#include "USkyStateOverride.hpp"
#include "USkyStateOverrideCelestialSphereRotator.hpp"
USkyStateOverrideCelestialSphereRotator* USkyStateOverrideCelestialSphereRotator::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.SkyStateOverrideCelestialSphereRotator");
    return (USkyStateOverrideCelestialSphereRotator*)res;
}
