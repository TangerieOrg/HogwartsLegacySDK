#include "FPathCollectorPath.hpp"
#include "UObject.hpp"
#include "UPathCollector.hpp"
UPathCollector* UPathCollector::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PathCollector");
    return (UPathCollector*)res;
}
