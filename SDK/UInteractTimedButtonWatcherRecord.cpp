#include "UInteractTimedButtonWatcherRecord.hpp"
#include "UTimedButtonWatcherRecord.hpp"
UInteractTimedButtonWatcherRecord* UInteractTimedButtonWatcherRecord::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InteractTimedButtonWatcherRecord");
    return (UInteractTimedButtonWatcherRecord*)res;
}
