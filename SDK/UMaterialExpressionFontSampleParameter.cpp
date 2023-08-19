#include "FGuid.hpp"
#include "UMaterialExpressionFontSample.hpp"
#include "UMaterialExpressionFontSampleParameter.hpp"
UMaterialExpressionFontSampleParameter* UMaterialExpressionFontSampleParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionFontSampleParameter");
    return (UMaterialExpressionFontSampleParameter*)res;
}
