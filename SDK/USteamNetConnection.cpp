#include "UIpConnection.hpp"
#include "USteamNetConnection.hpp"
USteamNetConnection* USteamNetConnection::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemSteam.SteamNetConnection");
    return (USteamNetConnection*)res;
}
