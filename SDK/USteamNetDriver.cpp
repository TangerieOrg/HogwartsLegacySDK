#include "UIpNetDriver.hpp"
#include "USteamNetDriver.hpp"
USteamNetDriver* USteamNetDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemSteam.SteamNetDriver");
    return (USteamNetDriver*)res;
}
