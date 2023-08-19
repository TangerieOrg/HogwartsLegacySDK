#include "UIpConnection.hpp"
#include "UNetConnection.hpp"
UIpConnection* UIpConnection::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.IpConnection");
    return (UIpConnection*)res;
}
