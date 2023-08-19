#include "EPixelFormat.hpp"
#include "UTexture.hpp"
#include "UTexture2DDynamic.hpp"
UTexture2DDynamic* UTexture2DDynamic::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Texture2DDynamic");
    return (UTexture2DDynamic*)res;
}
