#include "FBlueprintGlobalLightingCustomBlendablesLinearColor.hpp"
#include "FBlueprintGlobalLightingCustomBlendablesScalar.hpp"
#include "UBlueprintGlobalLightingCustomBlendables.hpp"
#include "UObject.hpp"
UBlueprintGlobalLightingCustomBlendables* UBlueprintGlobalLightingCustomBlendables::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.BlueprintGlobalLightingCustomBlendables");
    return (UBlueprintGlobalLightingCustomBlendables*)res;
}
