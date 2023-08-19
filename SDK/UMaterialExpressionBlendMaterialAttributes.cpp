#include "EMaterialAttributeBlend\Type.hpp"
#include "FExpressionInput.hpp"
#include "FMaterialAttributesInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionBlendMaterialAttributes.hpp"
UMaterialExpressionBlendMaterialAttributes* UMaterialExpressionBlendMaterialAttributes::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionBlendMaterialAttributes");
    return (UMaterialExpressionBlendMaterialAttributes*)res;
}
