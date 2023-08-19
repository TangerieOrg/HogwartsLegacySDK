#include "UIcarusConfig.hpp"
#include "UObject.hpp"
UIcarusConfig* UIcarusConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/IcarusRuntime.IcarusConfig");
    return (UIcarusConfig*)res;
}
