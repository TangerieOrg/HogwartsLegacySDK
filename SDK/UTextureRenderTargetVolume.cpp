#include "EPixelFormat.hpp"
#include "FLinearColor.hpp"
#include "UTextureRenderTarget.hpp"
#include "UTextureRenderTargetVolume.hpp"
UTextureRenderTargetVolume* UTextureRenderTargetVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TextureRenderTargetVolume");
    return (UTextureRenderTargetVolume*)res;
}
