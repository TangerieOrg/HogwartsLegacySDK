#include "AActor.hpp"
#include "ALandscapeGizmoActor.hpp"
ALandscapeGizmoActor* ALandscapeGizmoActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeGizmoActor");
    return (ALandscapeGizmoActor*)res;
}
