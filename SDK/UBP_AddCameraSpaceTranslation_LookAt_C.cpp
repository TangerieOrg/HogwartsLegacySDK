#include "UBP_AddCameraSpaceTranslation_LookAt_C.hpp"
#include "UCameraStackBehaviorAddCameraSpaceTranslation.hpp"
UBP_AddCameraSpaceTranslation_LookAt_C* UBP_AddCameraSpaceTranslation_LookAt_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_AddCameraSpaceTranslation_LookAt.BP_AddCameraSpaceTranslation_LookAt_C");
    return (UBP_AddCameraSpaceTranslation_LookAt_C*)res;
}
