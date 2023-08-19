#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_HermesMessage.hpp"
URPGTriggerEffect_HermesMessage* URPGTriggerEffect_HermesMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_HermesMessage");
    return (URPGTriggerEffect_HermesMessage*)res;
}
