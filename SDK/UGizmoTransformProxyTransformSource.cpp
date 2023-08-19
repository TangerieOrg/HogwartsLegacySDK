#include "UGizmoBaseTransformSource.hpp"
#include "UGizmoTransformProxyTransformSource.hpp"
#include "UTransformProxy.hpp"
UGizmoTransformProxyTransformSource* UGizmoTransformProxyTransformSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoTransformProxyTransformSource");
    return (UGizmoTransformProxyTransformSource*)res;
}
