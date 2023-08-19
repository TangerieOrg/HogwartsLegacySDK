#include "UGizmoBaseTransformSource.hpp"
#include "UObject.hpp"
UGizmoBaseTransformSource* UGizmoBaseTransformSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoBaseTransformSource");
    return (UGizmoBaseTransformSource*)res;
}
