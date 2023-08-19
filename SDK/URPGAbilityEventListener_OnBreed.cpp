#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnBreed.hpp"
URPGAbilityEventListener_OnBreed* URPGAbilityEventListener_OnBreed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnBreed");
    return (URPGAbilityEventListener_OnBreed*)res;
}
