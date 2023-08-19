#include "UBP_LookAtTarget_Strong_C.hpp"
#include "UCameraStackBehaviorLookAt.hpp"
UBP_LookAtTarget_Strong_C* UBP_LookAtTarget_Strong_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAtTarget_Strong.BP_LookAtTarget_Strong_C");
    return (UBP_LookAtTarget_Strong_C*)res;
}
