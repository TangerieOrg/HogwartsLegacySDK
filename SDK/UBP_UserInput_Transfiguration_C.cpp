#include "UBP_UserInput_Transfiguration_C.hpp"
#include "UCameraStackBehaviorUserInput.hpp"
UBP_UserInput_Transfiguration_C* UBP_UserInput_Transfiguration_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_UserInput_Transfiguration.BP_UserInput_Transfiguration_C");
    return (UBP_UserInput_Transfiguration_C*)res;
}
