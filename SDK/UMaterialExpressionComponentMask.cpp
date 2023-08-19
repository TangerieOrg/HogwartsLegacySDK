#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionComponentMask.hpp"
UMaterialExpressionComponentMask* UMaterialExpressionComponentMask::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionComponentMask");
    return (UMaterialExpressionComponentMask*)res;
}
