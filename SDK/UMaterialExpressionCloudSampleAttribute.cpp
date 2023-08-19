#include "UMaterialExpression.hpp"
#include "UMaterialExpressionCloudSampleAttribute.hpp"
UMaterialExpressionCloudSampleAttribute* UMaterialExpressionCloudSampleAttribute::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionCloudSampleAttribute");
    return (UMaterialExpressionCloudSampleAttribute*)res;
}
