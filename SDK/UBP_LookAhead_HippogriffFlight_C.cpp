#include "UBP_LookAhead_HippogriffFlight_C.hpp"
#include "UCameraStackBehaviorLookAhead.hpp"
UBP_LookAhead_HippogriffFlight_C* UBP_LookAhead_HippogriffFlight_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAhead_HippogriffFlight.BP_LookAhead_HippogriffFlight_C");
    return (UBP_LookAhead_HippogriffFlight_C*)res;
}
