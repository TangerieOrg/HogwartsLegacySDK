#include "UButtonWatcherRecord.hpp"
#include "UTimedButtonWatcherRecord.hpp"
UTimedButtonWatcherRecord* UTimedButtonWatcherRecord::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.TimedButtonWatcherRecord");
    return (UTimedButtonWatcherRecord*)res;
}
