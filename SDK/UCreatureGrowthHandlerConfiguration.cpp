#include "UCreatureGrowthHandlerConfiguration.hpp"
#include "UDataAsset.hpp"
UCreatureGrowthHandlerConfiguration* UCreatureGrowthHandlerConfiguration::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureGrowthHandlerConfiguration");
    return (UCreatureGrowthHandlerConfiguration*)res;
}
