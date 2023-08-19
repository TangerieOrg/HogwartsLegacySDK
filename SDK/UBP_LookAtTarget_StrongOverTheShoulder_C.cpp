#include "UBP_LookAtTarget_StrongOverTheShoulder_C.hpp"
#include "UBP_LookAtTarget_Strong_C.hpp"
UBP_LookAtTarget_StrongOverTheShoulder_C* UBP_LookAtTarget_StrongOverTheShoulder_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAtTarget_StrongOverTheShoulder.BP_LookAtTarget_StrongOverTheShoulder_C");
    return (UBP_LookAtTarget_StrongOverTheShoulder_C*)res;
}
