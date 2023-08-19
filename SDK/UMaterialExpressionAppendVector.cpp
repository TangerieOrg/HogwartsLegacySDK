#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionAppendVector.hpp"
UMaterialExpressionAppendVector* UMaterialExpressionAppendVector::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionAppendVector");
    return (UMaterialExpressionAppendVector*)res;
}
