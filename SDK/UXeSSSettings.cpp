#include "UDeveloperSettings.hpp"
#include "UXeSSSettings.hpp"
UXeSSSettings* UXeSSSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/XeSSPlugin.XeSSSettings");
    return (UXeSSSettings*)res;
}
