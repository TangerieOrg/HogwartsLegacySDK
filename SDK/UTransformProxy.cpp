#include "FTransform.hpp"
#include "UObject.hpp"
#include "UTransformProxy.hpp"
UTransformProxy* UTransformProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.TransformProxy");
    return (UTransformProxy*)res;
}
