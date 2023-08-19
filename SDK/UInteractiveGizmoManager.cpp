#include "FActiveGizmo.hpp"
#include "UInteractiveGizmoManager.hpp"
#include "UObject.hpp"
UInteractiveGizmoManager* UInteractiveGizmoManager::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InteractiveGizmoManager");
    return (UInteractiveGizmoManager*)res;
}
