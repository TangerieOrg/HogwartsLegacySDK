#include "UBP_DollyZoom_Broom_Boost_C.hpp"
#include "UCameraStackBehaviorDollyZoom.hpp"
UBP_DollyZoom_Broom_Boost_C* UBP_DollyZoom_Broom_Boost_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_DollyZoom_Broom_Boost.BP_DollyZoom_Broom_Boost_C");
    return (UBP_DollyZoom_Broom_Boost_C*)res;
}
