#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionRound.hpp"
UMaterialExpressionRound* UMaterialExpressionRound::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionRound");
    return (UMaterialExpressionRound*)res;
}
