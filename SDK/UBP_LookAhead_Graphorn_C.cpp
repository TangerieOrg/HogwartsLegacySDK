#include "UBP_LookAhead_Graphorn_C.hpp"
#include "UCameraStackBehaviorLookAhead.hpp"
UBP_LookAhead_Graphorn_C* UBP_LookAhead_Graphorn_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAhead_Graphorn.BP_LookAhead_Graphorn_C");
    return (UBP_LookAhead_Graphorn_C*)res;
}
