#include "UBP_AddArmOriginTranslation_TightInterior_C.hpp"
#include "UCameraStackBehaviorAddArmOriginTranslation.hpp"
UBP_AddArmOriginTranslation_TightInterior_C* UBP_AddArmOriginTranslation_TightInterior_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_AddArmOriginTranslation_TightInterior.BP_AddArmOriginTranslation_TightInterior_C");
    return (UBP_AddArmOriginTranslation_TightInterior_C*)res;
}
