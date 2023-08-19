#include "UStereoLayerShape.hpp"
#include "UStereoLayerShapeQuad.hpp"
UStereoLayerShapeQuad* UStereoLayerShapeQuad::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StereoLayerShapeQuad");
    return (UStereoLayerShapeQuad*)res;
}
