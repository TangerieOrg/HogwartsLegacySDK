#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionFrac.hpp"
UMaterialExpressionFrac* UMaterialExpressionFrac::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionFrac");
    return (UMaterialExpressionFrac*)res;
}
