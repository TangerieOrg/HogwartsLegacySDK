#include "UObject.hpp"
#include "URPGAbilitySettings.hpp"
URPGAbilitySettings* URPGAbilitySettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilitySettings");
    return (URPGAbilitySettings*)res;
}
