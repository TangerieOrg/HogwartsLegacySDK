#include "UModExtension.hpp"
#include "URPGModExtensionNotify.hpp"
URPGModExtensionNotify* URPGModExtensionNotify::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGModExtensionNotify");
    return (URPGModExtensionNotify*)res;
}
