#include "UBP_Lag_BroomMounting_C.hpp"
#include "UCameraStackBehaviorLag.hpp"
UBP_Lag_BroomMounting_C* UBP_Lag_BroomMounting_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_Lag_BroomMounting.BP_Lag_BroomMounting_C");
    return (UBP_Lag_BroomMounting_C*)res;
}
