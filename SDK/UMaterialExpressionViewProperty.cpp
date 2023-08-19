#include "EMaterialExposedViewProperty.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionViewProperty.hpp"
UMaterialExpressionViewProperty* UMaterialExpressionViewProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionViewProperty");
    return (UMaterialExpressionViewProperty*)res;
}
