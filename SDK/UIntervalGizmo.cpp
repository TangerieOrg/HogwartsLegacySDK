#include "UGizmoComponentAxisSource.hpp"
#include "UGizmoTransformChangeStateTarget.hpp"
#include "UInteractiveGizmo.hpp"
#include "UIntervalGizmo.hpp"
#include "UPrimitiveComponent.hpp"
#include "UTransformProxy.hpp"
UIntervalGizmo* UIntervalGizmo::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.IntervalGizmo");
    return (UIntervalGizmo*)res;
}
