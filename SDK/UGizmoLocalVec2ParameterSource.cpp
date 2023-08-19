#include "FGizmoVec2ParameterChange.hpp"
#include "FVector2D.hpp"
#include "UGizmoBaseVec2ParameterSource.hpp"
#include "UGizmoLocalVec2ParameterSource.hpp"
UGizmoLocalVec2ParameterSource* UGizmoLocalVec2ParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
    return (UGizmoLocalVec2ParameterSource*)res;
}
