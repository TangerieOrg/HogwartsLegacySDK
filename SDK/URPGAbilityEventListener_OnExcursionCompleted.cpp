#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnExcursionCompleted.hpp"
URPGAbilityEventListener_OnExcursionCompleted* URPGAbilityEventListener_OnExcursionCompleted::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnExcursionCompleted");
    return (URPGAbilityEventListener_OnExcursionCompleted*)res;
}
