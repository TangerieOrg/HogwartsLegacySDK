#include "UDataAsset.hpp"
#include "UStupidShaderGroupBuildingInfo.hpp"
UStupidShaderGroupBuildingInfo* UStupidShaderGroupBuildingInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StupidShaderGroupBuildingInfo");
    return (UStupidShaderGroupBuildingInfo*)res;
}
