#include "UObject.hpp"
#include "UStereoLayerShape.hpp"
UStereoLayerShape* UStereoLayerShape::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StereoLayerShape");
    return (UStereoLayerShape*)res;
}
