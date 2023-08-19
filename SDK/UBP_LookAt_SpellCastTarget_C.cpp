#include "UBP_LookAt_SpellCastTarget_C.hpp"
#include "UCameraStackBehaviorLookAt.hpp"
UBP_LookAt_SpellCastTarget_C* UBP_LookAt_SpellCastTarget_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAt_SpellCastTarget.BP_LookAt_SpellCastTarget_C");
    return (UBP_LookAt_SpellCastTarget_C*)res;
}
