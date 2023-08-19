#include "UBP_UserNudgingInput_Default_C.hpp"
#include "UCameraStackBehaviorUserNudgingInput.hpp"
UBP_UserNudgingInput_Default_C* UBP_UserNudgingInput_Default_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_UserNudgingInput_Default.BP_UserNudgingInput_Default_C");
    return (UBP_UserNudgingInput_Default_C*)res;
}
