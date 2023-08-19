#include "UCloudDefinitions.hpp"
#include "UCloudParams.hpp"
#include "UDataAsset.hpp"
UCloudDefinitions* UCloudDefinitions::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.CloudDefinitions");
    return (UCloudDefinitions*)res;
}
