#include "AActor.hpp"
#include "ACameraShakeSourceActor.hpp"
#include "UCameraShakeSourceComponent.hpp"
ACameraShakeSourceActor* ACameraShakeSourceActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CameraShakeSourceActor");
    return (ACameraShakeSourceActor*)res;
}
