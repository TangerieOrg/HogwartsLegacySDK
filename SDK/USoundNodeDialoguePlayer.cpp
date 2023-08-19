#include "FDialogueWaveParameter.hpp"
#include "USoundNode.hpp"
#include "USoundNodeDialoguePlayer.hpp"
USoundNodeDialoguePlayer* USoundNodeDialoguePlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeDialoguePlayer");
    return (USoundNodeDialoguePlayer*)res;
}
