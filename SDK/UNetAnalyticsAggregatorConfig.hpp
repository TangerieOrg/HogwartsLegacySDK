#pragma once
#include <cstdint>
#include "FNetAnalyticsDataConfig.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UNetAnalyticsAggregatorConfig : public UObject {
public:
    TArray<FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28
    static UNetAnalyticsAggregatorConfig* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
