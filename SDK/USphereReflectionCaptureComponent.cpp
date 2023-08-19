#include "UDrawSphereComponent.hpp"
#include "UReflectionCaptureComponent.hpp"
#include "USphereReflectionCaptureComponent.hpp"
USphereReflectionCaptureComponent* USphereReflectionCaptureComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SphereReflectionCaptureComponent");
    return (USphereReflectionCaptureComponent*)res;
}
