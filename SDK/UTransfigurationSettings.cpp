#include "UObject.hpp"
#include "UTransfigurationSettings.hpp"
UTransfigurationSettings* UTransfigurationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationSettings");
    return (UTransfigurationSettings*)res;
}
