#include "UWindAffectedComponentOrientTo.hpp"
#include "UWindAffectedComponentRefresh.hpp"
UWindAffectedComponentOrientTo* UWindAffectedComponentOrientTo::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindAffectedComponentOrientTo");
    return (UWindAffectedComponentOrientTo*)res;
}
