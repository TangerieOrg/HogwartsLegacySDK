#include "UMaterialExpressionTextureBase.hpp"
#include "UMaterialExpressionTextureObject.hpp"
UMaterialExpressionTextureObject* UMaterialExpressionTextureObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureObject");
    return (UMaterialExpressionTextureObject*)res;
}
