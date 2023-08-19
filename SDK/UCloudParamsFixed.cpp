#include "FCloudParameters.hpp"
#include "FVolumetricCloudsWeatherWindParams.hpp"
#include "UCloudParams.hpp"
#include "UCloudParamsFixed.hpp"
UCloudParamsFixed* UCloudParamsFixed::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.CloudParamsFixed");
    return (UCloudParamsFixed*)res;
}
