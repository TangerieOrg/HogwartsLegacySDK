#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDistanceCullFade.hpp"
UMaterialExpressionDistanceCullFade* UMaterialExpressionDistanceCullFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDistanceCullFade");
    return (UMaterialExpressionDistanceCullFade*)res;
}
