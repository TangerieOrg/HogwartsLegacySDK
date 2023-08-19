#include "FVector.hpp"
#include "UDecalSphereHelper.hpp"
#include "USceneComponent.hpp"
UDecalSphereHelper* UDecalSphereHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DecalSphereHelper");
    return (UDecalSphereHelper*)res;
}
