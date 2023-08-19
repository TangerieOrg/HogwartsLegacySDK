#include "EMaterialExposedTextureProperty.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionTextureProperty.hpp"
UMaterialExpressionTextureProperty* UMaterialExpressionTextureProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureProperty");
    return (UMaterialExpressionTextureProperty*)res;
}
