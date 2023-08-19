#include "FAnimationArchitectAsset_Connection.hpp"
#include "UAnimationArchitectAsset.hpp"
#include "UAnimationArcitectAsset_ConnectionsCluster.hpp"
#include "UBaseArchitectAsset.hpp"
UAnimationArchitectAsset* UAnimationArchitectAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.AnimationArchitectAsset");
    return (UAnimationArchitectAsset*)res;
}
