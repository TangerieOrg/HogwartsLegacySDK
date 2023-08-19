#include "UInteractiveGizmoBuilder.hpp"
#include "UObject.hpp"
UInteractiveGizmoBuilder* UInteractiveGizmoBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InteractiveGizmoBuilder");
    return (UInteractiveGizmoBuilder*)res;
}
