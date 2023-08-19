#include "UBP_LookAt_MountPredictedTrajectory_C.hpp"
#include "UBP_LookAt_MountPredictedTrajectory_Hippogriff_C.hpp"
UBP_LookAt_MountPredictedTrajectory_Hippogriff_C* UBP_LookAt_MountPredictedTrajectory_Hippogriff_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAt_MountPredictedTrajectory_Hippogriff.BP_LookAt_MountPredictedTrajectory_Hippogriff_C");
    return (UBP_LookAt_MountPredictedTrajectory_Hippogriff_C*)res;
}
