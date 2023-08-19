#include "UTexture.hpp"
#include "UVolumeTexture.hpp"
UVolumeTexture* UVolumeTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VolumeTexture");
    return (UVolumeTexture*)res;
}
