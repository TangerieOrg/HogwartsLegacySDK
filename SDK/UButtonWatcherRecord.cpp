#include "UButtonWatcherRecord.hpp"
#include "UWatcherRecord.hpp"
UButtonWatcherRecord* UButtonWatcherRecord::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.ButtonWatcherRecord");
    return (UButtonWatcherRecord*)res;
}
