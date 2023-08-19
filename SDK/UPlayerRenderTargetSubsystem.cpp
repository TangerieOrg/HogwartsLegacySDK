#include "UMaterialParameterCollection.hpp"
#include "UNiagaraParameterCollection.hpp"
#include "UPlayerRenderTarget.hpp"
#include "UPlayerRenderTargetSubsystem.hpp"
#include "UWorldSubsystem.hpp"
UPlayerRenderTargetSubsystem* UPlayerRenderTargetSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.PlayerRenderTargetSubsystem");
    return (UPlayerRenderTargetSubsystem*)res;
}
