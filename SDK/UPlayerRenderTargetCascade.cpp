#include "UObject.hpp"
#include "UPlayerRenderTargetCascade.hpp"
UPlayerRenderTargetCascade* UPlayerRenderTargetCascade::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.PlayerRenderTargetCascade");
    return (UPlayerRenderTargetCascade*)res;
}
