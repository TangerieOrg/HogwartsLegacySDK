#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionArccosineFast.hpp"
UMaterialExpressionArccosineFast* UMaterialExpressionArccosineFast::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionArccosineFast");
    return (UMaterialExpressionArccosineFast*)res;
}
