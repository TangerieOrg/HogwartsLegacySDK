#include "FStationArchitectAsset_Connection.hpp"
#include "UBaseArchitectAsset.hpp"
#include "UStationArchitectAsset.hpp"
#include "UStationArcitectAsset_ConnectionsCluster.hpp"
UStationArchitectAsset* UStationArchitectAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.StationArchitectAsset");
    return (UStationArchitectAsset*)res;
}
