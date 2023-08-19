#include "UBP_Lag_MountFalling_C.hpp"
#include "UCameraStackBehaviorLag.hpp"
UBP_Lag_MountFalling_C* UBP_Lag_MountFalling_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_Lag_MountFalling.BP_Lag_MountFalling_C");
    return (UBP_Lag_MountFalling_C*)res;
}
