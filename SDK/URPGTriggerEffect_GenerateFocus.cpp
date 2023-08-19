#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_GenerateFocus.hpp"
URPGTriggerEffect_GenerateFocus* URPGTriggerEffect_GenerateFocus::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_GenerateFocus");
    return (URPGTriggerEffect_GenerateFocus*)res;
}
