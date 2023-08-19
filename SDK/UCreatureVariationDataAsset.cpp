#include "FCreatureFemaleVariationSettings.hpp"
#include "FCreatureMaleVariationSettings.hpp"
#include "FCreatureMeshVariation.hpp"
#include "UCreatureVariationDataAsset.hpp"
#include "UDataAsset.hpp"
UCreatureVariationDataAsset* UCreatureVariationDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureVariationDataAsset");
    return (UCreatureVariationDataAsset*)res;
}
