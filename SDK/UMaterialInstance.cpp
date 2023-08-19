#include "FFontParameterValue.hpp"
#include "FMaterialCachedParameters.hpp"
#include "FMaterialInstanceBasePropertyOverrides.hpp"
#include "FMaterialOverrideScalabitySettings.hpp"
#include "FRuntimeVirtualTextureParameterValue.hpp"
#include "FScalarParameterValue.hpp"
#include "FStaticParameterSet.hpp"
#include "FTextureParameterValue.hpp"
#include "FVectorParameterValue.hpp"
#include "UMaterialInstance.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "UPhysicalMaterial.hpp"
UMaterialInstance* UMaterialInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialInstance");
    return (UMaterialInstance*)res;
}
