#include "UObject.hpp"
#include "UPerksSettings.hpp"
UPerksSettings* UPerksSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerksSettings");
    return (UPerksSettings*)res;
}
