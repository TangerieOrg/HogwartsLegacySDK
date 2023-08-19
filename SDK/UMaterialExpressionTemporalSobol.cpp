#include "FExpressionInput.hpp"
#include "FVector2D.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionTemporalSobol.hpp"
UMaterialExpressionTemporalSobol* UMaterialExpressionTemporalSobol::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTemporalSobol");
    return (UMaterialExpressionTemporalSobol*)res;
}
