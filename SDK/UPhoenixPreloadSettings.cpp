#include "FSoftClassPath.hpp"
#include "FSoftObjectPath.hpp"
#include "UObject.hpp"
#include "UPhoenixPreloadSettings.hpp"
UPhoenixPreloadSettings* UPhoenixPreloadSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixPreloadSettings");
    return (UPhoenixPreloadSettings*)res;
}
