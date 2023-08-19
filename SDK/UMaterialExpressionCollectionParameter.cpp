#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionCollectionParameter.hpp"
#include "UMaterialParameterCollection.hpp"
UMaterialExpressionCollectionParameter* UMaterialExpressionCollectionParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionCollectionParameter");
    return (UMaterialExpressionCollectionParameter*)res;
}
