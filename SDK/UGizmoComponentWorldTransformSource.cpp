#include "UGizmoBaseTransformSource.hpp"
#include "UGizmoComponentWorldTransformSource.hpp"
#include "USceneComponent.hpp"
UGizmoComponentWorldTransformSource* UGizmoComponentWorldTransformSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoComponentWorldTransformSource");
    return (UGizmoComponentWorldTransformSource*)res;
}
