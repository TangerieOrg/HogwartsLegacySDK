#include "UMaterialExpression.hpp"
#include "UMaterialExpressionActorPositionWS.hpp"
UMaterialExpressionActorPositionWS* UMaterialExpressionActorPositionWS::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionActorPositionWS");
    return (UMaterialExpressionActorPositionWS*)res;
}
