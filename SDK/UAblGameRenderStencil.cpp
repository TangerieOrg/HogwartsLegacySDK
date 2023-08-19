#include "FStencilManagerEffectName.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblGameRenderStencil.hpp"
UAblGameRenderStencil* UAblGameRenderStencil::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblGameRenderStencil");
    return (UAblGameRenderStencil*)res;
}
