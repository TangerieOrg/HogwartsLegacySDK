#include "ABiped_Player.hpp"
#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnSucessfulBlock.hpp"
URPGAbilityEventListener_OnSucessfulBlock* URPGAbilityEventListener_OnSucessfulBlock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnSucessfulBlock");
    return (URPGAbilityEventListener_OnSucessfulBlock*)res;
}
