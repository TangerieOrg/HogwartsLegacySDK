#include "UMaterialExpression.hpp"
#include "UWMaterialExpressionDecalSize.hpp"
UWMaterialExpressionDecalSize* UWMaterialExpressionDecalSize::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WMaterialExpressionDecalSize");
    return (UWMaterialExpressionDecalSize*)res;
}
