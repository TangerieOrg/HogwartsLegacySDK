#include "UCogGroupUpDirection.hpp"
#include "UCogGroupUpDirection_Actor.hpp"
UCogGroupUpDirection_Actor* UCogGroupUpDirection_Actor::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupUpDirection_Actor");
    return (UCogGroupUpDirection_Actor*)res;
}
