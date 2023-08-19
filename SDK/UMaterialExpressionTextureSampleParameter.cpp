#include "FGuid.hpp"
#include "UMaterialExpressionTextureSample.hpp"
#include "UMaterialExpressionTextureSampleParameter.hpp"
UMaterialExpressionTextureSampleParameter* UMaterialExpressionTextureSampleParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureSampleParameter");
    return (UMaterialExpressionTextureSampleParameter*)res;
}
