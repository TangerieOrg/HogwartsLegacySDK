#include "UBP_InputToYaw_MountGallop_C.hpp"
#include "UCameraStackBehaviorInputToYawSpeed.hpp"
UBP_InputToYaw_MountGallop_C* UBP_InputToYaw_MountGallop_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_InputToYaw_MountGallop.BP_InputToYaw_MountGallop_C");
    return (UBP_InputToYaw_MountGallop_C*)res;
}
