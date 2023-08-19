#include "UInputBehaviorSet.hpp"
#include "UInteractiveGizmo.hpp"
#include "UObject.hpp"
UInteractiveGizmo* UInteractiveGizmo::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InteractiveGizmo");
    return (UInteractiveGizmo*)res;
}
