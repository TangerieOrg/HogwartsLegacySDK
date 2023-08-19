#include "FSoftObjectPath.hpp"
#include "UCreatureSettings.hpp"
#include "UObject.hpp"
UCreatureSettings* UCreatureSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureSettings");
    return (UCreatureSettings*)res;
}
