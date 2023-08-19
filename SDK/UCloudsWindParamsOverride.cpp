#include "FVolumetricCloudsWindParametersOverride.hpp"
#include "UCloudsWindParams.hpp"
#include "UCloudsWindParamsOverride.hpp"
UCloudsWindParamsOverride* UCloudsWindParamsOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudsWindParamsOverride");
    return (UCloudsWindParamsOverride*)res;
}
