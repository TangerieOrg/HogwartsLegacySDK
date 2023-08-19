#include "FNetAnalyticsDataConfig.hpp"
#include "UNetAnalyticsAggregatorConfig.hpp"
#include "UObject.hpp"
UNetAnalyticsAggregatorConfig* UNetAnalyticsAggregatorConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/NetCore.NetAnalyticsAggregatorConfig");
    return (UNetAnalyticsAggregatorConfig*)res;
}
