#include "UTexture.hpp"
#include "UTextureCube.hpp"
UTextureCube* UTextureCube::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TextureCube");
    return (UTextureCube*)res;
}
