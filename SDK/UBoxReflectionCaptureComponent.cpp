#include "UBoxComponent.hpp"
#include "UBoxReflectionCaptureComponent.hpp"
#include "UReflectionCaptureComponent.hpp"
UBoxReflectionCaptureComponent* UBoxReflectionCaptureComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BoxReflectionCaptureComponent");
    return (UBoxReflectionCaptureComponent*)res;
}
