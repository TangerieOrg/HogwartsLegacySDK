#include "FAIDataProviderFloatValue.hpp"
#include "UBTTask_Wait.hpp"
#include "UBTTask_WaitProviderTime.hpp"
UBTTask_WaitProviderTime* UBTTask_WaitProviderTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_WaitProviderTime");
    return (UBTTask_WaitProviderTime*)res;
}
