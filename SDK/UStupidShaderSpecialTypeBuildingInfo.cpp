#include "UDataAsset.hpp"
#include "UStupidShaderSpecialTypeBuildingInfo.hpp"
UStupidShaderSpecialTypeBuildingInfo* UStupidShaderSpecialTypeBuildingInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StupidShaderSpecialTypeBuildingInfo");
    return (UStupidShaderSpecialTypeBuildingInfo*)res;
}
