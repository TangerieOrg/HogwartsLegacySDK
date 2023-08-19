#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_ResetTacticalTokens.hpp"
URPGTriggerEffect_ResetTacticalTokens* URPGTriggerEffect_ResetTacticalTokens::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ResetTacticalTokens");
    return (URPGTriggerEffect_ResetTacticalTokens*)res;
}
