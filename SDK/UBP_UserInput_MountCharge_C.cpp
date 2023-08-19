#include "UBP_UserInput_MountCharge_C.hpp"
#include "UCameraStackBehaviorUserInput.hpp"
UBP_UserInput_MountCharge_C* UBP_UserInput_MountCharge_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_UserInput_MountCharge.BP_UserInput_MountCharge_C");
    return (UBP_UserInput_MountCharge_C*)res;
}
