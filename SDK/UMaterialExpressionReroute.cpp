#include "FExpressionInput.hpp"
#include "UMaterialExpressionReroute.hpp"
#include "UMaterialExpressionRerouteBase.hpp"
UMaterialExpressionReroute* UMaterialExpressionReroute::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionReroute");
    return (UMaterialExpressionReroute*)res;
}
