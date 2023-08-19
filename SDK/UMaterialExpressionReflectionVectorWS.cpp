#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionReflectionVectorWS.hpp"
UMaterialExpressionReflectionVectorWS* UMaterialExpressionReflectionVectorWS::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionReflectionVectorWS");
    return (UMaterialExpressionReflectionVectorWS*)res;
}
