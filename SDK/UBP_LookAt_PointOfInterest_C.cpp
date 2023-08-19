#include "UBP_LookAt_PointOfInterest_C.hpp"
#include "UCameraStackBehaviorLookAt.hpp"
UBP_LookAt_PointOfInterest_C* UBP_LookAt_PointOfInterest_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAt_PointOfInterest.BP_LookAt_PointOfInterest_C");
    return (UBP_LookAt_PointOfInterest_C*)res;
}
