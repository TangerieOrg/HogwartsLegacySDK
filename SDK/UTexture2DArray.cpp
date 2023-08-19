#include "TextureAddress.hpp"
#include "UTexture.hpp"
#include "UTexture2DArray.hpp"
UTexture2DArray* UTexture2DArray::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Texture2DArray");
    return (UTexture2DArray*)res;
}
