#include "AActor.hpp"
#include "AReflectionCapture.hpp"
#include "UReflectionCaptureComponent.hpp"
AReflectionCapture* AReflectionCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ReflectionCapture");
    return (AReflectionCapture*)res;
}
