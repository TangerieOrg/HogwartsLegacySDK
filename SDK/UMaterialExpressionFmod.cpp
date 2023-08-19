#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionFmod.hpp"
UMaterialExpressionFmod* UMaterialExpressionFmod::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionFmod");
    return (UMaterialExpressionFmod*)res;
}
