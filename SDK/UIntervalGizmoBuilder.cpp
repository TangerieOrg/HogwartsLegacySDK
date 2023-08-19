#include "UInteractiveGizmoBuilder.hpp"
#include "UIntervalGizmoBuilder.hpp"
UIntervalGizmoBuilder* UIntervalGizmoBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.IntervalGizmoBuilder");
    return (UIntervalGizmoBuilder*)res;
}
