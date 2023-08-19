#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_LoadTutorial.hpp"
URPGTriggerEffect_LoadTutorial* URPGTriggerEffect_LoadTutorial::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_LoadTutorial");
    return (URPGTriggerEffect_LoadTutorial*)res;
}
