#include "ELevelComparison.hpp"
#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnCharacterDied.hpp"
URPGAbilityEventListener_OnCharacterDied* URPGAbilityEventListener_OnCharacterDied::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnCharacterDied");
    return (URPGAbilityEventListener_OnCharacterDied*)res;
}
