#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionMapARPassthroughCameraUV.hpp"
UMaterialExpressionMapARPassthroughCameraUV* UMaterialExpressionMapARPassthroughCameraUV::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionMapARPassthroughCameraUV");
    return (UMaterialExpressionMapARPassthroughCameraUV*)res;
}
