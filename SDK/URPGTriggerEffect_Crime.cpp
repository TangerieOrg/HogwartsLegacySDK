#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_Crime.hpp"
URPGTriggerEffect_Crime* URPGTriggerEffect_Crime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_Crime");
    return (URPGTriggerEffect_Crime*)res;
}
