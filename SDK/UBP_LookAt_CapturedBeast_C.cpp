#include "UBP_LookAt_CapturedBeast_C.hpp"
#include "UBP_LookAt_SpellTarget_C.hpp"
UBP_LookAt_CapturedBeast_C* UBP_LookAt_CapturedBeast_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAt_CapturedBeast.BP_LookAt_CapturedBeast_C");
    return (UBP_LookAt_CapturedBeast_C*)res;
}
