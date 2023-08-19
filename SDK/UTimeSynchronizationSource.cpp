#include "UObject.hpp"
#include "UTimeSynchronizationSource.hpp"
UTimeSynchronizationSource* UTimeSynchronizationSource::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeManagement.TimeSynchronizationSource");
    return (UTimeSynchronizationSource*)res;
}
