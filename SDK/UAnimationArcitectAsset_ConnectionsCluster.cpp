#include "FAnimationArchitectAsset_Connection.hpp"
#include "UAnimationArcitectAsset_ConnectionsCluster.hpp"
#include "UObject.hpp"
UAnimationArcitectAsset_ConnectionsCluster* UAnimationArcitectAsset_ConnectionsCluster::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.AnimationArcitectAsset_ConnectionsCluster");
    return (UAnimationArcitectAsset_ConnectionsCluster*)res;
}
