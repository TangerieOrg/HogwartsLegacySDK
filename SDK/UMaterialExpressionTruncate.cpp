#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionTruncate.hpp"
UMaterialExpressionTruncate* UMaterialExpressionTruncate::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTruncate");
    return (UMaterialExpressionTruncate*)res;
}
