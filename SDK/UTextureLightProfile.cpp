#include "UTexture2D.hpp"
#include "UTextureLightProfile.hpp"
UTextureLightProfile* UTextureLightProfile::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TextureLightProfile");
    return (UTextureLightProfile*)res;
}
