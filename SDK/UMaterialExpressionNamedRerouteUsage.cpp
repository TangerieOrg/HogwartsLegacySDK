#include "FGuid.hpp"
#include "UMaterialExpressionNamedRerouteBase.hpp"
#include "UMaterialExpressionNamedRerouteDeclaration.hpp"
#include "UMaterialExpressionNamedRerouteUsage.hpp"
UMaterialExpressionNamedRerouteUsage* UMaterialExpressionNamedRerouteUsage::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionNamedRerouteUsage");
    return (UMaterialExpressionNamedRerouteUsage*)res;
}
