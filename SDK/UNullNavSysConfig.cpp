#include "UNavigationSystemConfig.hpp"
#include "UNullNavSysConfig.hpp"
UNullNavSysConfig* UNullNavSysConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NullNavSysConfig");
    return (UNullNavSysConfig*)res;
}
