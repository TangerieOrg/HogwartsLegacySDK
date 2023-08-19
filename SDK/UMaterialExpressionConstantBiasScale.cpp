#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionConstantBiasScale.hpp"
UMaterialExpressionConstantBiasScale* UMaterialExpressionConstantBiasScale::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionConstantBiasScale");
    return (UMaterialExpressionConstantBiasScale*)res;
}
