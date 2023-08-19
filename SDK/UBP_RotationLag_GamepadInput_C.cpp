#include "UBP_RotationLag_GamepadInput_C.hpp"
#include "UCameraStackBehaviorRotationLag.hpp"
UBP_RotationLag_GamepadInput_C* UBP_RotationLag_GamepadInput_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_RotationLag_GamepadInput.BP_RotationLag_GamepadInput_C");
    return (UBP_RotationLag_GamepadInput_C*)res;
}
