#include "UMaterialExpressionNamedRerouteBase.hpp"
#include "UMaterialExpressionRerouteBase.hpp"
UMaterialExpressionNamedRerouteBase* UMaterialExpressionNamedRerouteBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionNamedRerouteBase");
    return (UMaterialExpressionNamedRerouteBase*)res;
}
