#include "EToolEffectType.hpp"
#include "UCurveFloat.hpp"
#include "UDataAsset.hpp"
#include "UToolEffectData.hpp"
UToolEffectData* UToolEffectData::StaticClass() {
    static auto res = find_uobject("Class /Script/Toolset.ToolEffectData");
    return (UToolEffectData*)res;
}
