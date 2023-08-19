#include "UBP_UserInput_Default_C.hpp"
#include "UCameraStackBehaviorUserInput.hpp"
UBP_UserInput_Default_C* UBP_UserInput_Default_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_UserInput_Default.BP_UserInput_Default_C");
    return (UBP_UserInput_Default_C*)res;
}
