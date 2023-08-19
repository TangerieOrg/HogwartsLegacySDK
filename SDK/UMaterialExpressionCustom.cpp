#include "ECustomMaterialOutputType.hpp"
#include "FCustomDefine.hpp"
#include "FCustomInput.hpp"
#include "FCustomOutput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionCustom.hpp"
UMaterialExpressionCustom* UMaterialExpressionCustom::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionCustom");
    return (UMaterialExpressionCustom*)res;
}
