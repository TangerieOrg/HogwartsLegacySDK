#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStatsComponentReportComponent;
#pragma pack(push, 1)
class AStatsComponentReport : public AActor {
public:
    UStatsComponentReportComponent* UpdateComponent; // 0x248
    static AStatsComponentReport* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
