#include "UBP_AddCameraSpaceTranslation_MountCharge_C.hpp"
#include "UCameraStackBehaviorAddCameraSpaceTranslation.hpp"
UBP_AddCameraSpaceTranslation_MountCharge_C* UBP_AddCameraSpaceTranslation_MountCharge_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_AddCameraSpaceTranslation_MountCharge.BP_AddCameraSpaceTranslation_MountCharge_C");
    return (UBP_AddCameraSpaceTranslation_MountCharge_C*)res;
}
