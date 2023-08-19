#include "UWorldFXRule.hpp"
#include "UWorldFXRuleCameraPlayer.hpp"
UWorldFXRuleCameraPlayer* UWorldFXRuleCameraPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleCameraPlayer");
    return (UWorldFXRuleCameraPlayer*)res;
}
