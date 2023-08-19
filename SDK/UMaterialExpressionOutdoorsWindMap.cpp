#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionOutdoorsWindMap.hpp"
UMaterialExpressionOutdoorsWindMap* UMaterialExpressionOutdoorsWindMap::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionOutdoorsWindMap");
    return (UMaterialExpressionOutdoorsWindMap*)res;
}
