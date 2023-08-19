#include "UInteractiveGizmoManager.hpp"
#include "UMultiTransformer.hpp"
#include "UObject.hpp"
#include "UTransformGizmo.hpp"
#include "UTransformProxy.hpp"
UMultiTransformer* UMultiTransformer::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.MultiTransformer");
    return (UMultiTransformer*)res;
}
