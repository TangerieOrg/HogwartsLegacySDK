#include "FLayerActorStats.hpp"
#include "ULayer.hpp"
#include "UObject.hpp"
ULayer* ULayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Layer");
    return (ULayer*)res;
}
