#include "UBP_AddCameraSpaceTranslation_Default_C.hpp"
#include "UCameraStackBehaviorAddCameraSpaceTranslation.hpp"
UBP_AddCameraSpaceTranslation_Default_C* UBP_AddCameraSpaceTranslation_Default_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_AddCameraSpaceTranslation_Default.BP_AddCameraSpaceTranslation_Default_C");
    return (UBP_AddCameraSpaceTranslation_Default_C*)res;
}
