#include "UClass.hpp"
#include "URPGTriggerEffect_ActorDamaged.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_RevivePlayer.hpp"
#include "UUserWidget.hpp"
URPGTriggerEffect_RevivePlayer* URPGTriggerEffect_RevivePlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_RevivePlayer");
    return (URPGTriggerEffect_RevivePlayer*)res;
}
