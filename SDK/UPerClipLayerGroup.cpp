#include "FPerClipLayerGroupLayer.hpp"
#include "UAnimMetaData.hpp"
#include "UPerClipLayerGroup.hpp"
UPerClipLayerGroup* UPerClipLayerGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.PerClipLayerGroup");
    return (UPerClipLayerGroup*)res;
}
