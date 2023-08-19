#include "AActor.hpp"
#include "ALightCullingPlanes.hpp"
#include "ULightCullingComponent.hpp"
ALightCullingPlanes* ALightCullingPlanes::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightCullingPlanes");
    return (ALightCullingPlanes*)res;
}
