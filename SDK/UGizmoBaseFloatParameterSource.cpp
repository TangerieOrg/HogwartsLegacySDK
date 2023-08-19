#include "UGizmoBaseFloatParameterSource.hpp"
#include "UObject.hpp"
UGizmoBaseFloatParameterSource* UGizmoBaseFloatParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoBaseFloatParameterSource");
    return (UGizmoBaseFloatParameterSource*)res;
}
