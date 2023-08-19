#include "UObject.hpp"
#include "URPGAbilityEventListener_Base.hpp"
URPGAbilityEventListener_Base* URPGAbilityEventListener_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_Base");
    return (URPGAbilityEventListener_Base*)res;
}
