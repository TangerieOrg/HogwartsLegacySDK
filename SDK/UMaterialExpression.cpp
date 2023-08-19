#include "UMaterial.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialFunction.hpp"
#include "UObject.hpp"
UMaterialExpression* UMaterialExpression::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpression");
    return (UMaterialExpression*)res;
}
