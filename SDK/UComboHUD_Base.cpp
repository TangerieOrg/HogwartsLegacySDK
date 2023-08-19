#include "UComboHUD_Base.hpp"
#include "UHUDElementGroup.hpp"
UComboHUD_Base* UComboHUD_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ComboHUD_Base");
    return (UComboHUD_Base*)res;
}
