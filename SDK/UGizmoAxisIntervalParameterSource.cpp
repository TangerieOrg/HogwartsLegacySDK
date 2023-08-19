#include "UGizmoAxisIntervalParameterSource.hpp"
#include "UGizmoBaseFloatParameterSource.hpp"
UGizmoAxisIntervalParameterSource* UGizmoAxisIntervalParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoAxisIntervalParameterSource");
    return (UGizmoAxisIntervalParameterSource*)res;
}
