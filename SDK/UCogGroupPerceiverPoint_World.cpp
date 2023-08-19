#include "UCogGroupPerceiverPoint.hpp"
#include "UCogGroupPerceiverPoint_World.hpp"
UCogGroupPerceiverPoint_World* UCogGroupPerceiverPoint_World::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupPerceiverPoint_World");
    return (UCogGroupPerceiverPoint_World*)res;
}
