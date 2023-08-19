#include "UMaterialExpressionAORIndex.hpp"
#include "UMaterialExpressionVectorArrayElement.hpp"
UMaterialExpressionVectorArrayElement* UMaterialExpressionVectorArrayElement::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVectorArrayElement");
    return (UMaterialExpressionVectorArrayElement*)res;
}
