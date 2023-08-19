#include "UAblAbility.hpp"
#include "UAblComboAbility.hpp"
#include "USpellToolRecord.hpp"
UAblComboAbility* UAblComboAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblComboAbility");
    return (UAblComboAbility*)res;
}
