#include "APerceptionPointArea.hpp"
#include "APerceptionPointSphere.hpp"
APerceptionPointSphere* APerceptionPointSphere::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerceptionPointSphere");
    return (APerceptionPointSphere*)res;
}
