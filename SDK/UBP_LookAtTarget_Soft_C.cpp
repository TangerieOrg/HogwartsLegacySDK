#include "UBP_LookAtTarget_Soft_C.hpp"
#include "UCameraStackBehaviorLookAt.hpp"
UBP_LookAtTarget_Soft_C* UBP_LookAtTarget_Soft_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAtTarget_Soft.BP_LookAtTarget_Soft_C");
    return (UBP_LookAtTarget_Soft_C*)res;
}
