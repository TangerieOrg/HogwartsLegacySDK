#include "UMaterialExpression.hpp"
#include "UMaterialExpressionStaticBool.hpp"
UMaterialExpressionStaticBool* UMaterialExpressionStaticBool::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionStaticBool");
    return (UMaterialExpressionStaticBool*)res;
}
