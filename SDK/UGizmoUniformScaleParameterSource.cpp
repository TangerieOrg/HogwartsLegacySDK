#include "FGizmoVec2ParameterChange.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UGizmoBaseVec2ParameterSource.hpp"
#include "UGizmoUniformScaleParameterSource.hpp"
UGizmoUniformScaleParameterSource* UGizmoUniformScaleParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoUniformScaleParameterSource");
    return (UGizmoUniformScaleParameterSource*)res;
}
