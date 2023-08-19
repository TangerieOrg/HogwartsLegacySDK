#include "UMultiFX2_Base.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_MultiFX2.hpp"
URPGTriggerEffect_MultiFX2* URPGTriggerEffect_MultiFX2::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_MultiFX2");
    return (URPGTriggerEffect_MultiFX2*)res;
}
