#include "UBP_UserInput_Aiming_C.hpp"
#include "UCameraStackBehaviorUserInput.hpp"
UBP_UserInput_Aiming_C* UBP_UserInput_Aiming_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_UserInput_Aiming.BP_UserInput_Aiming_C");
    return (UBP_UserInput_Aiming_C*)res;
}
