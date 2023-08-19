#include "UFont.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionFontSample.hpp"
UMaterialExpressionFontSample* UMaterialExpressionFontSample::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionFontSample");
    return (UMaterialExpressionFontSample*)res;
}
