#include "UObject.hpp"
#include "UReporterBase.hpp"
UReporterBase* UReporterBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ReporterBase");
    return (UReporterBase*)res;
}
