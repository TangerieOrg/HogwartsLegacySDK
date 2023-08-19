#include "UMaterialExpression.hpp"
#include "UMaterialExpressionCameraPositionWS.hpp"
UMaterialExpressionCameraPositionWS* UMaterialExpressionCameraPositionWS::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionCameraPositionWS");
    return (UMaterialExpressionCameraPositionWS*)res;
}
