#include "FExpressionInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#include "UMaterialExpressionThinTranslucentMaterialOutput.hpp"
UMaterialExpressionThinTranslucentMaterialOutput* UMaterialExpressionThinTranslucentMaterialOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionThinTranslucentMaterialOutput");
    return (UMaterialExpressionThinTranslucentMaterialOutput*)res;
}
