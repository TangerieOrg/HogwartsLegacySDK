#include "UBP_AddCameraSpaceTranslation_Swimming_OpenSpace_C.hpp"
#include "UCameraStackBehaviorAddCameraSpaceTranslation.hpp"
UBP_AddCameraSpaceTranslation_Swimming_OpenSpace_C* UBP_AddCameraSpaceTranslation_Swimming_OpenSpace_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_AddCameraSpaceTranslation_Swimming_OpenSpace.BP_AddCameraSpaceTranslation_Swimming_OpenSpace_C");
    return (UBP_AddCameraSpaceTranslation_Swimming_OpenSpace_C*)res;
}
