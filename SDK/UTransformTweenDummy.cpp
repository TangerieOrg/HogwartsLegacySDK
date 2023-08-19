#include "UObject.hpp"
#include "UTransformTweenDummy.hpp"
UTransformTweenDummy* UTransformTweenDummy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransformTweenDummy");
    return (UTransformTweenDummy*)res;
}
