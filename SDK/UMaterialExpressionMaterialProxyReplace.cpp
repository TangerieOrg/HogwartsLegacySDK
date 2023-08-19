#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionMaterialProxyReplace.hpp"
UMaterialExpressionMaterialProxyReplace* UMaterialExpressionMaterialProxyReplace::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionMaterialProxyReplace");
    return (UMaterialExpressionMaterialProxyReplace*)res;
}
