#include "UBP_AddAccumulatedRotation_TransformAll_C.hpp"
#include "UCameraStackBehaviorAddAccumulatedRotation.hpp"
UBP_AddAccumulatedRotation_TransformAll_C* UBP_AddAccumulatedRotation_TransformAll_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_AddAccumulatedRotation_TransformAll.BP_AddAccumulatedRotation_TransformAll_C");
    return (UBP_AddAccumulatedRotation_TransformAll_C*)res;
}
