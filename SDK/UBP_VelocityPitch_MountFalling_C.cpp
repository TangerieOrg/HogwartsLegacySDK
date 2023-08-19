#include "UBP_VelocityPitch_MountFalling_C.hpp"
#include "UCameraStackBehaviorVelocityPitch.hpp"
UBP_VelocityPitch_MountFalling_C* UBP_VelocityPitch_MountFalling_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_VelocityPitch_MountFalling.BP_VelocityPitch_MountFalling_C");
    return (UBP_VelocityPitch_MountFalling_C*)res;
}
