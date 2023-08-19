#include "UMaterialExpression.hpp"
#include "UMaterialExpressionRerouteBase.hpp"
UMaterialExpressionRerouteBase* UMaterialExpressionRerouteBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionRerouteBase");
    return (UMaterialExpressionRerouteBase*)res;
}
