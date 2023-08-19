#include "FGizmoVec2ParameterChange.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UGizmoBaseVec2ParameterSource.hpp"
#include "UGizmoPlaneScaleParameterSource.hpp"
UGizmoPlaneScaleParameterSource* UGizmoPlaneScaleParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoPlaneScaleParameterSource");
    return (UGizmoPlaneScaleParameterSource*)res;
}
