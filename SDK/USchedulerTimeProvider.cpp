#include "UBaseProvider.hpp"
#include "USchedulerTimeProvider.hpp"
USchedulerTimeProvider* USchedulerTimeProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SchedulerTimeProvider");
    return (USchedulerTimeProvider*)res;
}
