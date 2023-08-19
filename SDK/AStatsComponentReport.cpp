#include "AActor.hpp"
#include "AStatsComponentReport.hpp"
#include "UStatsComponentReportComponent.hpp"
AStatsComponentReport* AStatsComponentReport::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.StatsComponentReport");
    return (AStatsComponentReport*)res;
}
