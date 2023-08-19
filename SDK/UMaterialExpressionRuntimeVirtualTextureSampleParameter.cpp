#include "FGuid.hpp"
#include "UMaterialExpressionRuntimeVirtualTextureSample.hpp"
#include "UMaterialExpressionRuntimeVirtualTextureSampleParameter.hpp"
UMaterialExpressionRuntimeVirtualTextureSampleParameter* UMaterialExpressionRuntimeVirtualTextureSampleParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter");
    return (UMaterialExpressionRuntimeVirtualTextureSampleParameter*)res;
}
