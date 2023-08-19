#include "UMaterialSwapMeshStateData.hpp"
#include "UUnmanageCharacterLightingAndFeaturesData.hpp"
UUnmanageCharacterLightingAndFeaturesData* UUnmanageCharacterLightingAndFeaturesData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UnmanageCharacterLightingAndFeaturesData");
    return (UUnmanageCharacterLightingAndFeaturesData*)res;
}
