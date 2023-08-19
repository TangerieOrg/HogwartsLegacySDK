#include "UAblAnimNotify.hpp"
#include "UAblAnimNotifyPure.hpp"
UAblAnimNotifyPure* UAblAnimNotifyPure::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAnimNotifyPure");
    return (UAblAnimNotifyPure*)res;
}
