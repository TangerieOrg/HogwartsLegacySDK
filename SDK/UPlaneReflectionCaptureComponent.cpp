#include "UBoxComponent.hpp"
#include "UDrawSphereComponent.hpp"
#include "UPlaneReflectionCaptureComponent.hpp"
#include "UReflectionCaptureComponent.hpp"
UPlaneReflectionCaptureComponent* UPlaneReflectionCaptureComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlaneReflectionCaptureComponent");
    return (UPlaneReflectionCaptureComponent*)res;
}
