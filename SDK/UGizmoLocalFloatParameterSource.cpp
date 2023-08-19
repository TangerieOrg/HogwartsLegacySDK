#include "FGizmoFloatParameterChange.hpp"
#include "UGizmoBaseFloatParameterSource.hpp"
#include "UGizmoLocalFloatParameterSource.hpp"
UGizmoLocalFloatParameterSource* UGizmoLocalFloatParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoLocalFloatParameterSource");
    return (UGizmoLocalFloatParameterSource*)res;
}
