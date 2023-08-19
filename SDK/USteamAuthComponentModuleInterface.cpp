#include "UHandlerComponentFactory.hpp"
#include "USteamAuthComponentModuleInterface.hpp"
USteamAuthComponentModuleInterface* USteamAuthComponentModuleInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemSteam.SteamAuthComponentModuleInterface");
    return (USteamAuthComponentModuleInterface*)res;
}
