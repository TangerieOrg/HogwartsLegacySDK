#include "UReporterBase.hpp"
#include "UReporterGraph.hpp"
UReporterGraph* UReporterGraph::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ReporterGraph");
    return (UReporterGraph*)res;
}
