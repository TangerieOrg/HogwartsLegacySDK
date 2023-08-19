#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "UMaterialExpressionNamedRerouteBase.hpp"
#include "UMaterialExpressionNamedRerouteDeclaration.hpp"
UMaterialExpressionNamedRerouteDeclaration* UMaterialExpressionNamedRerouteDeclaration::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionNamedRerouteDeclaration");
    return (UMaterialExpressionNamedRerouteDeclaration*)res;
}
