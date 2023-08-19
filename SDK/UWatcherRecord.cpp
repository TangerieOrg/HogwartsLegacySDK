#include "FInputFilter.hpp"
#include "FName_GameLogicExpression.hpp"
#include "UObject.hpp"
#include "UWatcherRecord.hpp"
UWatcherRecord* UWatcherRecord::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.WatcherRecord");
    return (UWatcherRecord*)res;
}
