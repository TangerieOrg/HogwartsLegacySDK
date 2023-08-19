#include "UGizmoBaseTransformSource.hpp"
#include "UGizmoScaledTransformSource.hpp"
UGizmoScaledTransformSource* UGizmoScaledTransformSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoScaledTransformSource");
    return (UGizmoScaledTransformSource*)res;
}
