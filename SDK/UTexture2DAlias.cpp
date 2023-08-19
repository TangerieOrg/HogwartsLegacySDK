#include "UTexture.hpp"
#include "UTexture2DAlias.hpp"
UTexture2DAlias* UTexture2DAlias::StaticClass() {
    static auto res = find_uobject("Class /Script/VolumetricClouds.Texture2DAlias");
    return (UTexture2DAlias*)res;
}
