#include "UBP_SetArmLength_TightInterior_C.hpp"
#include "UCameraStackBehaviorSetArmLength.hpp"
UBP_SetArmLength_TightInterior_C* UBP_SetArmLength_TightInterior_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_SetArmLength_TightInterior.BP_SetArmLength_TightInterior_C");
    return (UBP_SetArmLength_TightInterior_C*)res;
}
