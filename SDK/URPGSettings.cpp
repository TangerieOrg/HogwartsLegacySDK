#include "UObject.hpp"
#include "URPGSettings.hpp"
URPGSettings* URPGSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGSettings");
    return (URPGSettings*)res;
}
