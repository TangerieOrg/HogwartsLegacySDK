#include "AGeneratedMeshAreaLight.hpp"
#include "ASpotLight.hpp"
AGeneratedMeshAreaLight* AGeneratedMeshAreaLight::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GeneratedMeshAreaLight");
    return (AGeneratedMeshAreaLight*)res;
}
