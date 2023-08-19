#include "UAblAbility.hpp"
#include "UAblNPCAbility.hpp"
UAblNPCAbility* UAblNPCAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPCAbility");
    return (UAblNPCAbility*)res;
}
