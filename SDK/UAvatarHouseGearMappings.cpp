#include "UAvatarHouseGearMappings.hpp"
#include "UDataAsset.hpp"
UAvatarHouseGearMappings* UAvatarHouseGearMappings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvatarHouseGearMappings");
    return (UAvatarHouseGearMappings*)res;
}
