#include "UBP_UserInput_Default_C.hpp"
#include "UBP_UserInput_MountLanding_C.hpp"
UBP_UserInput_MountLanding_C* UBP_UserInput_MountLanding_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_UserInput_MountLanding.BP_UserInput_MountLanding_C");
    return (UBP_UserInput_MountLanding_C*)res;
}
