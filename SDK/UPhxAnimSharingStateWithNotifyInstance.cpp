#include "UPhxAnimSharingStateInstance.hpp"
#include "UPhxAnimSharingStateWithNotifyInstance.hpp"
UPhxAnimSharingStateWithNotifyInstance* UPhxAnimSharingStateWithNotifyInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhxAnimSharingStateWithNotifyInstance");
    return (UPhxAnimSharingStateWithNotifyInstance*)res;
}
