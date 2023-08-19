#include "UBP_LookAt_MountPredictedTrajectory_C.hpp"
#include "UCameraStackBehaviorLookAt.hpp"
UBP_LookAt_MountPredictedTrajectory_C* UBP_LookAt_MountPredictedTrajectory_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAt_MountPredictedTrajectory.BP_LookAt_MountPredictedTrajectory_C");
    return (UBP_LookAt_MountPredictedTrajectory_C*)res;
}
