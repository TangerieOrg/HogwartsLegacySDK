#include "UObject.hpp"
#include "UTexture2D.hpp"
#include "UTextureUtil.hpp"
UTextureUtil* UTextureUtil::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TextureUtil");
    return (UTextureUtil*)res;
}
