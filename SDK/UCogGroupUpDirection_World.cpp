#include "UCogGroupUpDirection.hpp"
#include "UCogGroupUpDirection_World.hpp"
UCogGroupUpDirection_World* UCogGroupUpDirection_World::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupUpDirection_World");
    return (UCogGroupUpDirection_World*)res;
}
