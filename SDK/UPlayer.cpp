#include "APlayerController.hpp"
#include "UObject.hpp"
#include "UPlayer.hpp"
UPlayer* UPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Player");
    return (UPlayer*)res;
}
