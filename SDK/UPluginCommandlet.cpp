#include "UCommandlet.hpp"
#include "UPluginCommandlet.hpp"
UPluginCommandlet* UPluginCommandlet::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PluginCommandlet");
    return (UPluginCommandlet*)res;
}
