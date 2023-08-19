#include "AReflectionCapture.hpp"
#include "ASphereReflectionCapture.hpp"
#include "UDrawSphereComponent.hpp"
ASphereReflectionCapture* ASphereReflectionCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SphereReflectionCapture");
    return (ASphereReflectionCapture*)res;
}
