#include "UStereoLayerShape.hpp"
#include "UStereoLayerShapeCubemap.hpp"
UStereoLayerShapeCubemap* UStereoLayerShapeCubemap::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StereoLayerShapeCubemap");
    return (UStereoLayerShapeCubemap*)res;
}
