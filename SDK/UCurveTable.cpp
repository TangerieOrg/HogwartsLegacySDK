#include "UCurveTable.hpp"
#include "UObject.hpp"
UCurveTable* UCurveTable::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CurveTable");
    return (UCurveTable*)res;
}
