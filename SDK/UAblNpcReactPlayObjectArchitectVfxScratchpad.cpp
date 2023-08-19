#include "UAblNpcReactPlayObjectArchitectVfxScratchpad.hpp"
#include "UAblPlayObjectArchitectVfxScratchpad.hpp"
UAblNpcReactPlayObjectArchitectVfxScratchpad* UAblNpcReactPlayObjectArchitectVfxScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcReactPlayObjectArchitectVfxScratchpad");
    return (UAblNpcReactPlayObjectArchitectVfxScratchpad*)res;
}
