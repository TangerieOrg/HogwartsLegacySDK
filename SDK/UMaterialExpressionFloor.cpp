#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionFloor.hpp"
UMaterialExpressionFloor* UMaterialExpressionFloor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionFloor");
    return (UMaterialExpressionFloor*)res;
}
