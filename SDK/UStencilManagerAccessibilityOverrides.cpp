#include "FStencilManagerEffectInfoAccessibilityOverride.hpp"
#include "UDataAsset.hpp"
#include "UStencilManagerAccessibilityOverrides.hpp"
UStencilManagerAccessibilityOverrides* UStencilManagerAccessibilityOverrides::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerAccessibilityOverrides");
    return (UStencilManagerAccessibilityOverrides*)res;
}
