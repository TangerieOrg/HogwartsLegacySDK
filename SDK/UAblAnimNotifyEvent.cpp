#include "UAblAnimNotifyEvent.hpp"
#include "UAblGeneratedEvent.hpp"
UAblAnimNotifyEvent* UAblAnimNotifyEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAnimNotifyEvent");
    return (UAblAnimNotifyEvent*)res;
}
