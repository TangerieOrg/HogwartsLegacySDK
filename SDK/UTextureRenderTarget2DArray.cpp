#include "EPixelFormat.hpp"
#include "FLinearColor.hpp"
#include "UTextureRenderTarget.hpp"
#include "UTextureRenderTarget2DArray.hpp"
UTextureRenderTarget2DArray* UTextureRenderTarget2DArray::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TextureRenderTarget2DArray");
    return (UTextureRenderTarget2DArray*)res;
}
