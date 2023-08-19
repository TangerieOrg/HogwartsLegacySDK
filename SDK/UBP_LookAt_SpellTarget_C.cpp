#include "UBP_LookAt_SpellTarget_C.hpp"
#include "UCameraStackBehaviorLookAt.hpp"
UBP_LookAt_SpellTarget_C* UBP_LookAt_SpellTarget_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAt_SpellTarget.BP_LookAt_SpellTarget_C");
    return (UBP_LookAt_SpellTarget_C*)res;
}
