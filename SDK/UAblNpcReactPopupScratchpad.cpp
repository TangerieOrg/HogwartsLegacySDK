#include "UAblNpcPopupScratchpad.hpp"
#include "UAblNpcReactPopupScratchpad.hpp"
#include "UAblReactionData.hpp"
UAblNpcReactPopupScratchpad* UAblNpcReactPopupScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcReactPopupScratchpad");
    return (UAblNpcReactPopupScratchpad*)res;
}
