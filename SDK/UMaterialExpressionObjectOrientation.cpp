#include "UMaterialExpression.hpp"
#include "UMaterialExpressionObjectOrientation.hpp"
UMaterialExpressionObjectOrientation* UMaterialExpressionObjectOrientation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionObjectOrientation");
    return (UMaterialExpressionObjectOrientation*)res;
}
