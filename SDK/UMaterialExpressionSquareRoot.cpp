#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSquareRoot.hpp"
UMaterialExpressionSquareRoot* UMaterialExpressionSquareRoot::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSquareRoot");
    return (UMaterialExpressionSquareRoot*)res;
}
