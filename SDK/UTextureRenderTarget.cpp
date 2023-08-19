#include "UTexture.hpp"
#include "UTextureRenderTarget.hpp"
UTextureRenderTarget* UTextureRenderTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TextureRenderTarget");
    return (UTextureRenderTarget*)res;
}
