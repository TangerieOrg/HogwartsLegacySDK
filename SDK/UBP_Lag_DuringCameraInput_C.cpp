#include "UBP_Lag_DuringCameraInput_C.hpp"
#include "UCameraStackBehaviorLag.hpp"
UBP_Lag_DuringCameraInput_C* UBP_Lag_DuringCameraInput_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_Lag_DuringCameraInput.BP_Lag_DuringCameraInput_C");
    return (UBP_Lag_DuringCameraInput_C*)res;
}
