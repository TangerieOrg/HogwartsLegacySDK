#include "UGizmoComponentHitTarget.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
UGizmoComponentHitTarget* UGizmoComponentHitTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoComponentHitTarget");
    return (UGizmoComponentHitTarget*)res;
}
