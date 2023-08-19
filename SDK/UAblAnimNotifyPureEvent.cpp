#include "UAblAnimNotifyEvent.hpp"
#include "UAblAnimNotifyPureEvent.hpp"
UAblAnimNotifyPureEvent* UAblAnimNotifyPureEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAnimNotifyPureEvent");
    return (UAblAnimNotifyPureEvent*)res;
}
