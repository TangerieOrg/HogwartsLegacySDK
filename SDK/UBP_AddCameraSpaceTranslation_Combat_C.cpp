#include "UBP_AddCameraSpaceTranslation_Combat_C.hpp"
#include "UCameraStackBehaviorAddCameraSpaceTranslation.hpp"
UBP_AddCameraSpaceTranslation_Combat_C* UBP_AddCameraSpaceTranslation_Combat_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_AddCameraSpaceTranslation_Combat.BP_AddCameraSpaceTranslation_Combat_C");
    return (UBP_AddCameraSpaceTranslation_Combat_C*)res;
}
