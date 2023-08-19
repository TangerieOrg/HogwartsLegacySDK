#include "FVolumetricCloudsWindParameters.hpp"
#include "UCloudsWindParams.hpp"
#include "UCloudsWindParamsFull.hpp"
UCloudsWindParamsFull* UCloudsWindParamsFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudsWindParamsFull");
    return (UCloudsWindParamsFull*)res;
}
