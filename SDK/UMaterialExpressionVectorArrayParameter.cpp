#include "FGuid.hpp"
#include "UMaterialExpressionVectorArray.hpp"
#include "UMaterialExpressionVectorArrayParameter.hpp"
UMaterialExpressionVectorArrayParameter* UMaterialExpressionVectorArrayParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVectorArrayParameter");
    return (UMaterialExpressionVectorArrayParameter*)res;
}
