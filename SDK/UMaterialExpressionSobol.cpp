#include "FExpressionInput.hpp"
#include "FVector2D.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSobol.hpp"
UMaterialExpressionSobol* UMaterialExpressionSobol::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSobol");
    return (UMaterialExpressionSobol*)res;
}
