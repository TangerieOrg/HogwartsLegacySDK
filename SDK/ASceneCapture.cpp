#include "AActor.hpp"
#include "ASceneCapture.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ASceneCapture* ASceneCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SceneCapture");
    return (ASceneCapture*)res;
}
