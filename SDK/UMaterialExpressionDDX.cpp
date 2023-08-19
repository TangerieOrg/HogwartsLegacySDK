#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDDX.hpp"
UMaterialExpressionDDX* UMaterialExpressionDDX::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDDX");
    return (UMaterialExpressionDDX*)res;
}
