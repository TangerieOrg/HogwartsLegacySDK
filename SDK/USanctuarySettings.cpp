#include "UObject.hpp"
#include "USanctuarySettings.hpp"
USanctuarySettings* USanctuarySettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuarySettings");
    return (USanctuarySettings*)res;
}
