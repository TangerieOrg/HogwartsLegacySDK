#include "FStencilManagerEffectInfo.hpp"
#include "FStencilManagerMPCGlobals.hpp"
#include "FStencilPrimitiveTagRules.hpp"
#include "UDataAsset.hpp"
#include "ULocalStencilEffectActorOverrides.hpp"
#include "UMaterialInterface.hpp"
#include "UMaterialParameterCollection.hpp"
#include "UStencilManagerAccessibilityOverrides.hpp"
#include "UStencilManagerSettings.hpp"
#include "UStencilManagerWholeActorOverrides.hpp"
UStencilManagerSettings* UStencilManagerSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerSettings");
    return (UStencilManagerSettings*)res;
}
