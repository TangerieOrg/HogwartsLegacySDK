#include "UHoleFillStatisticsProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UHoleFillStatisticsProperties* UHoleFillStatisticsProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.HoleFillStatisticsProperties");
    return (UHoleFillStatisticsProperties*)res;
}
