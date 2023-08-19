#include "FVector.hpp"
#include "UAxisAngleGizmo.hpp"
#include "UInteractiveGizmo.hpp"
UAxisAngleGizmo* UAxisAngleGizmo::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.AxisAngleGizmo");
    return (UAxisAngleGizmo*)res;
}
