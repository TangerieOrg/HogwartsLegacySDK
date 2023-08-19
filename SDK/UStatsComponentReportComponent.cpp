#include "FStatsComponentReportSettings.hpp"
#include "UActorComponent.hpp"
#include "UStatsComponentReportComponent.hpp"
UStatsComponentReportComponent* UStatsComponentReportComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.StatsComponentReportComponent");
    return (UStatsComponentReportComponent*)res;
}
