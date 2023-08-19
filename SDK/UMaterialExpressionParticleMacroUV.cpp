#include "UMaterialExpression.hpp"
#include "UMaterialExpressionParticleMacroUV.hpp"
UMaterialExpressionParticleMacroUV* UMaterialExpressionParticleMacroUV::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParticleMacroUV");
    return (UMaterialExpressionParticleMacroUV*)res;
}
