#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionArctangent2Fast.hpp"
UMaterialExpressionArctangent2Fast* UMaterialExpressionArctangent2Fast::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionArctangent2Fast");
    return (UMaterialExpressionArctangent2Fast*)res;
}
