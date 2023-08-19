#include "AGizmoActor.hpp"
#include "AIntervalGizmoActor.hpp"
#include "UGizmoLineHandleComponent.hpp"
AIntervalGizmoActor* AIntervalGizmoActor::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.IntervalGizmoActor");
    return (AIntervalGizmoActor*)res;
}
