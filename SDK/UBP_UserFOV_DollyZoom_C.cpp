#include "UBP_UserFOV_DollyZoom_C.hpp"
#include "UCameraStackBehaviorUserFOVDollyZoom.hpp"
UBP_UserFOV_DollyZoom_C* UBP_UserFOV_DollyZoom_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_UserFOV_DollyZoom.BP_UserFOV_DollyZoom_C");
    return (UBP_UserFOV_DollyZoom_C*)res;
}
