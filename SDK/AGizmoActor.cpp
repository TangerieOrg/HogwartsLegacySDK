#include "AGizmoActor.hpp"
#include "AInternalToolFrameworkActor.hpp"
AGizmoActor* AGizmoActor::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoActor");
    return (AGizmoActor*)res;
}
