#include "UObject.hpp"
#include "UPlayerRenderTarget.hpp"
#include "UPlayerRenderTargetCascade.hpp"
#include "UTextureRenderTarget2DArray.hpp"
UPlayerRenderTarget* UPlayerRenderTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.PlayerRenderTarget");
    return (UPlayerRenderTarget*)res;
}
