#include "FMultiFXPlus.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_MultiFXPlus.hpp"
URPGTriggerEffect_MultiFXPlus* URPGTriggerEffect_MultiFXPlus::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_MultiFXPlus");
    return (URPGTriggerEffect_MultiFXPlus*)res;
}
