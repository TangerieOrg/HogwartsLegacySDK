#include "UCogGroupLookAtPoint.hpp"
#include "UCogGroupLookAtPoint_World.hpp"
UCogGroupLookAtPoint_World* UCogGroupLookAtPoint_World::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupLookAtPoint_World");
    return (UCogGroupLookAtPoint_World*)res;
}
