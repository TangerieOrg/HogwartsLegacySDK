#include "ALandscapeGizmoActiveActor.hpp"
#include "ALandscapeGizmoActor.hpp"
ALandscapeGizmoActiveActor* ALandscapeGizmoActiveActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeGizmoActiveActor");
    return (ALandscapeGizmoActiveActor*)res;
}
