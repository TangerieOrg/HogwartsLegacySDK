#include "UBP_Lag_BroomDismount_C.hpp"
#include "UCameraStackBehaviorLag.hpp"
UBP_Lag_BroomDismount_C* UBP_Lag_BroomDismount_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_Lag_BroomDismount.BP_Lag_BroomDismount_C");
    return (UBP_Lag_BroomDismount_C*)res;
}
