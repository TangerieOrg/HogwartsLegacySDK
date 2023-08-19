#include "UBP_SetArmLength_MountGraphornFalling_C.hpp"
#include "UCameraStackBehaviorSetArmLength.hpp"
UBP_SetArmLength_MountGraphornFalling_C* UBP_SetArmLength_MountGraphornFalling_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_SetArmLength_MountGraphornFalling.BP_SetArmLength_MountGraphornFalling_C");
    return (UBP_SetArmLength_MountGraphornFalling_C*)res;
}
