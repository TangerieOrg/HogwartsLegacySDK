#include "UAblNpcReactPlayObjectArchitectVfxTask.hpp"
#include "UAblPlayObjectArchitectVfxTask.hpp"
UAblNpcReactPlayObjectArchitectVfxTask* UAblNpcReactPlayObjectArchitectVfxTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcReactPlayObjectArchitectVfxTask");
    return (UAblNpcReactPlayObjectArchitectVfxTask*)res;
}
