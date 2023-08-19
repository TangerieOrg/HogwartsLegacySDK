#include "FStationArchitectAsset_Connection.hpp"
#include "UObject.hpp"
#include "UStationArcitectAsset_ConnectionsCluster.hpp"
UStationArcitectAsset_ConnectionsCluster* UStationArcitectAsset_ConnectionsCluster::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.StationArcitectAsset_ConnectionsCluster");
    return (UStationArcitectAsset_ConnectionsCluster*)res;
}
