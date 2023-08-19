#include "FRPGUIInfo.hpp"
#include "UModExtension.hpp"
#include "URPGModExtensionUI.hpp"
URPGModExtensionUI* URPGModExtensionUI::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGModExtensionUI");
    return (URPGModExtensionUI*)res;
}
