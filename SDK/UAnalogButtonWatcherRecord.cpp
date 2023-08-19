#include "UAnalogButtonWatcherRecord.hpp"
#include "UButtonWatcherRecord.hpp"
UAnalogButtonWatcherRecord* UAnalogButtonWatcherRecord::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.AnalogButtonWatcherRecord");
    return (UAnalogButtonWatcherRecord*)res;
}
