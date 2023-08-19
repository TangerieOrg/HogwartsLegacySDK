#include "UDataAsset.hpp"
#include "UMultiFX2_Base.hpp"
#include "UPopulationConfigData.hpp"
UPopulationConfigData* UPopulationConfigData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PopulationConfigData");
    return (UPopulationConfigData*)res;
}
