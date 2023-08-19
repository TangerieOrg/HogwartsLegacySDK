#include "UBP_InputToYaw_Default_C.hpp"
#include "UCameraStackBehaviorInputToYawSpeed.hpp"
UBP_InputToYaw_Default_C* UBP_InputToYaw_Default_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_InputToYaw_Default.BP_InputToYaw_Default_C");
    return (UBP_InputToYaw_Default_C*)res;
}
