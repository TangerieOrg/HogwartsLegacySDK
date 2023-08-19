#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionParameter.hpp"
UMaterialExpressionParameter* UMaterialExpressionParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParameter");
    return (UMaterialExpressionParameter*)res;
}
