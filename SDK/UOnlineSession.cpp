#include "UObject.hpp"
#include "UOnlineSession.hpp"
UOnlineSession* UOnlineSession::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.OnlineSession");
    return (UOnlineSession*)res;
}
