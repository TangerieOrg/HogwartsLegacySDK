#include "UCompositeCurveTable.hpp"
#include "UCurveTable.hpp"
UCompositeCurveTable* UCompositeCurveTable::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CompositeCurveTable");
    return (UCompositeCurveTable*)res;
}
