#include "UObject.hpp"
#include "URPGCondition.hpp"
URPGCondition* URPGCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGCondition");
    return (URPGCondition*)res;
}
