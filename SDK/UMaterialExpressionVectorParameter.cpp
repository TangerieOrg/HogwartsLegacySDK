#include "FLinearColor.hpp"
#include "UMaterialExpressionParameter.hpp"
#include "UMaterialExpressionVectorParameter.hpp"
UMaterialExpressionVectorParameter* UMaterialExpressionVectorParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVectorParameter");
    return (UMaterialExpressionVectorParameter*)res;
}
