#include "UGizmoBaseVec2ParameterSource.hpp"
#include "UObject.hpp"
UGizmoBaseVec2ParameterSource* UGizmoBaseVec2ParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
    return (UGizmoBaseVec2ParameterSource*)res;
}
