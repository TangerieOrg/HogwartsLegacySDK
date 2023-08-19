#include "ESkinFXComponentAutoStartState.hpp"
#include "UClass.hpp"
#include "USkinFXComponent.hpp"
#include "USkinFXComponentAutoStart.hpp"
USkinFXComponentAutoStart* USkinFXComponentAutoStart::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXComponentAutoStart");
    return (USkinFXComponentAutoStart*)res;
}
