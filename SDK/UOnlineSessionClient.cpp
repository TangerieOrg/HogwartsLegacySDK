#include "UOnlineSession.hpp"
#include "UOnlineSessionClient.hpp"
UOnlineSessionClient* UOnlineSessionClient::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.OnlineSessionClient");
    return (UOnlineSessionClient*)res;
}
