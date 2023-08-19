#include "FGizmoFloatParameterChange.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UGizmoAxisScaleParameterSource.hpp"
#include "UGizmoBaseFloatParameterSource.hpp"
UGizmoAxisScaleParameterSource* UGizmoAxisScaleParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoAxisScaleParameterSource");
    return (UGizmoAxisScaleParameterSource*)res;
}
