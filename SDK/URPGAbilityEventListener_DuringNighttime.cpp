#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_DuringNighttime.hpp"
URPGAbilityEventListener_DuringNighttime* URPGAbilityEventListener_DuringNighttime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_DuringNighttime");
    return (URPGAbilityEventListener_DuringNighttime*)res;
}
