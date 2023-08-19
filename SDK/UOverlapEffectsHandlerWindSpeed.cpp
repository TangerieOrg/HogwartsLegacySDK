#include "FOverlapEffectsHandlerWindSpeedEntry.hpp"
#include "UOverlapEffectsClothingDataAsset.hpp"
#include "UOverlapEffectsHandler.hpp"
#include "UOverlapEffectsHandlerWindSpeed.hpp"
UOverlapEffectsHandlerWindSpeed* UOverlapEffectsHandlerWindSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerWindSpeed");
    return (UOverlapEffectsHandlerWindSpeed*)res;
}
