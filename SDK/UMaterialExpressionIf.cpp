#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionIf.hpp"
UMaterialExpressionIf* UMaterialExpressionIf::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionIf");
    return (UMaterialExpressionIf*)res;
}
