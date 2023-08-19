#include "URPGAbilityEventListener_OnCharacterDied.hpp"
#include "URPGAbilityEventListener_OnCharacterDiedFromSpell.hpp"
URPGAbilityEventListener_OnCharacterDiedFromSpell* URPGAbilityEventListener_OnCharacterDiedFromSpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnCharacterDiedFromSpell");
    return (URPGAbilityEventListener_OnCharacterDiedFromSpell*)res;
}
