#include "UActorProvider.hpp"
#include "UObject_LocalPlayer.hpp"
UObject_LocalPlayer* UObject_LocalPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Object_LocalPlayer");
    return (UObject_LocalPlayer*)res;
}
