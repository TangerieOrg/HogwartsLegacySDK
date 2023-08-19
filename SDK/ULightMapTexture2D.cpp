#include "ULightMapTexture2D.hpp"
#include "UTexture2D.hpp"
ULightMapTexture2D* ULightMapTexture2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightMapTexture2D");
    return (ULightMapTexture2D*)res;
}
