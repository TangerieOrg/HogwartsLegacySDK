#include "UCameraFadeVegetationDisable.hpp"
#include "URenderSettingsNamedCustomBlendDomain.hpp"
UCameraFadeVegetationDisable* UCameraFadeVegetationDisable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraFadeVegetationDisable");
    return (UCameraFadeVegetationDisable*)res;
}
