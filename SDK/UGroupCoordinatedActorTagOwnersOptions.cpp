#include "FBlackboardKeySelector.hpp"
#include "UGroupCoordinatedActorTagOwnersOptions.hpp"
#include "UQualifierOptions.hpp"
UGroupCoordinatedActorTagOwnersOptions* UGroupCoordinatedActorTagOwnersOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.GroupCoordinatedActorTagOwnersOptions");
    return (UGroupCoordinatedActorTagOwnersOptions*)res;
}
