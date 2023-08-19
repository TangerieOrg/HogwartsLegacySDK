#include "UCameraShakePattern.hpp"
#include "UObject.hpp"
UCameraShakePattern* UCameraShakePattern::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CameraShakePattern");
    return (UCameraShakePattern*)res;
}
