#include "UGizmoComponentAxisSource.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
UGizmoComponentAxisSource* UGizmoComponentAxisSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoComponentAxisSource");
    return (UGizmoComponentAxisSource*)res;
}
