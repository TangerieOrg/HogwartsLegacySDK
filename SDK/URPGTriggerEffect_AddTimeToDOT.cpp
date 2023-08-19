#include "URPGTriggerEffect_AddTimeToDOT.hpp"
#include "URPGTriggerEffect_Base.hpp"
URPGTriggerEffect_AddTimeToDOT* URPGTriggerEffect_AddTimeToDOT::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_AddTimeToDOT");
    return (URPGTriggerEffect_AddTimeToDOT*)res;
}
