#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionRotateAboutAxis.hpp"
UMaterialExpressionRotateAboutAxis* UMaterialExpressionRotateAboutAxis::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionRotateAboutAxis");
    return (UMaterialExpressionRotateAboutAxis*)res;
}
