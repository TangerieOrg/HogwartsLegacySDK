#include "UBP_LookAtTarget_SoftPitchOnly_C.hpp"
#include "UBP_LookAtTarget_Soft_C.hpp"
UBP_LookAtTarget_SoftPitchOnly_C* UBP_LookAtTarget_SoftPitchOnly_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAtTarget_SoftPitchOnly.BP_LookAtTarget_SoftPitchOnly_C");
    return (UBP_LookAtTarget_SoftPitchOnly_C*)res;
}
