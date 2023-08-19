#include "EAspectRatioAxisConstraint.hpp"
#include "UClass.hpp"
#include "UGameViewportClient.hpp"
#include "ULocalPlayer.hpp"
#include "UPlayer.hpp"
ULocalPlayer* ULocalPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LocalPlayer");
    return (ULocalPlayer*)res;
}
