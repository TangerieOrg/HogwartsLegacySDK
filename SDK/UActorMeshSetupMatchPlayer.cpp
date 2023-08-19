#include "UActorMeshSetupMatch.hpp"
#include "UActorMeshSetupMatchPlayer.hpp"
UActorMeshSetupMatchPlayer* UActorMeshSetupMatchPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupMatchPlayer");
    return (UActorMeshSetupMatchPlayer*)res;
}
