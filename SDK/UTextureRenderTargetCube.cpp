#include "EPixelFormat.hpp"
#include "FLinearColor.hpp"
#include "UTextureRenderTarget.hpp"
#include "UTextureRenderTargetCube.hpp"
UTextureRenderTargetCube* UTextureRenderTargetCube::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TextureRenderTargetCube");
    return (UTextureRenderTargetCube*)res;
}
