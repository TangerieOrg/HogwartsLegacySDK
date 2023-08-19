#include "UMaterialExpression.hpp"
#include "UMaterialExpressionCameraVectorWS.hpp"
UMaterialExpressionCameraVectorWS* UMaterialExpressionCameraVectorWS::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionCameraVectorWS");
    return (UMaterialExpressionCameraVectorWS*)res;
}
