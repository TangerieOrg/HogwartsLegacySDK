#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionArcsineFast.hpp"
UMaterialExpressionArcsineFast* UMaterialExpressionArcsineFast::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionArcsineFast");
    return (UMaterialExpressionArcsineFast*)res;
}
