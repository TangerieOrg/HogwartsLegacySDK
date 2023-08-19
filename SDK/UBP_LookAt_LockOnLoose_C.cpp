#include "UBP_LookAt_LockOnLoose_C.hpp"
#include "UCameraStackBehaviorLookAt.hpp"
UBP_LookAt_LockOnLoose_C* UBP_LookAt_LockOnLoose_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAt_LockOnLoose.BP_LookAt_LockOnLoose_C");
    return (UBP_LookAt_LockOnLoose_C*)res;
}
