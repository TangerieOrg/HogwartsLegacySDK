#include "UAnimNotify.hpp"
#include "UAnimNotify_SendHermesMessage.hpp"
UAnimNotify_SendHermesMessage* UAnimNotify_SendHermesMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_SendHermesMessage");
    return (UAnimNotify_SendHermesMessage*)res;
}
