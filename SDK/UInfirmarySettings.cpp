#include "UInfirmarySettings.hpp"
#include "UObject.hpp"
UInfirmarySettings* UInfirmarySettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InfirmarySettings");
    return (UInfirmarySettings*)res;
}
