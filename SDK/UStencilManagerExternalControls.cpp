#include "UDataAsset.hpp"
#include "UStencilManagerExternalControl.hpp"
#include "UStencilManagerExternalControls.hpp"
UStencilManagerExternalControls* UStencilManagerExternalControls::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerExternalControls");
    return (UStencilManagerExternalControls*)res;
}
