#include "FDataTableRowHandle.hpp"
#include "FSunDiskOverrides.hpp"
#include "FVolumetricCloudsWeatherWindParams.hpp"
#include "UCloudParams.hpp"
#include "UCloudParamsPreset.hpp"
UCloudParamsPreset* UCloudParamsPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.CloudParamsPreset");
    return (UCloudParamsPreset*)res;
}
